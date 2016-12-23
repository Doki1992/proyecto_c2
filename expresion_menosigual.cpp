#include "expresion_menosigual.h"
#include"visitor.h"
expresion_menosigual::expresion_menosigual(produccion_expresion*pe,produccion_expresion*pe1)
{
    this->pe=pe;
    this->pe1=pe1;
}

QString expresion_menosigual::accept(visitor *v)
{
    return v->visit_expresion_menosigual(this);
}
