#include "produccion_declaracion_variable2.h"
#include"visitor.h"
produccion_declaracion_variable2::produccion_declaracion_variable2(produccion_tipo *pt, produccion_lista_nombre *pl, produccion_asignacion *pa, QString fila)
{
    this->fila=fila;
    this->pt=pt;
    this->pl=pl;
    this->pa=pa;
}

QString produccion_declaracion_variable2::accept(visitor *v)
{
    return v->visit_declaracion_variable2(this);
}
