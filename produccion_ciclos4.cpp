#include "produccion_ciclos4.h"
#include"visitor.h"
produccion_ciclos4::produccion_ciclos4(produccion_lista_asignacion *pi, produccion_expresion *pe, produccion_lista_asignacion *pf, produccion_lista_instrucciones *pl, QString fila)
{
    this->fila=fila;
    this->pe=pe;
    this->pi=pi;
    this->pf=pf;
    this->pl=pl;
}

QString produccion_ciclos4::accept(visitor *v)
{
    return v->visit_ciclos4(this);
}
