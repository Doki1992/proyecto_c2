#include "expresion_diferente.h"
#include "visitor.h"
expresion_diferente::expresion_diferente(produccion_expresion* exp1,produccion_expresion* exp2)
{
  this->exp1= exp1;
  this->exp2= exp2;
}

QString expresion_diferente::accept(visitor *v){
    return v->visit_expresion_diferente(this);
}


