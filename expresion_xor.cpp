#include "expresion_xor.h"
#include "visitor.h"
expresion_xor::expresion_xor(produccion_expresion*exp1, produccion_expresion*exp2)
{
    this->exp1=exp1;
    this->exp2=exp2;

}


QString expresion_xor::accept(visitor *v){
    return v->visit_expresion_xor(this);
}
