#ifndef PRODUCCION_LISTA_CASE1_H
#define PRODUCCION_LISTA_CASE1_H
#include"produccion_lista_case.h"
#include"produccion_lista_instrucciones.h"
#include"produccion_expresion.h"
class produccion_lista_case1:public produccion_lista_case
{
public:
    QString fila;
    produccion_expresion*pe;
    produccion_lista_instrucciones*pi;
    produccion_lista_case*pc;
    produccion_lista_case1(produccion_lista_case*pc,produccion_expresion*pe,produccion_lista_instrucciones*pi,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_CASE1_H
