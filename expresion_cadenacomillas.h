#ifndef EXPRESION_CADENACOMILLAS_H
#define EXPRESION_CADENACOMILLAS_H
#include"produccion_expresion.h"
class expresion_cadenacomillas:public produccion_expresion
{
public:
    QString cad;
    expresion_cadenacomillas(QString cad);
    virtual QString accept(visitor *v);
};

#endif // EXPRESION_CADENACOMILLAS_H
