#include "produccion_instruccion4.h"
#include"visitor.h"
produccion_instruccion4::produccion_instruccion4(produccion_ciclos *pc)
{
    this->pc=pc;
}
QString produccion_instruccion4::accept(visitor *v){
    return v->visit_instruccion4(this);
}
