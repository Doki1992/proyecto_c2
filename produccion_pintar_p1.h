#ifndef PRODUCCION_PINTAR_P1_H
#define PRODUCCION_PINTAR_P1_H
#include<QString>
#include"produccion_pintar_p.h"
#include"produccion_expresion.h"
class produccion_pintar_p1:public produccion_pintar_p
{
public:
    produccion_expresion*p1;
    produccion_expresion*p2;
    QString cadena;
    produccion_expresion*p4;
    QString fila;
    produccion_pintar_p1(produccion_expresion*p1,produccion_expresion*p2,QString cadena,produccion_expresion*p4,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_PINTAR_P1_H
