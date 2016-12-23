#include "produccion_lista_corchete_2.h"
#include "visitor.h"
produccion_lista_corchete_2::produccion_lista_corchete_2(produccion_expresion * exp, QString fila)
{
    this->fila=fila;
    this->exp = exp;

}


QString produccion_lista_corchete_2::accept(visitor *v){
    return v->visit_lista_c2(this);

}
