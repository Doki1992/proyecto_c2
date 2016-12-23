#include "expresion_not.h"
#include "visitor.h"
expresion_not::expresion_not(produccion_expresion*exp1)
{
    this->exp1=exp1;

}

QString expresion_not::accept(visitor *v){
    return v->visit_expresion_not(this);
}

