#ifndef PRODUCCION_LISTA_CASE_H
#define PRODUCCION_LISTA_CASE_H
#include "nodo.h"
#include<QString>
class produccion_lista_case:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};
#endif // PRODUCCION_LISTA_CASE_H
