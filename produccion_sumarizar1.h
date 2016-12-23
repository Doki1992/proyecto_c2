#ifndef PRODUCCION_SUMARIZAR1_H
#define PRODUCCION_SUMARIZAR1_H
#include<QString>
#include"produccion_sumarizar.h"
class produccion_sumarizar1:public produccion_sumarizar
{
public:
    QString iden;
    QString fila;
    produccion_sumarizar1(QString iden,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_SUMARIZAR1_H
