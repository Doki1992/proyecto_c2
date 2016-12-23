#ifndef EXPRESION_NUMERO_H
#define EXPRESION_NUMERO_H
#include"produccion_expresion.h"
class expresion_numero:public produccion_expresion
{
public:
    QString num;
    expresion_numero(QString num);
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_NUMERO_H
