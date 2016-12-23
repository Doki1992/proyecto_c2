#ifndef PRODUCCION_INI_H
#define PRODUCCION_INI_H
#include "nodo.h"
#include<QString>
class produccion_ini:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_INI_H
