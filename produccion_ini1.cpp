#include "produccion_ini1.h"
#include"visitor.h"
produccion_ini1::produccion_ini1(produccion_ini *pi, produccion_lienzo *pl)
{
    this->pi=pi;
    this->pl=pl;
}
QString produccion_ini1::accept(visitor *v){
    return v->visit_ini1(this);
}
