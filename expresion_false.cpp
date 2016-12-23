#include "expresion_false.h"
#include"visitor.h"
expresion_false::expresion_false(QString fa)
{
    this->fa=fa;
}

QString expresion_false::accept(visitor *v)
{
    return v->visit_expresion_false(this);
}
