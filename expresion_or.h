#ifndef EXPRESION_OR_H
#define EXPRESION_OR_H
#include "produccion_expresion.h"

class expresion_or: public produccion_expresion
{
public:
    expresion_or(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_OR_H
