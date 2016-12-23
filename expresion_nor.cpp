#include "expresion_nor.h"
#include "visitor.h"
expresion_nor::expresion_nor(produccion_expresion * exp1,produccion_expresion * exp2)
{
    this->exp1=exp1;
    this->exp2=exp2;

}

QString expresion_nor::accept(visitor *v){
    return v->visit_expresion_nor(this);
}
