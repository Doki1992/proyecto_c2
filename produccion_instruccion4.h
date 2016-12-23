#ifndef PRODUCCION_INSTRUCCION4_H
#define PRODUCCION_INSTRUCCION4_H
#include"produccion_instruccion.h"
#include"produccion_ciclos.h"
class produccion_instruccion4:public produccion_instruccion
{
public:
    QString fila;
    produccion_ciclos*pc;
    produccion_instruccion4(produccion_ciclos*pc,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION4_H
