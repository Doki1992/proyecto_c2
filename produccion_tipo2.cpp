#include "produccion_tipo2.h"
#include"visitor.h"
produccion_tipo2::produccion_tipo2(QString tipo,QString fila)
{
    this->fila=fila;
    this->tipo=tipo;
}

QString produccion_tipo2::accept(visitor *v)
{
return v->visit_tipo2(this);
}
