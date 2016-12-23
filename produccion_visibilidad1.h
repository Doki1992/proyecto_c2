#ifndef PRODUCCION_VISIBILIDAD1_H
#define PRODUCCION_VISIBILIDAD1_H
#include"produccion_visibilidad.h"
class produccion_visibilidad1:public produccion_visibilidad
{
public:
    QString fila;
    QString tipo;
    produccion_visibilidad1(QString t,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_VISIBILIDAD1_H
