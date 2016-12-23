#ifndef PRODUCCION_DECLARADOR_2_H
#define PRODUCCION_DECLARADOR_2_H
#include "declarador.h"
#include "lista_corchetes.h"
class produccion_declarador_2: public declarador
{
public:
    QString fila;
    produccion_declarador_2(QString iden,lista_corchetes * lc,QString fila);
    QString iden;
    lista_corchetes * lc;
    virtual QString accept(visitor *v);

};

#endif // PRODUCCION_DECLARADOR_2_H
