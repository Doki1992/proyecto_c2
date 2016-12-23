#ifndef PRODUCCION_EXPRESION_H
#define PRODUCCION_EXPRESION_H
#include "nodo.h"
#include<QString>
class produccion_expresion:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_EXPRESION_H
