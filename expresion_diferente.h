#ifndef EXPRESION_DIFERENTE_H
#define EXPRESION_DIFERENTE_H
#include "produccion_expresion.h"

class expresion_diferente : public produccion_expresion
{
public:
    expresion_diferente(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);


};

#endif // EXPRESION_DIFERENTE_H
