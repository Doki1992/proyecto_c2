#include "produccion_declaracion_variable6.h"
#include "visitor.h"
produccion_declaracion_variable6::produccion_declaracion_variable6(produccion_tipo*tipo,
produccion_lista_nombre *nombre,QString fila)
{
    this->fila=fila;
    this->nombre=nombre;
    this->tipo=tipo;
}


QString produccion_declaracion_variable6::accept(visitor *v){
    return v->visit_declaracion_variable6(this);
}
