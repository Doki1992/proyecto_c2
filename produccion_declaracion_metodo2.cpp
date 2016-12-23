#include "produccion_declaracion_metodo2.h"
#include"visitor.h"
produccion_declaracion_metodo2::produccion_declaracion_metodo2(produccion_tipo*pt, declarador *iden, produccion_lista_parametros*pp, produccion_lista_instrucciones*pl, QString fila)
{
    this->fila=fila;
    this->pt=pt;
    this->pl=pl;
    this->pp=pp;
    this->iden=iden;
}

QString produccion_declaracion_metodo2::accept(visitor *v)
{
    return v->visit_declaracion_metodo2(this);
}
