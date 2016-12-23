#ifndef PRODUCCION_INSTRUCCION_H
#define PRODUCCION_INSTRUCCION_H
#include "nodo.h"
#include<QString>
class produccion_instruccion:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_INSTRUCCION_H
