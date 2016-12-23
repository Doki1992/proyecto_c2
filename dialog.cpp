#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QLinkedList<QGraphicsItem *> *rect,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    rect_local=new QLinkedList<QGraphicsItem*>();
    ui->setupUi(this);
    escena=new QGraphicsScene(this);
    ui->graphicsView->setScene(escena);
    this->rect_local=rect;
    QLinkedList<QGraphicsItem*>::iterator i;
    i=this->rect_local->begin();
    int tot=rect_local->count();
    int cont=0;
    while(i!=this->rect_local->end()){
        escena->addItem((*i));
        ++i;
    }
}

Dialog::~Dialog()
{
    delete ui;
}
