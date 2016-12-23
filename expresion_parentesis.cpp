#include "expresion_parentesis.h"
#include "visitor.h"
expresion_parentesis::expresion_parentesis(produccion_expresion*exp1)
{
    this->exp1=exp1;

}


QString expresion_parentesis::accept(visitor *v){
    return v->visit_expresion_parentesis(this);
}
