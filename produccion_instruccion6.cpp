#include "produccion_instruccion6.h"
#include"visitor.h"
produccion_instruccion6::produccion_instruccion6(produccion_pintar_p *pp)
{
    this->pp=pp;
}

QString produccion_instruccion6::accept(visitor *v){
    return v->visit_instruccion6(this);
}
