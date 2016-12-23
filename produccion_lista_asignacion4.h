#ifndef PRODUCCION_LISTA_ASIGNACION4_H
#define PRODUCCION_LISTA_ASIGNACION4_H
#include"produccion_lista_asignacion.h"
#include"produccion_expresion.h"
class produccion_lista_asignacion4:public produccion_lista_asignacion
{
public:
    QString fila;
    produccion_expresion*pe;
    QString iden;
    produccion_lista_asignacion4(QString iden,produccion_expresion*pe,QString fila);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_ASIGNACION4_H
