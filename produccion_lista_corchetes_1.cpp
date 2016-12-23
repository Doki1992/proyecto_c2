#include "produccion_lista_corchetes_1.h"
#include "visitor.h"
produccion_lista_corchetes_1::produccion_lista_corchetes_1(lista_corchetes *lc, produccion_expresion *exp)
{
    this->exp=exp;
    this->lc=lc;

}

QString produccion_lista_corchetes_1::accept(visitor *v){
    return v->visit_lista_c1(this);
}

