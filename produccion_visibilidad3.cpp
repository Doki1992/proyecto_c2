#include "produccion_visibilidad3.h"
#include"visitor.h"
produccion_visibilidad3::produccion_visibilidad3(QString t, QString fila)
{
    this->fila=fila;
    this->tipo=t;
}

QString produccion_visibilidad3::accept(visitor *v)
{
    return v->visit_visibilidad3(this);
}
