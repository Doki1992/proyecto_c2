#ifndef EXPRESION_LLAMADA_METODO_H
#define EXPRESION_LLAMADA_METODO_H
#include "produccion_expresion.h"
#include "produccion_lista_expresion.h"
class expresion_llamada_metodo: public produccion_expresion
{
public:
    expresion_llamada_metodo(QString iden,produccion_lista_expresion*lista);
    virtual QString accept(visitor *v);
    produccion_lista_expresion*lista;
    QString iden;
};

#endif // EXPRESION_LLAMADA_METODO_H
