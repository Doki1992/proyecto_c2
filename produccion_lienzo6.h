#ifndef PRODUCCION_LIENZO6_H
#define PRODUCCION_LIENZO6_H
#include"produccion_lienzo.h"
#include"produccion_lista_asignacion.h"
class produccion_lienzo6:public produccion_lienzo
{
public:
    QString fila;
    produccion_lista_asignacion*pl;
    produccion_lienzo6(produccion_lista_asignacion*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LIENZO6_H
