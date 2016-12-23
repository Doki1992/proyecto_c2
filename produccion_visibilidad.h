#ifndef PRODUCCION_VISIBILIDAD_H
#define PRODUCCION_VISIBILIDAD_H
#include "nodo.h"
#include<QString>
class produccion_visibilidad:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_VISIBILIDAD_H
