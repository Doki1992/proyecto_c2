#ifndef LISTA_CORCHETES
#define LISTA_CORCHETES
#include "nodo.h"

class lista_corchetes : public nodo{
public:
    virtual QString accept(visitor *v)=0;
};




#endif // LISTA_CORCHETES

