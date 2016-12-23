#include "expresion_cadenacomillas.h"
#include"visitor.h"
expresion_cadenacomillas::expresion_cadenacomillas(QString cad)
{
    this->cad=cad;
}

QString expresion_cadenacomillas::accept(visitor *v)
{
    return v->visit_expresion_cadenacomillas(this);
}
