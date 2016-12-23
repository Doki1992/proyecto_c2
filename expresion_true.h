#ifndef EXPRESION_TRUE_H
#define EXPRESION_TRUE_H
#include"produccion_expresion.h"
class expresion_true:public produccion_expresion
{
public:
    QString tr;
    expresion_true(QString dec);
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_TRUE_H
