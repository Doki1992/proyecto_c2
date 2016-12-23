#ifndef PRODUCCION_DECLARACION_METODO_H
#define PRODUCCION_DECLARACION_METODO_H
#include "nodo.h"
#include<QString>
class produccion_declaracion_metodo:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_DECLARACION_METODO_H
