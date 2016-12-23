#include "produccion_ciclos3.h"
#include"visitor.h"
produccion_ciclos3::produccion_ciclos3(produccion_expresion*pe, produccion_lista_instrucciones*pl, QString fila)
{
    this->fila=fila;
    this->pe=pe;
    this->l1=pl;
}

QString produccion_ciclos3::accept(visitor *v)
{
    return v->visit_ciclos3(this);
}
