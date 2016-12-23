#ifndef EXPRESION_CARACTER_H
#define EXPRESION_CARACTER_H
#include"produccion_expresion.h"
class expresion_caracter:public produccion_expresion
{
public:
    QString car;
    expresion_caracter(QString car);
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_CARACTER_H
