#include "produccion_visibilidad2.h"
#include"visitor.h"
produccion_visibilidad2::produccion_visibilidad2(QString t)
{
    this->tipo=t;
}

QString produccion_visibilidad2::accept(visitor *v)
{
    return v->visit_visibilidad2(this);
}
