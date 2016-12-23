#ifndef PRODUCCION_INSTRUCCION1_H
#define PRODUCCION_INSTRUCCION1_H
#include"produccion_instruccion.h"
#include"produccion_declaracion_variable.h"
class produccion_instruccion1:public produccion_instruccion
{
public:
    QString fila;
    produccion_declaracion_variable*pd;
    produccion_instruccion1(produccion_declaracion_variable*pd,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION1_H
