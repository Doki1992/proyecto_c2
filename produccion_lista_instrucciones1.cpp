#include "produccion_lista_instrucciones1.h"
#include"visitor.h"
produccion_lista_instrucciones1::produccion_lista_instrucciones1(produccion_lista_instrucciones *pl, produccion_instruccion *pi, QString fila)
{
    this->fila=fila;
    this->pl=pl;
    this->pi=pi;
}

QString produccion_lista_instrucciones1::accept(visitor *v)
{
    return  v->visit_lista_instrucciones1(this);
}
