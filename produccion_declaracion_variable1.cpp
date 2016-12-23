#include "produccion_declaracion_variable1.h"
#include"visitor.h"
produccion_declaracion_variable1::produccion_declaracion_variable1(produccion_tipo *pt, produccion_lista_nombre *pl, QString fila)
{
    this->fila=fila;
    this->pt=pt;
    this->pl=pl;
}

QString produccion_declaracion_variable1::accept(visitor *v)
{
    return v->visit_declaracion_variable1(this);
}
