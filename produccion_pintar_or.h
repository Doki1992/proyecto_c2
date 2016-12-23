#ifndef PRODUCCION_PINTAR_OR_H
#define PRODUCCION_PINTAR_OR_H
#include "nodo.h"
#include<QString>
class produccion_pintar_or:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_PINTAR_OR_H
