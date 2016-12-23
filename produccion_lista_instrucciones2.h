#ifndef PRODUCCION_LISTA_INSTRUCCIONES2_H
#define PRODUCCION_LISTA_INSTRUCCIONES2_H
#include"produccion_lista_instrucciones.h"
#include"produccion_instruccion.h"
class produccion_lista_instrucciones2:public produccion_lista_instrucciones
{
public:
    produccion_instruccion*pi;
    produccion_lista_instrucciones2(produccion_instruccion*pi);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_INSTRUCCIONES2_H
