#ifndef PRODUCCION_LISTA_NOMBRE2_H
#define PRODUCCION_LISTA_NOMBRE2_H
#include"produccion_lista_nombre.h"
#include"declarador.h"
class produccion_lista_nombre2:public produccion_lista_nombre
{
public:
    QString fila;
    declarador* iden;
    produccion_lista_nombre2(declarador* iden,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_NOMBRE2_H
