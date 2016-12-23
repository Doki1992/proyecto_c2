#include "produccion_tipo1.h"
#include"visitor.h"
produccion_tipo1::produccion_tipo1(QString tipo,QString fila)
{
    this->fila=fila;
    this->tipo=tipo;
}

QString produccion_tipo1::accept(visitor *v)
{
    return v->visit_tipo1(this);
}
