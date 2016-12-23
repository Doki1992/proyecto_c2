#include "produccion_instruccion1.h"
#include"visitor.h"
produccion_instruccion1::produccion_instruccion1(produccion_declaracion_variable*pe)
{
    this->pd=pe;
}
QString produccion_instruccion1::accept(visitor *v){
    return v->visit_instruccion1(this);
}
