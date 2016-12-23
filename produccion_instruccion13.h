#ifndef PRODUCCION_INSTRUCCION13_H
#define PRODUCCION_INSTRUCCION13_H
#include"produccion_instruccion.h"
#include"produccion_principal.h"
class produccion_instruccion13:public produccion_instruccion
{
public:
    QString fila;
    produccion_principal*pp;
    produccion_instruccion13(produccion_principal*pp,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION13_H
