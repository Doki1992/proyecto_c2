#include "produccion_lista_asignacion3.h"
#include"visitor.h"
produccion_lista_asignacion3::produccion_lista_asignacion3(QString iden, produccion_expresion *pe,QString fila)
{
    this->fila=fila;
    this->iden=iden;
    this->pe=pe;
}

QString produccion_lista_asignacion3::accept(visitor *v)
{
    return v->visit_lista_asignacion3(this);
}
