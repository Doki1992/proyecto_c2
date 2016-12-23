#ifndef PRODUCCION_TIPO3_H
#define PRODUCCION_TIPO3_H
#include"produccion_tipo.h"
class produccion_tipo3:public produccion_tipo
{
public:
    QString tipo;
    produccion_tipo3(QString tipo);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_TIPO3_H
