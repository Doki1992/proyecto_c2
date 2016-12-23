#ifndef PRODUCCION_TIPO1_H
#define PRODUCCION_TIPO1_H
#include"produccion_tipo.h"
class produccion_tipo1:public produccion_tipo
{
public:
    QString tipo;
    QString fila;
    produccion_tipo1(QString tipo,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_TIPO1_H
