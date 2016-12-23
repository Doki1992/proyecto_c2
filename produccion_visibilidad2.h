#ifndef PRODUCCION_VISIBILIDAD2_H
#define PRODUCCION_VISIBILIDAD2_H
#include"produccion_visibilidad.h"
class produccion_visibilidad2:public produccion_visibilidad
{
public:
    QString tipo;
    produccion_visibilidad2(QString t);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_VISIBILIDAD2_H
