#include "produccion_instruccion9.h"
#include"visitor.h"
produccion_instruccion9::produccion_instruccion9(produccion_ordenar *po,QString fila)
{
    this->fila=fila;
    this->po=po;
}
QString produccion_instruccion9::accept(visitor *v){
    return v->visit_instruccion9(this);
}
