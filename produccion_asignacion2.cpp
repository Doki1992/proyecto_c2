#include "produccion_asignacion2.h"
#include"visitor.h"
produccion_asignacion2::produccion_asignacion2(produccion_expresion*pe)
{
    this->pe=pe;
}

QString produccion_asignacion2::accept(visitor *v)
{
    return v->visit_asignacion2(this);
}
