#include "expresion_potencia.h"
#include "visitor.h"
expresion_potencia::expresion_potencia(produccion_expresion*exp1,produccion_expresion*exp2)
{
    this->exp1=exp1;
    this->exp2=exp2;

}


QString expresion_potencia::accept(visitor *v){
    return v->visit_expresion_potencia(this);
}
