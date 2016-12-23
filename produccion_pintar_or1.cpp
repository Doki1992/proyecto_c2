#include "produccion_pintar_or1.h"
#include"visitor.h"
produccion_pintar_or1::produccion_pintar_or1(produccion_expresion*p1,produccion_expresion*p2,QString cadena,produccion_expresion*p4,produccion_expresion*p5,produccion_expresion*p6,QString fila)
{
    this->fila=fila;
    this->p1=p1;
    this->p2=p2;
    this->p4=p4;
    this->p5=p5;
    this->p6=p6;
    this->cadena=cadena;
}

QString produccion_pintar_or1::accept(visitor *v){
    return v->visit_pintar_or1(this);
}
