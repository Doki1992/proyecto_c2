#ifndef PRODUCCION_DECLARACION_VARIABLE5_H
#define PRODUCCION_DECLARACION_VARIABLE5_H
#include "produccion_declaracion_variable.h"
#include "produccion_tipo.h"
#include "produccion_lista_nombre.h"
#include "produccion_asignacion.h"

class produccion_declaracion_variable5:public produccion_declaracion_variable
{
public:
    QString fila;
    produccion_declaracion_variable5(produccion_tipo * tipo,
    produccion_lista_nombre*nombre,
    produccion_asignacion *asignacion,QString fila);
    produccion_tipo * tipo;
    produccion_lista_nombre*nombre;
    produccion_asignacion *asignacion;
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_DECLARACION_VARIABLE5_H
