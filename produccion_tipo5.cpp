#include "produccion_tipo5.h"
#include"visitor.h"
produccion_tipo5::produccion_tipo5(QString tipo, QString fila)
{
    this->fila=fila;
    this->tipo=tipo;
}

QString produccion_tipo5::accept(visitor *v)
{
    return v->visit_tipo5(this);
}
