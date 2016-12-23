#ifndef VECTOR_H
#define VECTOR_H
#include "simbolo.h"

class Vector:public simbolo
{
public:
    Vector();
    int size;
    int dimensiones;
    QString tipo;
    QString nombre;
    //posibles valores
    virtual QString getId();
};

#endif // VECTOR_H
