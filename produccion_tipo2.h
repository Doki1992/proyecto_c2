#ifndef PRODUCCION_TIPO2_H
#define PRODUCCION_TIPO2_H
#include"produccion_tipo.h"
class produccion_tipo2:public produccion_tipo
{
public:
    QString tipo;
    produccion_tipo2(QString tipo);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_TIPO2_H
