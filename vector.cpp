#include "vector.h"

Vector::Vector(QString conservar, QString tipo, QString nombre, QStringList *lista_valores, QLinkedList<int> *lista_dimensiones)
{
    this->conservar=conservar;
    this->tipo=tipo;
    this->nombre=nombre;
    this->lista_dimensiones=lista_dimensiones;
    this->lista_valores=lista_valores;
}


QString Vector::getId(){
    return "vector";
}
