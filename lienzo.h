#ifndef LIENZO_H
#define LIENZO_H
#include"simbolo.h"
#include"produccion_lienzo.h"
#include"tabla_simbolos.h"
class lienzo:public simbolo
{
public:
    tabla_simbolos*ts;
    produccion_lienzo*lienz;
    QString hereda;
    QString id;
    QString visibilidad;
    lienzo(QString hereda,QString id,QString visibilidad,produccion_lienzo*lienzo,tabla_simbolos*ts);
    virtual QString getId();
};

#endif // LIENZO_H
