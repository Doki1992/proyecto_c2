#include "produccion_pintar_p1.h"
#include"visitor.h"
produccion_pintar_p1::produccion_pintar_p1(produccion_expresion *p1, produccion_expresion *p2, QString cadena, produccion_expresion *p4, QString fila)
{
    this->fila=fila;
    this->p1=p1;
    this->p2=p2;
    this->cadena=cadena;
    this->p4=p4;
}
QString produccion_pintar_p1::accept(visitor *v){
    return v->visit_pintar_p1(this);
}
