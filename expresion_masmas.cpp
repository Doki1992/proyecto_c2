#include "expresion_masmas.h"
#include"visitor.h"
expresion_masmas::expresion_masmas(produccion_expresion *pe)
{
    this->pe=pe;
}

QString expresion_masmas::accept(visitor *v)
{
    return v->visit_expresion_masmas(this);
}
