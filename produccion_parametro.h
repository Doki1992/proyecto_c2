#ifndef PRODUCCION_PARAMETRO_H
#define PRODUCCION_PARAMETRO_H
#include "nodo.h"
#include<QString>
class produccion_parametro:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_PARAMETRO_H
