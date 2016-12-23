#ifndef PRODUCCION_SUMARIZAR_H
#define PRODUCCION_SUMARIZAR_H
#define PRODUCCION_PINTAR_S_H
#include "nodo.h"
#include<QString>
class produccion_sumarizar:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_SUMARIZAR_H
