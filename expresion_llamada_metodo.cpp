#include "expresion_llamada_metodo.h"
#include "visitor.h"

expresion_llamada_metodo::expresion_llamada_metodo(QString iden, produccion_lista_expresion*lista)
{
    this->iden=iden;
    this->lista=lista;
}

QString expresion_llamada_metodo::accept(visitor *v){
    return v->visit_expresion_llamada(this);
}

