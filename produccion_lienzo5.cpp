#include "produccion_lienzo5.h"
#include"visitor.h"
produccion_lienzo5::produccion_lienzo5(produccion_declaracion_variable*pd)
{
    this->pd=pd;
}

QString produccion_lienzo5::accept(visitor *v)
{
    return v->visit_lienzo5(this);
}
