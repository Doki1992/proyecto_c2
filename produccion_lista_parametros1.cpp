#include "produccion_lista_parametros1.h"
#include"visitor.h"
produccion_lista_parametros1::produccion_lista_parametros1(produccion_lista_parametros *pl, produccion_parametro *pp, QString fila)
{
    this->fila=fila;
    this->pp=pp;
    this->pl=pl;
}

QString produccion_lista_parametros1::accept(visitor *v)
{
    return v->visit_lista_parametros1(this);
}
