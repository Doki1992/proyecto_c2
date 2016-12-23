#include "produccion_lista_nombre2.h"
#include"visitor.h"
produccion_lista_nombre2::produccion_lista_nombre2(declarador *iden, QString fila)
{
    this->fila=fila;
    this->iden=iden;
}

QString produccion_lista_nombre2::accept(visitor *v)
{
    return v->visit_lista_nombre2(this);
}
