#ifndef EXPRESION_VECTOR_H
#define EXPRESION_VECTOR_H
#include "produccion_lista_expresion.h"
#include"produccion_expresion.h"
class expresion_vector : public produccion_expresion
{
public:
    expresion_vector(produccion_lista_expresion *exp1);
    produccion_lista_expresion *exp1;
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_VECTOR_H
