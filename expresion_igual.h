#ifndef EXPRESION_IGUAL_H
#define EXPRESION_IGUAL_H
#include "produccion_expresion.h"

class Expresion_igual: public produccion_expresion
{
public:
    Expresion_igual(produccion_expresion * exp1,produccion_expresion * exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);

};

#endif // EXPRESION_IGUAL_H
