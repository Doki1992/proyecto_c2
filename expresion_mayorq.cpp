#include "expresion_mayorq.h"
#include "visitor.h"
expresion_mayorq::expresion_mayorq(produccion_expresion * exp1, produccion_expresion* exp2)
{
    this->exp1=exp1;
    this->exp2=exp2;
}

QString expresion_mayorq::accept(visitor *v){
    return v->visit_expresion_mayorq(this);
}


