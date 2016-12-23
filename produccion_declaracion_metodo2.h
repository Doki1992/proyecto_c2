#ifndef PRODUCCION_DECLARACION_METODO2_H
#define PRODUCCION_DECLARACION_METODO2_H
#include"produccion_declaracion_metodo.h"
#include"produccion_tipo.h"
#include"produccion_lista_parametros.h"
#include"produccion_lista_instrucciones.h"
#include "declarador.h"
class produccion_declaracion_metodo2:public produccion_declaracion_metodo
{
public:
    declarador* iden;
    produccion_lista_instrucciones*pl;
    produccion_lista_parametros*pp;
    produccion_tipo*pt;
    QString fila;
    produccion_declaracion_metodo2(produccion_tipo*pt,declarador* iden,produccion_lista_parametros*pp,produccion_lista_instrucciones*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_DECLARACION_METODO2_H
