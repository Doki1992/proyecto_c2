#ifndef PRODUCCION_ASIGNACION1_H
#define PRODUCCION_ASIGNACION1_H
#include"produccion_asignacion.h"
#include"produccion_lista_asignacion.h"
#include"produccion_expresion.h"
class produccion_asignacion1:public produccion_asignacion
{
public:
    produccion_lista_asignacion*pl;
    produccion_expresion*pe;
    produccion_asignacion1(produccion_expresion*pe,produccion_lista_asignacion*pl);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_ASIGNACION1_H
