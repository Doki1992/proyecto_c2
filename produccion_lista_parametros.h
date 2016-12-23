#ifndef PRODUCCION_LISTA_PARAMETROS_H
#define PRODUCCION_LISTA_PARAMETROS_H
#include "nodo.h"
#include<QString>
class produccion_lista_parametros:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_LISTA_PARAMETROS_H
