#ifndef PRODUCCION_LISTA_PARAMETROS3_H
#define PRODUCCION_LISTA_PARAMETROS3_H
#include"produccion_lista_parametros.h"
class produccion_lista_parametros3:public produccion_lista_parametros
{
public:    
    produccion_lista_parametros3();
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_PARAMETROS3_H
