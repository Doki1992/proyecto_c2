#ifndef PRODUCCION_VISIBILIDAD3_H
#define PRODUCCION_VISIBILIDAD3_H
#include"produccion_visibilidad.h"
class produccion_visibilidad3:public produccion_visibilidad
{
public:
    QString fila;
    QString tipo;
    produccion_visibilidad3(QString t,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_VISIBILIDAD3_H
