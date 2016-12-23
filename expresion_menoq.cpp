#include "expresion_menoq.h"
#include "visitor.h"
expresion_menoq::expresion_menoq(produccion_expresion * exp1,produccion_expresion * exp2)
{
    this->exp1=exp1;
    this->exp2=exp2;

}


QString expresion_menoq::accept(visitor *v){
    return v->visit_expresion_menorq(this);
}
