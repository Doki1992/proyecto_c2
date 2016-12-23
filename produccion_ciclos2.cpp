#include "produccion_ciclos2.h"
#include"visitor.h"
produccion_ciclos2::produccion_ciclos2(produccion_expresion *pe, produccion_lista_instrucciones *pl, QString fila)
{
    this->fila=fila;
    this->pe=pe;
    this->l1=pl;
}

QString produccion_ciclos2::accept(visitor *v)
{
    return v->visit_ciclos2(this);
}
