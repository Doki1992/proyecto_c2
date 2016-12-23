#include "produccion_instruccion5.h"
#include"visitor.h"
produccion_instruccion5::produccion_instruccion5(produccion_pintar_or*pp,QString fila)
{
    this->fila=fila;
    this->pp=pp;
}
QString produccion_instruccion5::accept(visitor *v){
    return v->visit_instruccion5(this);
}
