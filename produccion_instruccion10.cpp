#include "produccion_instruccion10.h"
#include"visitor.h"
produccion_instruccion10::produccion_instruccion10(QString cont,QString fila)
{
    this->fila=fila;
    this->cont=cont;
}
QString produccion_instruccion10::accept(visitor *v){
    return v->visit_instruccion10(this);
}
