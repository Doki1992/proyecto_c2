#ifndef PRODUCCION_LISTA_INSTRUCCIONES_H
#define PRODUCCION_LISTA_INSTRUCCIONES_H
#include "nodo.h"
#include<QString>
class produccion_lista_instrucciones:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_LISTA_INSTRUCCIONES_H
