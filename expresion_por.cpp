#include "expresion_por.h"
#include "visitor.h"
expresion_por::expresion_por(produccion_expresion*exp1,produccion_expresion*exp2)
{
    this->exp1 =exp1;
    this->exp2 =exp2;

}

QString expresion_por::accept(visitor *v){
    return v->visit_expresion_por(this);
}

