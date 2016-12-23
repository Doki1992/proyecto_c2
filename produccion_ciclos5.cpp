#include "produccion_ciclos5.h"
#include"visitor.h"
produccion_ciclos5::produccion_ciclos5(produccion_lista_instrucciones *pl, produccion_expresion *pe,QString fila)
{
    this->fila=fila;
    this->pe=pe;
    this->pl=pl;
}

QString produccion_ciclos5::accept(visitor *v)
{
    return v->visit_ciclos5(this);
}
