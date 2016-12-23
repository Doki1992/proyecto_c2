#include "produccion_principal1.h"
#include"visitor.h"
produccion_principal1::produccion_principal1(produccion_lista_instrucciones*pi, QString fila)
{
    this->fila=fila;
    this->pl=pi;
}
QString produccion_principal1::accept(visitor *v){
    return v->visit_principal1(this);
}
