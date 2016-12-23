#ifndef PRODUCCION_INSTRUCCION6_H
#define PRODUCCION_INSTRUCCION6_H
#include"produccion_instruccion.h"
#include"produccion_pintar_p.h"
class produccion_instruccion6:public produccion_instruccion
{
public:
    QString fila;
    produccion_pintar_p*pp;
    produccion_instruccion6(produccion_pintar_p*pp,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION6_H
