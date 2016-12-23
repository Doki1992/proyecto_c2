#ifndef EXPRESION_MASMAS_H
#define EXPRESION_MASMAS_H
#include"produccion_expresion.h"
class expresion_masmas:public produccion_expresion
{
public:
    produccion_expresion*pe;
    expresion_masmas(produccion_expresion*pe);
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_MASMAS_H
