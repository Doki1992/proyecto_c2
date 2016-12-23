#ifndef PRODUCCION_INSTRUCCION11_H
#define PRODUCCION_INSTRUCCION11_H

#include"produccion_instruccion.h"
class produccion_instruccion11:public produccion_instruccion
{
public:
    QString sal;
    QString fila;
    produccion_instruccion11(QString sal,QString fila);
    virtual QString accept(visitor *v);
};
#endif // PRODUCCION_INSTRUCCION11_H
