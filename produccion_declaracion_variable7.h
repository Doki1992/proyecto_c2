#ifndef PRODUCCION_DECLARACION_VARIABLE7_H
#define PRODUCCION_DECLARACION_VARIABLE7_H
#include "produccion_declaracion_variable.h"
#include <QString>
#include "produccion_tipo.h"
#include "produccion_lista_nombre.h"
#include "produccion_asignacion.h"
class produccion_declaracion_variable7:public produccion_declaracion_variable
{
public:
    QString fila;
    produccion_declaracion_variable7(QString conservar,
    produccion_tipo * tipo,
    produccion_lista_nombre *lnombre,
    produccion_asignacion *asignacion,QString fila);
    QString conservar;
    produccion_tipo * tipo;
    produccion_lista_nombre *lnombre;
    produccion_asignacion *asignacion;
    virtual QString accept(visitor *v);


};

#endif // PRODUCCION_DECLARACION_VARIABLE7_H
