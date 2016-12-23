#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<QFile>
#include<QTextEdit>
#include"nodo.h"
#include "chequea_tipos_1.h"
#include"ejecuta_visitor.h"
#include<QDirModel>
#include"token_error.h"
extern int yyrestart( FILE* archivo);//METODO QUE PASA EL ARCHIVO A FLEX
extern int yyparse(); //METODO QUE INICIA EL ANALISIS SINTACTICO
extern QLinkedList<token_error*> *lista_errores();
extern QLinkedList<token_error*> *lista_errores_s();
extern void asigna_lista(QLinkedList<token_error*> *lista);
extern void setSalida(QTextEdit* sal); //METODO CREADO EN EL ANALIZADOR SINTACTICO PARA COMUNICAR PRINCIPAL CON EL PARSER
extern nodo*getRaiz();
extern void setRaiz();
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    chequea_tipos_1 *types;
    ejecuta_visitor *exec;
    tabla_simbolos*ts;
    QLinkedList<tabla_simbolos*>*ambitos;
    QLinkedList<token_error*> *errores=new QLinkedList<token_error*>();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void leer_archivo(QString path);
    void on_actionAbrir_triggered();

    void on_actionGuardar_como_triggered();

    void on_actionGuardar_triggered();

    void on_actionNuevo_triggered();

    void on_actionSimbolos_triggered();

    QString reporte_simbolos();
    QString reporte_errores();

    void on_actionTabla_errores_triggered();

private:
    Ui::MainWindow *ui;
    QDirModel*directorio;
};

#endif // MAINWINDOW_H
