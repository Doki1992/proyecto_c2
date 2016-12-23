#ifndef DECLARACION_METODO_H
#define DECLARACION_METODO_H
#include"simbolo.h"
#include<QString>
#include"declaracion_metodo.h"
#include"tabla_simbolos.h"
#include"produccion_lista_parametros.h"
#include"produccion_declaracion_metodo.h"
#include"produccion_lista_instrucciones.h"
#include <QLinkedList>
class declaracion_metodo:public simbolo
{
public:
    tabla_simbolos*ts;
    produccion_declaracion_metodo*metodo;
    QString visibilidad;
    QString valor;
    QString tipo;
    QString id;
    produccion_lista_parametros*lista_parametros;
    QLinkedList<simbolo*> * parametros;
    QString vector ="";
    QString conservar;

    declaracion_metodo(produccion_declaracion_metodo*metodo,QString visibilida,QString valor,QString tipo,QString id,produccion_lista_parametros*lista,tabla_simbolos*ts,QString conservar);
    virtual QString getId();
};

#endif // DECLARACION_METODO_H
