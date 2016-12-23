#include "expresion_iden.h"
#include"visitor.h"
expresion_iden::expresion_iden(declarador *iden)
{
    this->iden=iden;
}

QString expresion_iden::accept(visitor *v)
{
    return v->visit_expresion_iden(this);
}
