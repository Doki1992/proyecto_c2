#ifndef PRODUCCION_DECLARACION_VARIABLE1_H
#define PRODUCCION_DECLARACION_VARIABLE1_H
#include"produccion_declaracion_variable.h"
#include"produccion_tipo.h"
#include"produccion_lista_nombre.h"
class produccion_declaracion_variable1:public produccion_declaracion_variable
{
public:
    QString fila;
    produccion_tipo*pt;
    produccion_lista_nombre*pl;
    produccion_declaracion_variable1(produccion_tipo*pt,produccion_lista_nombre*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_DECLARACION_VARIABLE1_H
