#ifndef PRODUCCION_INSTRUCCION8_H
#define PRODUCCION_INSTRUCCION8_H
#include"produccion_instruccion.h"
#include"produccion_sumarizar.h"
class produccion_instruccion8:public produccion_instruccion
{
public:
    QString fila;
    produccion_sumarizar*ps;
    produccion_instruccion8(produccion_sumarizar*ps,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION8_H
