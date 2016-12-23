#ifndef PRODUCCION_TIPO_H
#define PRODUCCION_TIPO_H
#include "nodo.h"
#include<QString>
class produccion_tipo:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_TIPO_H
