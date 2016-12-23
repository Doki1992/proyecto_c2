#ifndef DECLARADOR
#define DECLARADOR
#include "nodo.h"
class declarador:public nodo{
public:
    virtual QString accept(visitor *v)=0;
};

#endif // DECLARADOR

