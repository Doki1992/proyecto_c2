#ifndef PRODUCCION_LISTA_NOMBRE_H
#define PRODUCCION_LISTA_NOMBRE_H
#include "nodo.h"
#include<QString>
class produccion_lista_nombre:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_LISTA_NOMBRE_H
