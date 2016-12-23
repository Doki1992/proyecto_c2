#ifndef PRODUCCION_INSTRUCCION10_H
#define PRODUCCION_INSTRUCCION10_H
#include"produccion_instruccion.h"
class produccion_instruccion10:public produccion_instruccion
{
public:
    QString cont;
    produccion_instruccion10(QString cont);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION10_H
