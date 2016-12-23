#ifndef EXPRESION_EPSILON_H
#define EXPRESION_EPSILON_H
#include "produccion_expresion.h"

class expresion_epsilon : public produccion_expresion
{
public:
    expresion_epsilon();
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_EPSILON_H
