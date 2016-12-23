#include "produccion_ciclos1.h"
#include"visitor.h"
produccion_ciclos1::produccion_ciclos1(produccion_expresion *pe, produccion_lista_instrucciones *p1, produccion_lista_instrucciones *p2, QString fila)
{
    this->fila=fila;
    this->pe=pe;
    this->l1=p1;
    this->l2=p2;
}

QString produccion_ciclos1::accept(visitor *v)
{
    return v->visit_ciclos1(this);
}
