#ifndef PRODUCCION_TIPO5_H
#define PRODUCCION_TIPO5_H
#include"produccion_tipo.h"
class produccion_tipo5:public produccion_tipo
{
public:
    QString fila;
    QString tipo;
    produccion_tipo5(QString tipo,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_TIPO5_H
