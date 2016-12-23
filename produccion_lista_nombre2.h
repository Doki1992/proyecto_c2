#ifndef PRODUCCION_LISTA_NOMBRE2_H
#define PRODUCCION_LISTA_NOMBRE2_H
#include"produccion_lista_nombre.h"
#include"declarador.h"
class produccion_lista_nombre2:public produccion_lista_nombre
{
public:
    declarador* iden;
    produccion_lista_nombre2(declarador* iden);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_NOMBRE2_H
