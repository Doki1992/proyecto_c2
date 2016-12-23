#ifndef PRODUCCION_CICLOS6_H
#define PRODUCCION_CICLOS6_H
#include"produccion_ciclos.h"
#include"produccion_expresion.h"
#include"produccion_lista_case.h"
class produccion_ciclos6:public produccion_ciclos
{
public:
    QString fila;
    produccion_expresion*pe;
    produccion_lista_case*pl;
    produccion_ciclos6(produccion_expresion*pe,produccion_lista_case*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_CICLOS6_H
