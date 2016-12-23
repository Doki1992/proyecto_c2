#ifndef PRODUCCION_DECLARADOR_1_H
#define PRODUCCION_DECLARADOR_1_H
#include "declarador.h"

class produccion_declarador_1: public declarador
{
public:
    produccion_declarador_1(QString iden);
    QString iden ;
    virtual QString accept(visitor *v);

};

#endif // PRODUCCION_DECLARADOR_1_H
