#include "produccion_lista_parametros3.h"
#include"visitor.h"
produccion_lista_parametros3::produccion_lista_parametros3()
{

}

QString produccion_lista_parametros3::accept(visitor *v)
{
    return v->visit_lista_parametros3(this);
}
