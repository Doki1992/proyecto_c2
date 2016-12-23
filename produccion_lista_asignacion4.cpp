#include "produccion_lista_asignacion4.h"
#include"visitor.h"
produccion_lista_asignacion4::produccion_lista_asignacion4(QString iden, produccion_expresion *pe,QString fila)
{
    this->fila=fila;
    this->iden=iden;
    this->pe=pe;
}

QString produccion_lista_asignacion4::accept(visitor *v)
{
    return v->visit_lista_asignacion4(this);
}
