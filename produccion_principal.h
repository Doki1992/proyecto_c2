#ifndef PRODUCCION_PRINCIPAL_H
#define PRODUCCION_PRINCIPAL_H
#define PRODUCCION_PINTAR_S_H
#include "nodo.h"
#include<QString>
class produccion_principal:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_PRINCIPAL_H
