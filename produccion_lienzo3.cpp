#include "produccion_lienzo3.h"
#include"visitor.h"
produccion_lienzo3::produccion_lienzo3(QString iden, produccion_extiende*pe, produccion_lista_instrucciones*pl, QString fila)
{
    this->fila=fila;
    this->pl=pl;
    this->iden=iden;
    this->pe=pe;
}

QString produccion_lienzo3::accept(visitor *v)
{
    return v->visit_lienzo3(this);
}
