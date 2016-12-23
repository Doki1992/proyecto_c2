#ifndef EXPRESION_NOT_H
#define EXPRESION_NOT_H
#include "produccion_expresion.h"

class expresion_not:public produccion_expresion
{
public:
    expresion_not(produccion_expresion * exp1);
    produccion_expresion * exp1;
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_NOT_H
