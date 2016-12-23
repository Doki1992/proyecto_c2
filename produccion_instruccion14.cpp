#include "produccion_instruccion14.h"
#include"visitor.h"
produccion_instruccion14::produccion_instruccion14(QString id, produccion_lista_expresion *pl, QString fila)
{
    this->fila=fila;
    this->iden=id;
    this->pl=pl;
}

QString produccion_instruccion14::accept(visitor *v)
{
    return v->visit_instruccion14(this);
}
