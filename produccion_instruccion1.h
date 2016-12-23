#ifndef PRODUCCION_INSTRUCCION1_H
#define PRODUCCION_INSTRUCCION1_H
#include"produccion_instruccion.h"
#include"produccion_declaracion_variable.h"
class produccion_instruccion1:public produccion_instruccion
{
public:
    produccion_declaracion_variable*pd;
    produccion_instruccion1(produccion_declaracion_variable*pd);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION1_H
