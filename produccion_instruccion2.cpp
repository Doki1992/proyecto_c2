#include "produccion_instruccion2.h"
#include"visitor.h"
produccion_instruccion2::produccion_instruccion2(produccion_declaracion_metodo*pd, QString fila)
{
    this->fila=fila;
    this->pd=pd;
}
QString produccion_instruccion2::accept(visitor *v){
    return v->visit_instruccion2(this);
}
