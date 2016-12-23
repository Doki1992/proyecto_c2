#include "produccion_lista_case1.h"
#include"visitor.h"
produccion_lista_case1::produccion_lista_case1(produccion_lista_case*pc, produccion_expresion*pe, produccion_lista_instrucciones*pi, QString fila)
{
    this->fila=fila;
    this->pc=pc;
    this->pi=pi;
    this->pe=pe;
}
QString produccion_lista_case1::accept(visitor *v)
{
    return v->visit_lista_case1(this);
}
