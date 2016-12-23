#include "produccion_lista_expresion2.h"
#include"visitor.h"
produccion_lista_expresion2::produccion_lista_expresion2(produccion_expresion *pe, QString fila)
{
    this->fila=fila;
    this->pe=pe;
}

QString produccion_lista_expresion2::accept(visitor *v)
{
    return v->visit_lista_expresion2(this);
}
