#ifndef PRODUCCION_TIPO4_H
#define PRODUCCION_TIPO4_H
#include"produccion_tipo.h"
class produccion_tipo4:public produccion_tipo
{
public:
    QString tipo;
    produccion_tipo4(QString tipo);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_TIPO4_H
