#include "expresion_y.h"
#include "visitor.h"
Expresion_y::Expresion_y(produccion_expresion* exp1,produccion_expresion* exp2)
{
    this->exp1=exp1;
    this->exp2=exp2;

}

QString Expresion_y::accept(visitor *v){
    return v->visit_expresion_y(this);
}

