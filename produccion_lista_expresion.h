#ifndef PRODUCCION_LISTA_EXPRESION_H
#define PRODUCCION_LISTA_EXPRESION_H
#include "nodo.h"
#include<QString>
class produccion_lista_expresion:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_LISTA_EXPRESION_H
