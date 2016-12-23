#ifndef EXPRESION_Y_H
#define EXPRESION_Y_H
#include "produccion_expresion.h"

class Expresion_y : public produccion_expresion
{
public:
    Expresion_y(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_Y_H
