#include "produccion_declaracion_metodo1.h"
#include"visitor.h"
produccion_declaracion_metodo1::produccion_declaracion_metodo1(produccion_tipo *pt, declarador *iden, produccion_lista_parametros *pp, produccion_lista_instrucciones *pl,QString fila)
{
    this->fila=fila;
    this->pt=pt;
    this->pp=pp;
    this->pl=pl;
    this->iden=iden;
}

QString produccion_declaracion_metodo1::accept(visitor *v)
{
    return v->visit_declaracion_metodo1(this);
}
