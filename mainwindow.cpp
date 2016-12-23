#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QTextStream"
#include<QFileDialog>
#include"mostrar_lineas.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    directorio=new QDirModel(this);
    directorio->setReadOnly(false);
    directorio->setSorting(QDir::DirsFirst| QDir::IgnoreCase| QDir::Name);
    ui->treeView->setModel(directorio);
    QModelIndex index=directorio->index("/");
    ui->treeView->expand(index);
    ui->treeView->scrollTo(index);
    ui->treeView->setCurrentIndex(index);
    ui->treeView->resizeColumnToContents(0);
    this->ts = new tabla_simbolos();
    this->types = new chequea_tipos_1(ts);
    ambitos=new QLinkedList<simbolo*>();
    this->exec = new ejecuta_visitor(ts,ambitos);
    this->lista_heredados = new QLinkedList<heredados*>();
}

MainWindow::~MainWindow()
{
    delete ui;

}
int cont_tabs=0;

void MainWindow::crear_heredados(QLinkedList<heredados *> *lista_heredados,lienzo* l,tabla_simbolos*ts){
    QStringList lista_h;
    QString lis = l->hereda;
    if(lis.contains(",")){
        lista_h = lis.split(",");
    }else{
        lista_h.append(lis);
    }
    for (int i=0; i<lista_h.count(); i++){
        if(ts->contains(lista_h.at(i))){
            heredados* h = new heredados(NULL,ts->value(lista_h.at(i)),"");
            lista_heredados->append(h);
        }

    }
}

void MainWindow::on_pushButton_clicked()
{
    ambitos->clear();
    //setRaiz();
    QFile file("temp.txt"); //SE CREA UN ARCHIVO TEMPORAL PARA COMPILARLO
    if ( file.open( file.WriteOnly ) ) { //BUFFER PARA EL TEXTO QUE SE DESEA COMPILAR
        QTextStream stream1( &file );
        stream1 << ui->textEdit->toPlainText();
    }
    const char* x = "temp.txt";
    FILE* input = fopen(x, "r" );
    yyrestart(input);//SE PASA LA CADENA DE ENTRADA A FLEX
    setSalida(ui->textEdit);//SE ASIGNA EL PUNTERO DE LA SALIDA PARA SER USADA POR BISON
    yyparse();//SE INICIA LA COMPILACION
    nodo*n=getRaiz();

     //tabla de simbolos
if(n!=NULL){
    QString tip = n->accept(types);
    if (!tip.contains("error")){
        QHash<QString,simbolo*>::iterator i;
        for(i=ts->begin();i!=ts->end();++i){
           lienzo*l=(lienzo*)i.value();
            if(l->ts->contains("principal")==true){
                //primero meter tabla de simbolos del lienzo donde esta el principal
                //luego el del principal
                //ambitos->append(l->ts);                

                QHash<QString,simbolo*>::iterator j;
                for(j=l->ts->begin();j!=l->ts->end();++j){
                    simbolo * s = *j;
                    QString id ="";
                    declaracion_metodo*m;
                    variable*v;
                    if(s->getId()=="metodo"){
                        m = (declaracion_metodo*)s;
                        id=m->id;
                    }else{
                        v =(variable*)s;
                        id=v->id;
                    }
                    if(id=="principal"){
                        ambitos->append(m);//ingresando tabla de simbolos del metodo principal
                    }
                }
                ambitos->append(l);//INGRESANDO TABLA DE SIMBOLOS DEL LIENZO
                qDebug()<<"entro";
            }
        }
        //ejecuta visitor
        if(ambitos->count()==2){
            lienzo * l = (lienzo*)ambitos->last();//por aqui hay un error
            crear_heredados(lista_heredados,l,ts);
            exec->lista=lista_heredados;
            n->accept(exec);
        }else{
            qDebug()<<"solo puede haber una clase con un metodo PRINCIPAL";
        }
    }else{

    }
}
    // ejecuta_visitor*eje=new ejecuta_visitor();
    //ejecuta_visitor2*eje2=new ejecuta_visitor2();
    //int v=n->accept(eje2);
    //QString val=n->accept(eje);
//    int ds=tabla_simbolos_l->count();
    //  ui->textEdit_2->setText(QString::number(tabla_simbolos_l->count()));
    //ui->textEdit_2->setText(QString::number(val));
}

void MainWindow::on_pushButton_2_clicked()
{
    QModelIndex index=ui->treeView->currentIndex();
    if(!index.isValid())return;
    if(directorio->fileInfo(index).isDir()){
        //directorio
        QStringList lista=QDir(directorio->filePath(index)).entryList();
        int i;
        qDebug()<<directorio->filePath(index)+"/";
        for(i=0;i<lista.count();i++){
            if(lista[i].endsWith(".txt")){
                qDebug()<<directorio->filePath(index)+"/"+lista[i];
                leer_archivo(directorio->filePath(index)+"/"+lista[i]);
            }
        }
    }
}
void MainWindow::leer_archivo(QString path){
    QFile file_for_reading(path);
    file_for_reading.open(QIODevice::ReadOnly);
    QTextStream text_stream_for_reading(&file_for_reading);
    ui->textEdit->append(text_stream_for_reading.readAll());
}

void MainWindow::on_actionAbrir_triggered()
{
    QString nombre_archivo=QFileDialog::getOpenFileName(this,("abrir_archivo"),"",("txt(*.txt);;All FIles(*)"));
    QFile archivo(nombre_archivo);
    if(archivo.open(QIODevice::ReadOnly|QIODevice::Text)){
        QWidget *q=new QWidget();
        //QTextEdit *t=new QTextEdit();
        Mostrar_lineas*t=new Mostrar_lineas();
        ui->tabWidget->addTab(t,"pagina "+QString::number(cont_tabs));
        t->appendPlainText(QString::fromUtf8(archivo.readAll()));
    }
}

void MainWindow::on_actionGuardar_como_triggered()
{
    int ac=ui->tabWidget->currentIndex();
    QWidget *q=ui->tabWidget->widget(ac);
    QString t;
    t=((QTextEdit*)q)->toPlainText();
    QString nombreArchivo = QFileDialog::getSaveFileName(this,("Guardar archivo"), "",("txt(*.txt);;All Files(*)"));
        if(nombreArchivo.isEmpty())
            return;
        QFile archivo(nombreArchivo);
        if (archivo.open(QIODevice::WriteOnly|QIODevice::Text))
        {
            archivo.write(t.toUtf8());
        }

}

void MainWindow::on_actionGuardar_triggered()
{
    int ac=ui->tabWidget->currentIndex();
    QWidget *q=ui->tabWidget->widget(ac);
    QString t;
    t=((QTextEdit*)q)->toPlainText();
    QString nombreArchivo = QFileDialog::getSaveFileName(this,
                                                            ("Guardar archivo"), "",
                                                            ("txt(*.txt);;All Files(*)"));

        if(nombreArchivo.isEmpty())
            return;

        QFile archivo(nombreArchivo);
        if (archivo.open(QIODevice::WriteOnly|QIODevice::Text))
        {
            archivo.write(t.toUtf8());
        }
}

void MainWindow::on_actionNuevo_triggered()
{
    QWidget *q=new QWidget();
    Mostrar_lineas*c=new Mostrar_lineas();
    ui->tabWidget->addTab(c,"pagina "+QString::number(cont_tabs));
    cont_tabs++;
}
