#ifndef PRODUCCION_EXTIENDE1_H
#define PRODUCCION_EXTIENDE1_H
#include"produccion_extiende.h"
#include"produccion_lista_nombre.h"
class produccion_extiende1:public produccion_extiende
{
public:
    QString fila;
    produccion_lista_nombre*pl;
    produccion_extiende1(produccion_lista_nombre*pl, QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_EXTIENDE1_H
