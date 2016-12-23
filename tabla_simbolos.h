#ifndef TABLA_SIMBOLOS_H
#define TABLA_SIMBOLOS_H
#include<QHash>
#include"simbolo.h"
class tabla_simbolos:public QMultiHash<QString ,simbolo*>
{
public:
    tabla_simbolos();    
};

#endif // TABLA_SIMBOLOS_H
