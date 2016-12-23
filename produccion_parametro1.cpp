#include "produccion_parametro1.h"
#include"visitor.h"
produccion_parametro1::produccion_parametro1(produccion_tipo *pt, declarador *id, QString fila)
{
    this->fila=fila;
    this->pt=pt;
    this->id=id;
}

QString produccion_parametro1::accept(visitor *v)
{
    return v->visit_parametro1(this);
}
