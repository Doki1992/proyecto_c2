#include "produccion_extiende1.h"
#include"visitor.h"
produccion_extiende1::produccion_extiende1(produccion_lista_nombre *pl)
{
    this->pl=pl;
}

QString produccion_extiende1::accept(visitor *v)
{
    return v->visit_extiende1(this);
}
