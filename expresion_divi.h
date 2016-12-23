#ifndef EXPRESION_DIVI_H
#define EXPRESION_DIVI_H
#include  "produccion_expresion.h"

class expresion_divi: public produccion_expresion
{
public:
    expresion_divi(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_DIVI_H
