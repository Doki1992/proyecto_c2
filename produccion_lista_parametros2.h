#ifndef PRODUCCION_LISTA_PARAMETROS2_H
#define PRODUCCION_LISTA_PARAMETROS2_H
#include"produccion_lista_parametros.h"
#include"produccion_parametro.h"
class produccion_lista_parametros2:public produccion_lista_parametros
{
public:
    produccion_parametro*pp;
    QString fila;
    produccion_lista_parametros2(produccion_parametro*pp,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_PARAMETROS2_H
