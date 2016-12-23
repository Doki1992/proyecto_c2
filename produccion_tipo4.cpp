#include "produccion_tipo4.h"
#include"visitor.h"
produccion_tipo4::produccion_tipo4(QString tipo,QString fila)
{
    this->fila=fila;
    this->tipo=tipo;
}

QString produccion_tipo4::accept(visitor *v)
{
    return v->visit_tipo4(this);
}

