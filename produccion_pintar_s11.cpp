#include "produccion_pintar_s11.h"
#include"visitor.h"
produccion_pintar_s11::produccion_pintar_s11(produccion_expresion*p1,produccion_expresion*p2,produccion_expresion*p3,produccion_expresion*p4)
{
    this->p1=p1;
    this->p2=p2;
    this->p3=p3;
    this->p4=p4;
}

QString produccion_pintar_s11::accept(visitor *v)
{
    return v->visit_pintar_s11(this);
}
