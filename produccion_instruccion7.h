#ifndef PRODUCCION_INSTRUCCION7_H
#define PRODUCCION_INSTRUCCION7_H
#include"produccion_instruccion.h"
#include"produccion_pintar_s11.h"

class produccion_instruccion7:public produccion_instruccion
{
public:
    QString fila;
    produccion_pintar_s11*pp;
    produccion_instruccion7(produccion_pintar_s11*pp,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION7_H
