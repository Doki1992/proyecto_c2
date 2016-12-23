#include "expresion_nand.h"
#include "visitor.h"
expresion_nand::expresion_nand(produccion_expresion * exp1,produccion_expresion * exp2)
{
    this->exp1 = exp1;
    this->exp2= exp2;

}

QString expresion_nand::accept(visitor *v){
    return v->visit_expresion_nand(this);
}

