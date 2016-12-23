#include "produccion_lista_parametros2.h"
#include"visitor.h"
produccion_lista_parametros2::produccion_lista_parametros2(produccion_parametro *pp, QString fila)
{
    this->fila=fila;
    this->pp=pp;
}

QString produccion_lista_parametros2::accept(visitor *v)
{
    return v->visit_lista_parametros2(this);
}
