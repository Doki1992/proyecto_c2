#ifndef PRODUCCION_ORDENAR_H
#define PRODUCCION_ORDENAR_H
#define PRODUCCION_PINTAR_S_H
#include "nodo.h"
#include<QString>
class produccion_ordenar:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_ORDENAR_H
