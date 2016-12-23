#ifndef EXPRESION_NULO_H
#define EXPRESION_NULO_H
#include"produccion_expresion.h"
class expresion_nulo:public produccion_expresion
{
public:
    QString fila;
    produccion_expresion*pe;
    expresion_nulo(produccion_expresion*pe,QString fila);
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_NULO_H
