#include "expresion_true.h"
#include"visitor.h"
expresion_true::expresion_true(QString tr)
{
    this->tr=tr;
}

QString expresion_true::accept(visitor *v)
{
    return v->visit_expresion_true(this);
}
