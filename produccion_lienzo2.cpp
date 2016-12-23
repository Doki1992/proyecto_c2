#include "produccion_lienzo2.h"
#include"visitor.h"
produccion_lienzo2::produccion_lienzo2(produccion_visibilidad*pv, QString iden, produccion_lista_instrucciones*pl, QString fila)
{
    this->fila=fila;
    this->pl=pl;
    this->pv=pv;
    this->iden=iden;
}

QString produccion_lienzo2::accept(visitor *v)
{
    return v->visit_lienzo2(this);
}
