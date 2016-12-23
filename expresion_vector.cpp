#include "expresion_vector.h"
#include "visitor.h"
expresion_vector::expresion_vector(produccion_lista_expresion *exp1)
{
    this->exp1=exp1;
}


QString expresion_vector::accept(visitor *v){
    return v->visit_expresion_vector(this);
}
