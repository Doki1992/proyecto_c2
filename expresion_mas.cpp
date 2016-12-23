#include "expresion_mas.h"
#include "visitor.h"
expresion_mas::expresion_mas(produccion_expresion*exp1,produccion_expresion*exp2)
{
    this->exp1=exp1;
    this->exp2=exp2;

}

QString expresion_mas::accept(visitor *v){
    return  v->visit_expresion_mas(this);
}

