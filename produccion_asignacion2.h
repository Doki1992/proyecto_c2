#ifndef PRODUCCION_ASIGNACION2_H
#define PRODUCCION_ASIGNACION2_H
#include"produccion_asignacion.h"
#include"produccion_expresion.h"
class produccion_asignacion2:public produccion_asignacion
{
public:
    QString fila;
    produccion_expresion*pe;
    produccion_asignacion2(produccion_expresion*pe,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_ASIGNACION2_H
