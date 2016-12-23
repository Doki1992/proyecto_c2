#include "expresion_decimal.h"
#include"visitor.h"
expresion_decimal::expresion_decimal(QString dec)
{
    this->dec=dec;
}

QString expresion_decimal::accept(visitor *v)
{
    return v->visit_expresion_decimal(this);
}
