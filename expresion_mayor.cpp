#include "expresion_mayor.h"
#include "visitor.h"

expresion_mayor::expresion_mayor(produccion_expresion * exp1,produccion_expresion * exp2)
{
    this->exp1= exp1;
    this->exp2=exp2;

}


QString expresion_mayor::accept(visitor *v){
    return v->visit_expresion_mayor(this);
}
