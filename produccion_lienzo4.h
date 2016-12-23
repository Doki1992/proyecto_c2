#ifndef PRODUCCION_LIENZO4_H
#define PRODUCCION_LIENZO4_H
#include"produccion_lienzo.h"
#include"produccion_visibilidad.h"
#include"produccion_extiende.h"
#include"produccion_lista_instrucciones.h"
class produccion_lienzo4:public produccion_lienzo
{
public:
    QString fila;
    produccion_visibilidad*pv;
    QString id;
    produccion_lista_instrucciones*pl;
    produccion_extiende*pe;
    produccion_lienzo4(produccion_visibilidad*pv,QString id,produccion_extiende*pe,produccion_lista_instrucciones*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LIENZO4_H
