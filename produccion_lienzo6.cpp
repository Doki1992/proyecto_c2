#include "produccion_lienzo6.h"
#include"visitor.h"
produccion_lienzo6::produccion_lienzo6(produccion_lista_asignacion*pl, QString fila)
{
    this->fila=fila;
    this->pl=pl;
}

QString produccion_lienzo6::accept(visitor *v)
{
    return v->visit_lienzo6(this);
}
