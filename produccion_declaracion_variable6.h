#ifndef PRODUCCION_DECLARACION_VARIABLE6_H
#define PRODUCCION_DECLARACION_VARIABLE6_H
#include "produccion_declaracion_variable.h"
#include "produccion_tipo.h"
#include "produccion_lista_nombre.h"
#include "produccion_asignacion.h"

class produccion_declaracion_variable6:public produccion_declaracion_variable
{
public:
    QString fila;
    produccion_declaracion_variable6(produccion_tipo*tipo,
    produccion_lista_nombre *nombre,QString fila);
    produccion_tipo*tipo;
    produccion_lista_nombre *nombre;
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_DECLARACION_VARIABLE6_H
