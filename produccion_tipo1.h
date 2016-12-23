#ifndef PRODUCCION_TIPO1_H
#define PRODUCCION_TIPO1_H
#include"produccion_tipo.h"
class produccion_tipo1:public produccion_tipo
{
public:
    QString tipo;
    produccion_tipo1(QString tipo);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_TIPO1_H
