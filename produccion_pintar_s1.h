#ifndef PRODUCCION_PINTAR_S1_H
#define PRODUCCION_PINTAR_S1_H
#include"produccion_pintar_s.h"
#include<QString>
#include"produccion_expresion.h"
class produccion_pintar_s1:public produccion_pintar_s
{
public:
    produccion_expresion*p1;
    produccion_expresion*p2;
    produccion_expresion*p3;
    produccion_expresion*p4;
    produccion_pintar_s1(produccion_expresion*p1,produccion_expresion*p2,produccion_expresion*p3,produccion_expresion*p4);
    virtual QString accept(visitor *v);
};
#endif // PRODUCCION_PINTAR_S1_H
