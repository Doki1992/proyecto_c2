#include "produccion_ini2.h"
#include"visitor.h"
produccion_ini2::produccion_ini2(produccion_lienzo *pl)
{
    this->pl=pl;
}

QString produccion_ini2::accept(visitor *v)
{
    return v->visit_ini2(this);
}
