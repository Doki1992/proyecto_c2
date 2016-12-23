#ifndef PRODUCCION_CICLOS_H
#define PRODUCCION_CICLOS_H
#include "nodo.h"
#include<QString>
class produccion_ciclos:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_CICLOS_H
