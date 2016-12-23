#ifndef EXPRESION_MENOR_H
#define EXPRESION_MENOR_H
#include "produccion_expresion.h"

class expresion_menor:public produccion_expresion
{
public:
    expresion_menor(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_MENOR_H
