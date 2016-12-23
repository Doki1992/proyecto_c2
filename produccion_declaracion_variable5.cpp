#include "produccion_declaracion_variable5.h"
#include "visitor.h"

produccion_declaracion_variable5::produccion_declaracion_variable5(produccion_tipo *tipo, produccion_lista_nombre *nombre, produccion_asignacion *asignacion, QString fila)
{
    this->fila=fila;
    this->tipo=tipo;
    this->nombre=nombre;
    this->asignacion=asignacion;
}

QString produccion_declaracion_variable5::accept(visitor *v){
    return v->visit_declaracion_variable5(this);
}
