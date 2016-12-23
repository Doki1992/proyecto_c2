#ifndef PRODUCCION_INSTRUCCION9_H
#define PRODUCCION_INSTRUCCION9_H
#include"produccion_instruccion.h"
#include"produccion_ordenar.h"
class produccion_instruccion9:public produccion_instruccion
{
public:
    produccion_ordenar*po;
    produccion_instruccion9(produccion_ordenar*po);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION9_H
