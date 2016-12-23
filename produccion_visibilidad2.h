#ifndef PRODUCCION_VISIBILIDAD2_H
#define PRODUCCION_VISIBILIDAD2_H
#include"produccion_visibilidad.h"
class produccion_visibilidad2:public produccion_visibilidad
{
public:
    QString fila;
    QString tipo;
    produccion_visibilidad2(QString t,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_VISIBILIDAD2_H
