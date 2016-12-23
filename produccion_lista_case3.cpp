#include "produccion_lista_case3.h"
#include"visitor.h"
produccion_lista_case3::produccion_lista_case3(produccion_lista_instrucciones*pi, QString fila)
{
    this->fila=fila;
    this->pi=pi;
}
QString produccion_lista_case3::accept(visitor *v)
{
    return v->visit_lista_case3(this);
}
