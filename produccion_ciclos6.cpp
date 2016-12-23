#include "produccion_ciclos6.h"
#include"visitor.h"
produccion_ciclos6::produccion_ciclos6(produccion_expresion *pe, produccion_lista_case *pl, QString fila)
{
    this->fila=fila;
    this->pe=pe;
    this->pl=pl;
}

QString produccion_ciclos6::accept(visitor *v)
{
    return v->visit_ciclos6(this);
}
