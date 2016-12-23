#ifndef PRODUCCION_PINTAR_OR1_H
#define PRODUCCION_PINTAR_OR1_H
#include<QString>
#include"produccion_pintar_or.h"
#include"produccion_expresion.h"
class produccion_pintar_or1:public produccion_pintar_or
{
public:
    QString fila;
    produccion_expresion*p1;
    produccion_expresion*p2;
    produccion_expresion*p4;
    produccion_expresion*p5;
    QString cadena;
    produccion_expresion*p6;
    produccion_pintar_or1(produccion_expresion*p1,produccion_expresion*p2,QString cadena,produccion_expresion*p4,produccion_expresion*p5,produccion_expresion*p6,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_PINTAR_OR1_H
