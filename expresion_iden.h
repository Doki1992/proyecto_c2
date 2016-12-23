#ifndef EXPRESION_IDEN_H
#define EXPRESION_IDEN_H
#include"produccion_expresion.h"
#include "declarador.h"
class expresion_iden:public produccion_expresion
{
public:
    declarador* iden;
    expresion_iden(declarador* iden);
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_IDEN_H
