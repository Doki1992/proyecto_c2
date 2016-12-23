#include "produccion_asignacion1.h"
#include"visitor.h"
produccion_asignacion1::produccion_asignacion1(produccion_expresion *pe, produccion_lista_asignacion *pl,QString fila)
{
    this->fila=fila;
    this->pe=pe;
    this->pl=pl;
}
QString produccion_asignacion1::accept(visitor *v)
{
    v->visit_asignacion1(this);
}

