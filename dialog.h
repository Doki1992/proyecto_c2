#ifndef DIALOG_H
#define DIALOG_H
#include<QtGui>
#include<QtCore>
#include<QGraphicsScene>
#include<QGraphicsEllipseItem>
#include<QGraphicsRectItem>
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QLinkedList<QGraphicsItem *> *rect, QWidget *parent = 0);
    ~Dialog();
    QLinkedList<QGraphicsItem *> *rect_local;
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    QGraphicsScene*escena;
    QGraphicsEllipseItem*elipse;
    QGraphicsRectItem*rectangulo;
};

#endif // DIALOG_H
