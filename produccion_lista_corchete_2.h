#ifndef PRODUCCION_LISTA_CORCHETE_2_H
#define PRODUCCION_LISTA_CORCHETE_2_H
#include "lista_corchetes.h"
#include "produccion_expresion.h"

class produccion_lista_corchete_2: public lista_corchetes
{
public:
    produccion_lista_corchete_2(produccion_expresion * exp);
    produccion_expresion * exp;
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_LISTA_CORCHETE_2_H
