#ifndef PRODUCCION_LIENZO3_H
#define PRODUCCION_LIENZO3_H
#include"produccion_lienzo.h"
#include"produccion_lista_instrucciones.h"
#include"produccion_extiende.h"
class produccion_lienzo3:public produccion_lienzo
{
public:
    QString iden;
    QString fila;
    produccion_extiende*pe;
    produccion_lista_instrucciones*pl;
    produccion_lienzo3(QString iden,produccion_extiende*pe,produccion_lista_instrucciones*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LIENZO3_H
