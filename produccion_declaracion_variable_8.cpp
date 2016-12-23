#include "produccion_declaracion_variable_8.h"
#include "visitor.h"
produccion_declaracion_variable_8::produccion_declaracion_variable_8(QString conservar,
                                                                     produccion_tipo*tipo,
                                                                     produccion_lista_nombre*lnombre, QString fila)
{
    this->fila=fila;
    this->conservar=conservar;
    this->lnombre=lnombre;
    this->tipo=tipo;

}

QString produccion_declaracion_variable_8::accept(visitor *v){
    return v->visit_declaracion_variable_8(this);
}

