#ifndef PRODUCCION_INSTRUCCION2_H
#define PRODUCCION_INSTRUCCION2_H
#include"produccion_declaracion_metodo.h"
#include"produccion_instruccion.h"
class produccion_instruccion2:public produccion_instruccion
{
public:
    produccion_declaracion_metodo*pd;
    produccion_instruccion2(produccion_declaracion_metodo*pd);
    virtual QString accept(visitor *v);
};
#endif // PRODUCCION_INSTRUCCION2_H
