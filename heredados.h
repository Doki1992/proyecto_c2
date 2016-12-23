#ifndef HEREDADOS_H
#define HEREDADOS_H
#include "simbolo.h"

class heredados
{
public:
    heredados(simbolo*hijo,simbolo*padre,QString nombre_padre);
    simbolo *hijo;
    simbolo*padre;
    QString nombre_padre;
};

#endif // HEREDADOS_H
