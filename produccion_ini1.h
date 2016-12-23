#ifndef PRODUCCION_INI1_H
#define PRODUCCION_INI1_H
#include"produccion_ini.h"
#include"produccion_lienzo.h"
#include<QString>
class produccion_ini1:public produccion_ini
{
public:
    QString fila;
    produccion_ini*pi;
    produccion_lienzo*pl;
    produccion_ini1(produccion_ini*pi, produccion_lienzo*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INI1_H
