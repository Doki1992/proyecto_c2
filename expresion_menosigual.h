#ifndef EXPRESION_MENOSIGUAL_H
#define EXPRESION_MENOSIGUAL_H
#include"produccion_expresion.h"
class expresion_menosigual:public produccion_expresion
{
public:
    produccion_expresion*pe;
    produccion_expresion*pe1;
    expresion_menosigual(produccion_expresion*pe,produccion_expresion*pe1);
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_MENOSIGUAL_H
