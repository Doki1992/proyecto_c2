#include "produccion_instruccion7.h"
#include"visitor.h"
produccion_instruccion7::produccion_instruccion7(produccion_pintar_s11 *pp,QString fila)
{
    this->fila=fila;
    this->pp=pp;
}
QString produccion_instruccion7::accept(visitor *v){
    return v->visit_instruccion7(this);
}
