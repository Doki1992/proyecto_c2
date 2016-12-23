#include "produccion_instruccion12.h"
#include"visitor.h"
produccion_instruccion12::produccion_instruccion12(produccion_expresion *pe,QString fila)
{
    this->fila=fila;
    this->pe=pe;
}
QString produccion_instruccion12::accept(visitor *v){
    return v->visit_instruccion12(this);
}
