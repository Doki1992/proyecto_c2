#include "produccion_declarador_1.h"
#include "visitor.h"
produccion_declarador_1::produccion_declarador_1(QString iden, QString fila)
{
    this->fila=fila;
    this->iden=iden;

}

QString produccion_declarador_1::accept(visitor *v){
    return v->visit_declarador_1(this);
}

