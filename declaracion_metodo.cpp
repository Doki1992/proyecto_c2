#include "declaracion_metodo.h"

declaracion_metodo::declaracion_metodo(produccion_declaracion_metodo *metodo, QString visibilida, QString valor, QString tipo, QString id, produccion_lista_parametros *lista, tabla_simbolos*ts, QString conservar)
{
    this->metodo=metodo;
    this->ts=ts;
    this->visibilidad=visibilida;
    this->valor=valor;
    this->tipo=tipo;
    this->id=id;
    this->lista_parametros=lista;
    this->conservar=conservar;
    this->parametros = new QLinkedList<simbolo*>();
}

QString declaracion_metodo::getId()
{
    return"";
}
