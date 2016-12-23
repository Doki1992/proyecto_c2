#ifndef PRODUCCION_LISTA_ASIGNACION_H
#define PRODUCCION_LISTA_ASIGNACION_H
#include "nodo.h"
#include<QString>
class produccion_lista_asignacion:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_LISTA_ASIGNACION_H
