#include "expresion_or.h"
#include "visitor.h"
expresion_or::expresion_or(produccion_expresion * exp1,produccion_expresion * exp2)
{
    this->exp1=exp1;
    this->exp2= exp2;

}

QString expresion_or::accept(visitor *v){
    return v->visit_expresion_or(this);
}

