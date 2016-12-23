#ifndef PRODUCCION_LISTA_EXPRESION2_H
#define PRODUCCION_LISTA_EXPRESION2_H
#include"produccion_lista_expresion.h"
#include"produccion_expresion.h"
class produccion_lista_expresion2:public produccion_lista_expresion
{
public:
    QString fila;
    produccion_expresion*pe;
    produccion_lista_expresion2(produccion_expresion*pe,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_EXPRESION2_H
