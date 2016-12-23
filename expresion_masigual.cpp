#include "expresion_masigual.h"
#include"visitor.h"
expresion_masigual::expresion_masigual(produccion_expresion *pe,produccion_expresion*pe1)
{
    this->pe=pe;
    this->pe1=pe1;
}

QString expresion_masigual::accept(visitor *v)
{
    return v->visit_expresion_masigual(this);
}
