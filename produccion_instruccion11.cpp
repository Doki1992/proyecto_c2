#include "produccion_instruccion11.h"
#include"visitor.h"
produccion_instruccion11::produccion_instruccion11(QString sal, QString fila)
{
    this->fila=fila;
    this->sal=sal;
}
QString produccion_instruccion11::accept(visitor *v){
    return v->visit_instruccion11(this);
}
