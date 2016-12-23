#ifndef PRODUCCION_INSTRUCCION5_H
#define PRODUCCION_INSTRUCCION5_H
#include"produccion_instruccion.h"
#include"produccion_pintar_or.h"
class produccion_instruccion5:public produccion_instruccion
{
public:
    QString fila;
    produccion_pintar_or*pp;
    produccion_instruccion5(produccion_pintar_or*pp,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION5_H
