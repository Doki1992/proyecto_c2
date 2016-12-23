#ifndef PRODUCCION_LISTA_INSTRUCCIONES1_H
#define PRODUCCION_LISTA_INSTRUCCIONES1_H
#include"produccion_lista_instrucciones.h"
#include"produccion_instruccion.h"
class produccion_lista_instrucciones1:public produccion_lista_instrucciones
{
public:
    QString fila;
    produccion_instruccion*pi;
    produccion_lista_instrucciones*pl;
    produccion_lista_instrucciones1(produccion_lista_instrucciones*pl,produccion_instruccion*pi,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_INSTRUCCIONES1_H
