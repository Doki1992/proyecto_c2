#include "expresion_epsilon.h"
#include "visitor.h"
expresion_epsilon::expresion_epsilon()
{

}

QString expresion_epsilon::accept(visitor *v){
    return v->visit_expresion_epsilon(this);
}
