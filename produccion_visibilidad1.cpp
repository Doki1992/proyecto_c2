#include "produccion_visibilidad1.h"
#include"visitor.h"
produccion_visibilidad1::produccion_visibilidad1(QString t, QString fila)
{
    this->fila=fila;
    this->tipo=t;
}

QString produccion_visibilidad1::accept(visitor *v)
{
    return v->visit_visibilidad1(this);
}
