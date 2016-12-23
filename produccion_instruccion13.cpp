#include "produccion_instruccion13.h"
#include"visitor.h"
produccion_instruccion13::produccion_instruccion13(produccion_principal*pp, QString fila)
{
    this->fila=fila;
    this->pp=pp;
}
QString produccion_instruccion13::accept(visitor *v){
    return v->visit_instruccion13(this);
}
