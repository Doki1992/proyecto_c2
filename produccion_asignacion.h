#ifndef PRODUCCION_ASIGNACION_H
#define PRODUCCION_ASIGNACION_H
#include "nodo.h"
#include<QString>
class produccion_asignacion:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_ASIGNACION_H
