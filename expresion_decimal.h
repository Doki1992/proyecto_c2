#ifndef EXPRESION_DECIMAL_H
#define EXPRESION_DECIMAL_H
#include"produccion_expresion.h"
class expresion_decimal:public produccion_expresion
{
public:
    QString dec;
    expresion_decimal(QString dec);
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_DECIMAL_H
