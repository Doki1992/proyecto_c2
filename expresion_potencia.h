#ifndef EXPRESION_POTENCIA_H
#define EXPRESION_POTENCIA_H
#include "produccion_expresion.h"

class expresion_potencia:public produccion_expresion
{
public:
    expresion_potencia(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);

};

#endif // EXPRESION_POTENCIA_H
