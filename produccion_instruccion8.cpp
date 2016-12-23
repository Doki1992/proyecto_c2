#include "produccion_instruccion8.h"
#include"visitor.h"
produccion_instruccion8::produccion_instruccion8(produccion_sumarizar *ps)
{
    this->ps=ps;
}
QString produccion_instruccion8::accept(visitor *v){
    return v->visit_instruccion8(this);
}
