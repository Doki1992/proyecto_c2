#ifndef PRODUCCION_INSTRUCCION14_H
#define PRODUCCION_INSTRUCCION14_H
#include"produccion_instruccion.h"
#include"produccion_lista_expresion.h";
class produccion_instruccion14:public produccion_instruccion
{
public:
    QString fila;
    produccion_instruccion14(QString id,produccion_lista_expresion*pl,QString fila);
    QString iden;
    produccion_lista_expresion*pl;
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION14_H
