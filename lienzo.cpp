#include "lienzo.h"

lienzo::lienzo(QString hereda, QString id, QString visibilidad, produccion_lienzo *lienzo, tabla_simbolos*ts, QString lista)
{
    this->ts=ts;
    this->hereda=hereda;
    this->id=id;
    this->visibilidad=visibilidad;
    this->lienz=lienzo;
    this->lista = lista;
}

QString lienzo::getId()
{
    return"lienzo";
}
