#include "produccion_instruccion3.h"
#include"visitor.h"
produccion_instruccion3::produccion_instruccion3(produccion_lista_asignacion *pl, QString fila)
{
    this->fila=fila;
    this->pl=pl;
}
QString produccion_instruccion3::accept(visitor *v){
    return v->visit_instruccion3(this);
}
