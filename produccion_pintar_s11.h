#ifndef PRODUCCION_PINTAR_S11_H
#define PRODUCCION_PINTAR_S11_H
#include"produccion_pintar_s.h"
#include"produccion_expresion.h"
class produccion_pintar_s11
{
public:
    produccion_expresion*p1;
    produccion_expresion*p2;
    produccion_expresion*p3;
    produccion_expresion*p4;
    produccion_pintar_s11(produccion_expresion*p1,produccion_expresion*p2,produccion_expresion*p3,produccion_expresion*p4);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_PINTAR_S11_H
