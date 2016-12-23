#ifndef PRODUCCION_LIENZO2_H
#define PRODUCCION_LIENZO2_H
#include"produccion_lienzo.h"
#include"produccion_visibilidad.h"
#include"produccion_lista_instrucciones.h"
class produccion_lienzo2:public produccion_lienzo
{
public:
    QString iden;
    QString fila;
    produccion_lista_instrucciones*pl;
    produccion_visibilidad*pv;
    produccion_lienzo2(produccion_visibilidad*pv, QString iden, produccion_lista_instrucciones*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LIENZO2_H
