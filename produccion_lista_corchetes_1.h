#ifndef PRODUCCION_LISTA_CORCHETES_1_H
#define PRODUCCION_LISTA_CORCHETES_1_H
#include "lista_corchetes.h"
#include "produccion_expresion.h"
class produccion_lista_corchetes_1 : public lista_corchetes
{
public:
    QString fila;
    produccion_lista_corchetes_1(lista_corchetes * lc, produccion_expresion*exp,QString fila);
    virtual QString accept(visitor *v);
    lista_corchetes * lc;
    produccion_expresion*exp;

};

#endif // PRODUCCION_LISTA_CORCHETES_1_H
