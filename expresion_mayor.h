#ifndef EXPRESION_MAYOR_H
#define EXPRESION_MAYOR_H
#include "produccion_expresion.h"

class expresion_mayor: public produccion_expresion
{
public:
    expresion_mayor(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_MAYOR_H
