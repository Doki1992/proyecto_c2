#ifndef PRODUCCION_DECLARACION_VARIABLE2_H
#define PRODUCCION_DECLARACION_VARIABLE2_H
#include"produccion_declaracion_variable.h"
#include"produccion_tipo.h"
#include"produccion_lista_nombre.h"
#include"produccion_asignacion.h"
class produccion_declaracion_variable2:public produccion_declaracion_variable
{
public:
    QString fila;
    produccion_tipo*pt;
    produccion_lista_nombre*pl;
    produccion_asignacion*pa;
    produccion_declaracion_variable2(produccion_tipo*pt,produccion_lista_nombre*pl,produccion_asignacion*pa,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_DECLARACION_VARIABLE2_H
