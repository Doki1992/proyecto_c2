#ifndef PRODUCCION_EXTIENDE_H
#define PRODUCCION_EXTIENDE_H
#include "nodo.h"
#include<QString>
class produccion_extiende:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_EXTIENDE_H
