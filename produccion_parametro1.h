#ifndef PRODUCCION_PARAMETRO1_H
#define PRODUCCION_PARAMETRO1_H
#include"produccion_parametro.h"
#include"produccion_tipo.h"
#include"declarador.h"
class produccion_parametro1:public produccion_parametro
{
public:
    QString fila;
    produccion_tipo*pt;
     declarador *id;
    produccion_parametro1(produccion_tipo*pt, declarador* id,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_PARAMETRO1_H
