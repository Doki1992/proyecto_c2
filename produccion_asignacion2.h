#ifndef PRODUCCION_ASIGNACION2_H
#define PRODUCCION_ASIGNACION2_H
#include"produccion_asignacion.h"
#include"produccion_expresion.h"
class produccion_asignacion2:public produccion_asignacion
{
public:
    produccion_expresion*pe;
    QString me ="produccion_asignacion2";
    produccion_asignacion2(produccion_expresion*pe);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_ASIGNACION2_H
