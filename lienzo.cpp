#include "lienzo.h"

lienzo::lienzo(QString hereda, QString id, QString visibilidad, produccion_lienzo *lienzo, tabla_simbolos*ts)
{
    this->ts=ts;
    this->hereda=hereda;
    this->id=id;
    this->visibilidad=visibilidad;
    this->lienz=lienzo;
}

QString lienzo::getId()
{
    return"";
}
