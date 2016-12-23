#include "variable.h"
variable::variable(QString tipo, QString id, QString valor, QString visibilidad, QString conservar)
{
    this->id=id;
    this->tipo=tipo;
    this->valor=valor;
    this->visibilidad=visibilidad;
    this->conservar=conservar;
}

QString variable::getId()
{
    return"";
}
