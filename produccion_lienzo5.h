#ifndef PRODUCCION_LIENZO5_H
#define PRODUCCION_LIENZO5_H
#include"produccion_lienzo.h"
#include"produccion_declaracion_variable.h"
class produccion_lienzo5:public produccion_lienzo
{
public:
    QString fila;
    produccion_declaracion_variable*pd;
    produccion_lienzo5(produccion_declaracion_variable*pd,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LIENZO5_H
