#ifndef EXPRESION_XOR_H
#define EXPRESION_XOR_H
#include "produccion_expresion.h"

class expresion_xor:public produccion_expresion
{
public:
    expresion_xor(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);

};

#endif // EXPRESION_XOR_H
