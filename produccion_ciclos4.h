#ifndef PRODUCCION_CICLOS4_H
#define PRODUCCION_CICLOS4_H
#include"produccion_ciclos.h"
#include"produccion_lista_asignacion.h"
#include"produccion_lista_instrucciones.h"
#include"produccion_expresion.h"
class produccion_ciclos4:public produccion_ciclos
{
public:
    QString fila;
    produccion_lista_asignacion*pi;
    produccion_lista_asignacion*pf;
    produccion_expresion*pe;
    produccion_lista_instrucciones*pl;
    produccion_ciclos4(produccion_lista_asignacion*pi,produccion_expresion*pe,produccion_lista_asignacion*pf,produccion_lista_instrucciones*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_CICLOS4_H
