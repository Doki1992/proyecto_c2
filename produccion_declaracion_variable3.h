#ifndef PRODUCCION_DECLARACION_VARIABLE3_H
#define PRODUCCION_DECLARACION_VARIABLE3_H
#include"produccion_declaracion_variable.h"
#include"produccion_tipo.h"
#include"produccion_lista_nombre.h"
class produccion_declaracion_variable3:public produccion_declaracion_variable
{
public:
    produccion_tipo*pt;
    produccion_lista_nombre*pl;
    produccion_declaracion_variable3(produccion_tipo*pt,produccion_lista_nombre*pl);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_DECLARACION_VARIABLE3_H
