#ifndef PRODUCCION_LIENZO_H
#define PRODUCCION_LIENZO_H
#include "nodo.h"
#include<QString>
class produccion_lienzo:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_LIENZO_H
