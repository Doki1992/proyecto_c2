#include "produccion_lista_asignacion1.h"
#include"visitor.h"
produccion_lista_asignacion1::produccion_lista_asignacion1(produccion_lista_asignacion *pl, QString iden, produccion_expresion *pe,QString fila)
{
    this->fila=fila;
    this->pe=pe;
    this->pl=pl;
    this->iden=iden;
}

QString produccion_lista_asignacion1::accept(visitor *v)
{
    return v->visit_lista_asignacion1(this);
}
