#ifndef EXPRESION_MASIGUAL_H
#define EXPRESION_MASIGUAL_H
#include"produccion_expresion.h"
class expresion_masigual:public produccion_expresion
{
public:
    produccion_expresion*pe;
    produccion_expresion*pe1;
    expresion_masigual(produccion_expresion*pe,produccion_expresion*pe1);
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_MASIGUAL_H
