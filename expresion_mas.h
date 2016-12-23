#ifndef EXPRESION_MAS_H
#define EXPRESION_MAS_H
#include "produccion_expresion.h"

class expresion_mas:public produccion_expresion
{
public:
    expresion_mas(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);

};

#endif // EXPRESION_MAS_H
