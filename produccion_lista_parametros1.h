#ifndef PRODUCCION_LISTA_PARAMETROS1_H
#define PRODUCCION_LISTA_PARAMETROS1_H
#include"produccion_lista_parametros.h"
#include"produccion_parametro.h"
class produccion_lista_parametros1:public produccion_lista_parametros
{
public:
    produccion_lista_parametros*pl;
    produccion_parametro*pp;
    QString fila;
    produccion_lista_parametros1(produccion_lista_parametros*pl,produccion_parametro*pp,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_PARAMETROS1_H
