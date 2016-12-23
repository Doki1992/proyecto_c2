#ifndef PRODUCCION_PINTAR_P_H
#define PRODUCCION_PINTAR_P_H
#include "nodo.h"
#include<QString>
class produccion_pintar_p:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_PINTAR_P_H
