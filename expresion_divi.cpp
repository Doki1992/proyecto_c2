#include "expresion_divi.h"
#include "visitor.h"
expresion_divi::expresion_divi(produccion_expresion*exp1,produccion_expresion*exp2)
{
    this->exp1=exp1;
    this->exp2=exp2;

}

QString expresion_divi::accept(visitor *v){
    return v->visit_expresion_divi(this);
}

