#include "expresion_menor.h"
#include "visitor.h"
expresion_menor::expresion_menor(produccion_expresion * exp1,produccion_expresion * exp2)
{
    this->exp1=exp1;
    this->exp2=exp2;
}

QString expresion_menor::accept(visitor *v){
    return v->visit_expresion_menor(this);
}

