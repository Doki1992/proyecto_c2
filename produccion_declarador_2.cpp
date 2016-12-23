#include "produccion_declarador_2.h"
#include "visitor.h"
produccion_declarador_2::produccion_declarador_2(QString iden, lista_corchetes *lc,QString fila)
{
    this->fila=fila;
    this->iden=iden;
    this->lc=lc;

}


QString produccion_declarador_2::accept(visitor *v){
    return v->visit_declarador_2(this);
}
