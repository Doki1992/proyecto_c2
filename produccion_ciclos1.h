#ifndef PRODUCCION_CICLOS1_H
#define PRODUCCION_CICLOS1_H
#include"produccion_ciclos.h"
#include"produccion_expresion.h"
#include"produccion_lista_instrucciones.h"
class produccion_ciclos1:public produccion_ciclos
{
public:
    produccion_expresion*pe;
    produccion_lista_instrucciones*l1;
    produccion_lista_instrucciones*l2;
    QString fila;
    produccion_ciclos1(produccion_expresion*pe,produccion_lista_instrucciones*p1,produccion_lista_instrucciones*p2,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_CICLOS1_H
