#ifndef PRODUCCION_INI2_H
#define PRODUCCION_INI2_H
#include"produccion_ini.h"
#include"produccion_lienzo.h"
#include<QString>
class produccion_ini2:public produccion_ini
{
public:
    QString fila;
    produccion_lienzo*pl;
    produccion_ini2(produccion_lienzo*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INI2_H
