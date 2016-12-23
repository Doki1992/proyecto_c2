#ifndef PRODUCCION_CICLOS2_H
#define PRODUCCION_CICLOS2_H
#include"produccion_ciclos.h"
#include"produccion_expresion.h"
#include"produccion_lista_instrucciones.h"
class produccion_ciclos2:public produccion_ciclos
{
public:
    produccion_expresion*pe;
    QString fila;
    produccion_lista_instrucciones*l1;
    produccion_ciclos2(produccion_expresion*pe,produccion_lista_instrucciones*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_CICLOS2_H
