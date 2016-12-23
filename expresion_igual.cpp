#include "expresion_igual.h"
#include "visitor.h"
Expresion_igual::Expresion_igual(produccion_expresion * exp1, produccion_expresion * exp2)
{
    this->exp1= exp1;
    this->exp2= exp2;
}

QString Expresion_igual::accept(visitor *v){
    return v->visit_expresion_igual(this);
}

