#include "produccion_sumarizar1.h"
#include"visitor.h"
produccion_sumarizar1::produccion_sumarizar1(QString iden, QString fila)
{
    this->fila=fila;
    this->iden=iden;
}

QString produccion_sumarizar1::accept(visitor *v)
{
    return v->visit_sumarizar1(this);
}

