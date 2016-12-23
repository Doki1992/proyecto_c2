#ifndef PRODUCCION_LISTA_CASE2_H
#define PRODUCCION_LISTA_CASE2_H
#include"produccion_lista_case.h"
#include"produccion_lista_instrucciones.h"
#include"produccion_expresion.h"
class produccion_lista_case2:public produccion_lista_case
{
public:
    produccion_expresion*pe;
    QString fila;
    produccion_lista_instrucciones*pi;
    produccion_lista_case2(produccion_expresion*pe,produccion_lista_instrucciones*pi,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_CASE2_H
