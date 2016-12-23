#ifndef VARIABLE_H
#define VARIABLE_H
#include"simbolo.h"
#include<QString>
class variable:public simbolo
{
public:
    variable(QString tipo,QString id,QString valor, QString visibilidad,QString conservar);
    QString tipo;
    QString id;
    QString valor;
    QString visibilidad;
    QString conservar;
    virtual QString getId();
};

#endif // VARIABLE_H
