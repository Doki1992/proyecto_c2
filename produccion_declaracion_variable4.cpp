#include "produccion_declaracion_variable4.h"
#include"visitor.h"
produccion_declaracion_variable4::produccion_declaracion_variable4(produccion_tipo *pt, produccion_lista_nombre *pl, produccion_asignacion *pa, QString fila)
{
    this->fila=fila;
    this->pl=pl;
    this->pa=pa;
    this->pt=pt;
}

QString produccion_declaracion_variable4::accept(visitor *v)
{
    return v->visit_declaracion_variable4(this);
}
