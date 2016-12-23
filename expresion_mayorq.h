#ifndef EXPRESION_MAYORQ_H
#define EXPRESION_MAYORQ_H
#include "produccion_expresion.h"

class expresion_mayorq: public produccion_expresion
{
public:
    expresion_mayorq(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_MAYORQ_H
