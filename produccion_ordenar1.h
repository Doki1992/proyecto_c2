#ifndef PRODUCCION_ORDENAR1_H
#define PRODUCCION_ORDENAR1_H
#include<QString>
#include"produccion_ordenar.h"
class produccion_ordenar1:public produccion_ordenar
{
public:
    QString iden;
    QString cadena;
    QString fila;
    produccion_ordenar1(QString iden,QString cadena,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_ORDENAR1_H
