#include "produccion_ordenar1.h"
#include"visitor.h"
produccion_ordenar1::produccion_ordenar1(QString iden, QString cadena)
{
    this->iden=iden;
    this->cadena=cadena;
}

QString produccion_ordenar1::accept(visitor *v)
{
    return v->visit_ordenar1(this);
}

