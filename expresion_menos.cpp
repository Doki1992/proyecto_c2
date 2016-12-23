#include "visitor.h"
#include "expresion_menos.h"

expresion_menos::expresion_menos(produccion_expresion*exp1,produccion_expresion*exp2)
{
    this->exp1=exp1;
    this->exp2=exp2;

}


QString expresion_menos::accept(visitor *v){
    return v->visit_expresion_menos(this);
}
