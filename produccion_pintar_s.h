#ifndef PRODUCCION_PINTAR_S_H
#define PRODUCCION_PINTAR_S_H
#include "nodo.h"
#include<QString>
class produccion_pintar_s:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_PINTAR_S_H
