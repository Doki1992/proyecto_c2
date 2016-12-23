#include "expresion_caracter.h"
#include"visitor.h"
expresion_caracter::expresion_caracter(QString car)
{
    this->car=car;
}

QString expresion_caracter::accept(visitor *v)
{
    return v->visit_expresion_caracter(this);
}
