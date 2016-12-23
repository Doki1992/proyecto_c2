#ifndef EXPRESION_MENOQ_H
#define EXPRESION_MENOQ_H
#include "produccion_expresion.h"

class expresion_menoq:public produccion_expresion
{
public:
    expresion_menoq(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);

};

#endif // EXPRESION_MENOQ_H
