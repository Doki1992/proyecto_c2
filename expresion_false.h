#ifndef EXPRESION_FALSE_H
#define EXPRESION_FALSE_H
#include"produccion_expresion.h"
class expresion_false:public produccion_expresion
{
public:
    QString fa;
    expresion_false(QString fa);
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_FALSE_H
