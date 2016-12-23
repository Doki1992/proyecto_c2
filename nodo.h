#ifndef NODO_H
#define NODO_H
#include<QString>
class visitor;
class nodo{
public:
    virtual QString accept(visitor *v) =0;
};

#endif // NODO_H
