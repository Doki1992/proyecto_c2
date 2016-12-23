#ifndef EXPRESION_NAND_H
#define EXPRESION_NAND_H
#include "produccion_expresion.h"

class expresion_nand:public produccion_expresion
{
public:
    expresion_nand(produccion_expresion * exp1,produccion_expresion *exp2);
    produccion_expresion * exp1;
    produccion_expresion * exp2;
    virtual QString accept(visitor *v);

};

#endif // EXPRESION_NAND_H
