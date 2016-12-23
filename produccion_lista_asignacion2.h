#ifndef PRODUCCION_LISTA_ASIGNACION2_H
#define PRODUCCION_LISTA_ASIGNACION2_H
#include"produccion_lista_asignacion.h"
#include"produccion_expresion.h"
#include "declarador.h"
class produccion_lista_asignacion2:public produccion_lista_asignacion
{
public:
    QString fila;
    produccion_expresion*pe;
     declarador*iden;
    produccion_lista_asignacion2(declarador* iden,produccion_expresion*pe,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_ASIGNACION2_H
