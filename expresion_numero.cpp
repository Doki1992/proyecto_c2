#include "expresion_numero.h"
#include"visitor.h"
expresion_numero::expresion_numero(QString num)
{
    this->num=num;
}

QString expresion_numero::accept(visitor *v)
{
    return v->visit_expresion_numero(this);
}
