#ifndef PRODUCCION_TIPO2_H
#define PRODUCCION_TIPO2_H
#include"produccion_tipo.h"
class produccion_tipo2:public produccion_tipo
{
public:
    QString tipo;
    QString fila;
    produccion_tipo2(QString tipo,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_TIPO2_H
