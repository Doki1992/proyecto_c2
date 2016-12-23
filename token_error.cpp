#include "token_error.h"

token_error::token_error(QString valor, QString fila, QString columna, QString tipo, QString descripcion)
{
    this->col=columna;
    this->fila=fila;
    this->descripcion=descripcion;
    this->tipo=tipo;
    this->valor=valor;
}
