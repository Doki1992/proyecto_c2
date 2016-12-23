#ifndef PRODUCCION_LISTA_NOMBRE1_H
#define PRODUCCION_LISTA_NOMBRE1_H
#include"produccion_lista_nombre.h"
#include"declarador.h"
class produccion_lista_nombre1:public produccion_lista_nombre
{
public:
    QString fila;
    produccion_lista_nombre*pl;
    declarador* iden;
    produccion_lista_nombre1(produccion_lista_nombre*pl,declarador *iden,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_NOMBRE1_H
