#ifndef VECTOR_H
#define VECTOR_H
#include "simbolo.h"

class Vector:public simbolo
{
public:
    Vector(QString conservar,QString tipo,QString nombre,QStringList*lista_valores,QLinkedList<int>*lista_dimensiones);
    QString conservar;
    QString tipo;
    QString nombre;
    QStringList*lista_valores;
    QLinkedList<int>*lista_dimensiones;
    virtual QString getId();
};

#endif // VECTOR_H
