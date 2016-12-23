#ifndef PRODUCCION_DECLARACION_VARIABLE_H
#define PRODUCCION_DECLARACION_VARIABLE_H
#include "nodo.h"
#include<QString>
class produccion_declaracion_variable:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_DECLARACION_VARIABLE_H
