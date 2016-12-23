#include "produccion_declaracion_variable7.h"
#include "visitor.h"
produccion_declaracion_variable7::produccion_declaracion_variable7(QString conservar, produccion_tipo *tipo, produccion_lista_nombre *lnombre, produccion_asignacion *asignacion, QString fila)
{
    this->fila=fila;
    this->asignacion=asignacion;
    this->conservar=conservar;
    this->lnombre=lnombre;
    this->tipo=tipo;

}

QString produccion_declaracion_variable7::accept(visitor *v){
    return v->visit_declaracion_variable_7(this);
}

