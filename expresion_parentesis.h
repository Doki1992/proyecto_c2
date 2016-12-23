#ifndef EXPRESION_PARENTESIS_H
#define EXPRESION_PARENTESIS_H
#include "produccion_expresion.h"

class expresion_parentesis:public produccion_expresion
{
public:
    expresion_parentesis(produccion_expresion * exp1);
    produccion_expresion * exp1;
    virtual QString accept(visitor *v);

};

#endif // EXPRESION_PARENTESIS_H
