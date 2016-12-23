#include "produccion_lista_asignacion2.h"
#include"visitor.h"
produccion_lista_asignacion2::produccion_lista_asignacion2(declarador *iden, produccion_expresion *pe)
{
    this->pe=pe;
    this->iden=iden;
}

QString produccion_lista_asignacion2::accept(visitor *v)
{
    return v->visit_lista_asignacion2(this);
}
