#include "produccion_lienzo4.h"
#include"visitor.h"
produccion_lienzo4::produccion_lienzo4(produccion_visibilidad*pv,QString id,produccion_extiende*pe,produccion_lista_instrucciones*pl,QString fila)
{
    this->fila=fila;
    this->pl=pl;
    this->pe=pe;
    this->pv=pv;
    this->id=id;
}

QString produccion_lienzo4::accept(visitor *v)
{
    return v->visit_lienzo4(this);
}
