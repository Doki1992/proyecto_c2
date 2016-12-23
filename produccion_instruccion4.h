#ifndef PRODUCCION_INSTRUCCION4_H
#define PRODUCCION_INSTRUCCION4_H
#include"produccion_instruccion.h"
#include"produccion_ciclos.h"
class produccion_instruccion4:public produccion_instruccion
{
public:
    produccion_ciclos*pc;
    produccion_instruccion4(produccion_ciclos*pc);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION4_H
