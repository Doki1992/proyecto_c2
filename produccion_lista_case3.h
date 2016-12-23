#ifndef PRODUCCION_LISTA_CASE3_H
#define PRODUCCION_LISTA_CASE3_H
#include"produccion_lista_case.h"
#include"produccion_lista_instrucciones.h"
class produccion_lista_case3:public produccion_lista_case
{
public:
    QString fila;
    produccion_lista_instrucciones*pi;
    produccion_lista_case3(produccion_lista_instrucciones*pi,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_CASE3_H
