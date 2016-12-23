#ifndef PRODUCCION_CICLOS5_H
#define PRODUCCION_CICLOS5_H
#include"produccion_ciclos.h"
#include"produccion_lista_instrucciones.h"
#include"produccion_expresion.h"
class produccion_ciclos5:public produccion_ciclos
{
public:
    produccion_expresion*pe;
    produccion_lista_instrucciones*pl;
    QString fila;
    produccion_ciclos5(produccion_lista_instrucciones*pl,produccion_expresion*pe,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_CICLOS5_H
