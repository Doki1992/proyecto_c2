#include "produccion_lista_expresion1.h"
#include"visitor.h"
produccion_lista_expresion1::produccion_lista_expresion1(produccion_lista_expresion *pl, produccion_expresion *pe, QString fila)
{
    this->fila=fila;
    this->pl=pl;
    this->pe=pe;
}

QString produccion_lista_expresion1::accept(visitor *v)
{
    return v->visit_lista_expresion1(this);
}
