#ifndef EXPRESION_POR_H
#define EXPRESION_POR_H
#include "produccion_expresion.h"

class expresion_por:public produccion_expresion
{
public:
    expresion_por(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_POR_H
