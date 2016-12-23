#include "produccion_lienzo1.h"
#include"visitor.h"
produccion_lienzo1::produccion_lienzo1(QString iden, produccion_lista_instrucciones *pl, QString fila)
{
    this->fila=fila;
    this->pl=pl;
    this->iden=iden;
}

QString produccion_lienzo1::accept(visitor *v)
{
    return v->visit_lienzo1(this);
}
