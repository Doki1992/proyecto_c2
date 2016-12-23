#include "produccion_declaracion_metodo3.h"
#include"visitor.h"
produccion_declaracion_metodo3::produccion_declaracion_metodo3(declarador *iden, produccion_lista_parametros*pp, produccion_lista_instrucciones*pl, QString fila)
{
    this->fila=fila;
    this->pl=pl;
    this->pp=pp;
    this->iden=iden;
}

QString produccion_declaracion_metodo3::accept(visitor *v)
{
    return v->visit_declaracion_metodo3(this);
}
