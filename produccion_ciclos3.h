#ifndef PRODUCCION_CICLOS3_H
#define PRODUCCION_CICLOS3_H
#include"produccion_ciclos.h"
#include"produccion_expresion.h"
#include"produccion_lista_instrucciones.h"
class produccion_ciclos3:public produccion_ciclos
{
public:
    QString fila;
    produccion_expresion*pe;
    produccion_lista_instrucciones*l1;
    produccion_ciclos3(produccion_expresion*pe,produccion_lista_instrucciones*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_CICLOS3_H
