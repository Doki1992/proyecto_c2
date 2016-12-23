#include "produccion_lista_case2.h"
#include"visitor.h"
produccion_lista_case2::produccion_lista_case2(produccion_expresion *pe, produccion_lista_instrucciones *pi, QString fila)
{
    this->fila=fila;
    this->pe=pe;
    this->pi=pi;
}
QString produccion_lista_case2::accept(visitor *v)
{
    return v->visit_lista_case2(this);
}
