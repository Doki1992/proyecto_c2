#include "expresion_menosmenos.h"
#include"visitor.h"
expresion_menosmenos::expresion_menosmenos(produccion_expresion *pe)
{
    this->pe=pe;
}

QString expresion_menosmenos::accept(visitor *v)
{
    return v->visit_expresion_menosmenos(this);
}
