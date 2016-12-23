#ifndef EXPRESION_NOR_H
#define EXPRESION_NOR_H
#include "produccion_expresion.h"

class expresion_nor:public produccion_expresion
{
public:
    expresion_nor(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_NOR_H
