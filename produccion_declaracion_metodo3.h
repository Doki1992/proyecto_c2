#ifndef PRODUCCION_DECLARACION_METODO3_H
#define PRODUCCION_DECLARACION_METODO3_H
#include"produccion_declaracion_metodo.h"
#include"produccion_lista_parametros.h"
#include"produccion_lista_instrucciones.h"
#include "declarador.h"
class produccion_declaracion_metodo3:public produccion_declaracion_metodo
{
public:
    QString fila;
    declarador* iden;
    produccion_lista_instrucciones*pl;
    produccion_lista_parametros*pp;
    produccion_declaracion_metodo3(declarador* iden,produccion_lista_parametros*pp,produccion_lista_instrucciones*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_DECLARACION_METODO3_H
