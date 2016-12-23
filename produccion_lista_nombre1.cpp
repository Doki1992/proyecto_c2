#include "produccion_lista_nombre1.h"
#include"visitor.h"
produccion_lista_nombre1::produccion_lista_nombre1(produccion_lista_nombre*pl, declarador *iden, QString fila)
{
    this->fila=fila;
    this->pl=pl;
    this->iden=iden;
}

QString produccion_lista_nombre1::accept(visitor *v)
{
    return v->visit_lista_nombre1(this);
}
