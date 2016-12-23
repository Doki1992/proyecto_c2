#ifndef PRODUCCION_INSTRUCCION12_H
#define PRODUCCION_INSTRUCCION12_H
#include"produccion_instruccion.h"
#include"produccion_expresion.h"
class produccion_instruccion12:public produccion_instruccion
{
public:
    QString fila;
    produccion_expresion*pe;
    produccion_instruccion12(produccion_expresion*pe,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION12_H
