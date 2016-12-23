#ifndef PRODUCCION_PRINCIPAL1_H
#define PRODUCCION_PRINCIPAL1_H
#include<QString>
#include"produccion_principal.h"
#include"produccion_lista_instrucciones.h"
class produccion_principal1:public produccion_principal
{
public:
    QString fila;
    produccion_lista_instrucciones*pl;
    produccion_principal1(produccion_lista_instrucciones*pl,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_PRINCIPAL1_H
