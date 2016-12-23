#include "expresion_nulo.h"
#include"visitor.h"
expresion_nulo::expresion_nulo(produccion_expresion *pe, QString fila)
{
    this->pe=pe;
    this->fila=fila;
}

QString expresion_nulo::accept(visitor *v)
{
    return v->visit_expresion_nulo(this);
}
