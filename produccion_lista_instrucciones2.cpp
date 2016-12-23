#include "produccion_lista_instrucciones2.h"
#include"visitor.h"
produccion_lista_instrucciones2::produccion_lista_instrucciones2(produccion_instruccion *pi, QString fila)
{
    this->fila=fila;
    this->pi=pi;
}

QString produccion_lista_instrucciones2::accept(visitor *v)
{
    return v->visit_lista_instrucciones2(this);
}
