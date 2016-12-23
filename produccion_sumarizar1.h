#ifndef PRODUCCION_SUMARIZAR1_H
#define PRODUCCION_SUMARIZAR1_H
#include<QString>
#include"produccion_sumarizar.h"
class produccion_sumarizar1:public produccion_sumarizar
{
public:
    QString iden;
    produccion_sumarizar1(QString iden);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_SUMARIZAR1_H
