#ifndef PRODUCCION_TIPO4_H
#define PRODUCCION_TIPO4_H
#include"produccion_tipo.h"
class produccion_tipo4:public produccion_tipo
{
public:
    QString tipo;
    QString fila;
    produccion_tipo4(QString tipo,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_TIPO4_H
