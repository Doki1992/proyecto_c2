#include "produccion_tipo3.h"
#include"visitor.h"
produccion_tipo3::produccion_tipo3(QString tipo,QString fila)
{
    this->fila=fila;
    this->tipo=tipo;
}

QString produccion_tipo3::accept(visitor *v)
{
    return v->visit_tipo3(this);
}
