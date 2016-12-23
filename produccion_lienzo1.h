#ifndef PRODUCCION_LIENZO1_H
#define PRODUCCION_LIENZO1_H
#include"produccion_lienzo.h"
#include"produccion_lista_instrucciones.h"
class produccion_lienzo1:public produccion_lienzo
{
public:
    QString fila;
    QString iden;
    produccion_lista_instrucciones*pl;
    produccion_lienzo1(QString iden, produccion_lista_instrucciones*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LIENZO1_H
