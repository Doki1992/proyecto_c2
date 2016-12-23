#ifndef EXPRESION_MENOSMENOS_H
#define EXPRESION_MENOSMENOS_H
#include"produccion_expresion.h"
class expresion_menosmenos:public produccion_expresion
{
public:
    produccion_expresion*pe;
    expresion_menosmenos(produccion_expresion*pe);
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_MENOSMENOS_H
