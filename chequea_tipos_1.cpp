#include "chequea_tipos_1.h"
#include "QString"
#include "math.h"
#include"QDebug"
#include"mainwindow.h"
#include"verifica_tipos.h"
#include"vector.h"
chequea_tipos_1::chequea_tipos_1(tabla_simbolos *ts, QLinkedList<token_error *> *errores)
{
    this->ts=ts;
    this->lienzo_activo=NULL;
    this->metodo_activo=NULL;
    this->errores=errores;
}
int fila_vector=0;
int col_vector=0;
QLinkedList<int>*dim=new QLinkedList<int>();//servira para insertar cada dimension con su respectivo tamaño de la dimension
//[2][4][5] tendria q guardar 2,4,5 en la lista
QString chequea_tipos_1::visit_pintar_s11(produccion_pintar_s11 *pd)
{

}

QString chequea_tipos_1::visit_pintar_or1(produccion_pintar_or1 *pd)
{
    pd->p1->accept(this);
    pd->p2->accept(this);
    pd->p4->accept(this);
    pd->p5->accept(this);
    pd->p6->accept(this);
    return "";

}

QString chequea_tipos_1::visit_pintar_p1(produccion_pintar_p1 *pd)
{
   pd->p1->accept(this);
   pd->p2->accept(this);
   pd->p4->accept(this);
   return "";

}

QString chequea_tipos_1::visit_principal1(produccion_principal1 *pd)
{
    pd->pl->accept(this);
    return"";
}

QString chequea_tipos_1::visit_ordenar1(produccion_ordenar1 *pd)
{
    return "";
}

QString chequea_tipos_1::visit_sumarizar1(produccion_sumarizar1 *pd)
{

    return pd->iden;
}

QString chequea_tipos_1::visit_ini1(produccion_ini1 *pd)
{
    pd->pi->accept(this);
    pd->pl->accept(this);
    return "";
}

QString chequea_tipos_1::visit_ini2(produccion_ini2 *pd)
{
    //produccion lienzo en este nodo empieza la ejecucion
    pd->pl->accept(this);
    return "";
}

QString chequea_tipos_1::visit_lienzo1(produccion_lienzo1 *pd)
{
    // en este nodo se guarda el lienzo
    tabla_simbolos *t = new tabla_simbolos();// tabla de simbolos del lienzo actual
    QString nombre_lienzo=pd->iden; //nombre lienzo
    lienzo * nuevo  = new lienzo("","","publico",NULL,NULL);
    if(ts->contains(nombre_lienzo)==true){
        int a=errores->count();
        token_error *t=new token_error("---",pd->fila,"---","error semanico","error este lienzo ya existe: "+nombre_lienzo);
        errores->append(t);
        qDebug()<<"error esta clase ya existe";
        return "error esta clase ya existe";
    }else{
        lienzo_activo = new lienzo("", nombre_lienzo,"publico",pd,t);
        pd->pl->accept(this);// instrucciones del lienzo
        nuevo->hereda=lienzo_activo->hereda;
        nuevo->id=lienzo_activo->id;
        nuevo->lienz=lienzo_activo->lienz;
        nuevo->ts=lienzo_activo->ts;
        nuevo->visibilidad=lienzo_activo->visibilidad;
        ts->insert(nuevo->id,nuevo);
    }
    lienzo_activo=NULL;
    return "";
}

QString chequea_tipos_1::visit_lienzo2(produccion_lienzo2 *pd)
{

    // en este nodo se guarda el lienzo
    tabla_simbolos *t = new tabla_simbolos();// tabla de simbolos del lienzo actual
    QString visibilidad=pd->pv->accept(this);//visibilidad
    QString nombre_lienzo=pd->iden; //nombre lienzo
    lienzo * nuevo  = new lienzo("","",visibilidad,NULL,NULL);
    if(ts->contains(nombre_lienzo)==true){        
//        token_error*t=new token_error("---------")
        token_error *t=new token_error("---",pd->fila,"---","error semantico","error este lienzo ya existe: "+nombre_lienzo);
        errores->append(t);
        qDebug()<<"error esta clase ya existe";
        return "error esta clase ya existe";
    }else{
        lienzo_activo = new lienzo("", nombre_lienzo,visibilidad,pd,t);
        pd->pl->accept(this);// instrucciones del lienzo
        nuevo->hereda=lienzo_activo->hereda;
        nuevo->id=lienzo_activo->id;
        nuevo->lienz=lienzo_activo->lienz;
        nuevo->ts=lienzo_activo->ts;
        nuevo->visibilidad=lienzo_activo->visibilidad;
        ts->insert(nuevo->id,nuevo);
    }
    lienzo_activo=NULL;
    return "";
}

QString chequea_tipos_1::visit_lienzo3(produccion_lienzo3 *pd)
{
    // en este nodo se guarda el lienzo
    tabla_simbolos *t = new tabla_simbolos();// tabla de simbolos del lienzo actual
    QString nombre_lienzo=pd->iden; //nombre lienzo
    lienzo * nuevo  = new lienzo("","","publico",NULL,NULL);
    if(ts->contains(nombre_lienzo)==true){
        token_error *t=new token_error("---",pd->fila,"---","error semantico","error este lienzo ya existe: "+nombre_lienzo);
        errores->append(t);
        qDebug()<<"error esta clase ya existe";
        return "error esta clase ya existe";
    }else{
        lienzo_activo = new lienzo(pd->pe->accept(this), nombre_lienzo,"publico",pd,t);
        pd->pl->accept(this);// instrucciones del lienzo
        nuevo->hereda=lienzo_activo->hereda;
        nuevo->id=lienzo_activo->id;
        nuevo->lienz=lienzo_activo->lienz;
        nuevo->ts=lienzo_activo->ts;
        nuevo->visibilidad=lienzo_activo->visibilidad;
        ts->insert(nuevo->id,nuevo);
    }
    lienzo_activo=NULL;
    return "";
}

QString chequea_tipos_1::visit_lienzo4(produccion_lienzo4 *pd)
{
    // en este nodo se guarda el lienzo
    tabla_simbolos *t = new tabla_simbolos();// tabla de simbolos del lienzo actual
    QString visibilidad=pd->pv->accept(this);//visibilidad
    QString nombre_lienzo=pd->id; //nombre lienzo
    lienzo * nuevo  = new lienzo("","","publico",NULL,NULL);
    if(ts->contains(nombre_lienzo)==true){
        token_error *t=new token_error("---",pd->fila,"---","error semantico","error este lienzo ya existe: "+nombre_lienzo);
        errores->append(t);
        qDebug()<<"error esta clase ya existe";
        return "error esta clase ya existe";
    }else{
        lienzo_activo = new lienzo(pd->pe->accept(this), nombre_lienzo,visibilidad,pd,t);
        pd->pl->accept(this);// instrucciones del lienzo
        nuevo->hereda=lienzo_activo->hereda;
        nuevo->id=lienzo_activo->id;
        nuevo->lienz=lienzo_activo->lienz;
        nuevo->ts=lienzo_activo->ts;
        nuevo->visibilidad=lienzo_activo->visibilidad;
        ts->insert(nuevo->id,nuevo);
    }
    lienzo_activo=NULL;
    return "";
}

QString chequea_tipos_1::visit_lienzo5(produccion_lienzo5 *pd)
{
    pd->pd->accept(this);//ejecuta la declaracion de variables
    return "";
}

QString chequea_tipos_1::visit_lienzo6(produccion_lienzo6 *pd)
{
    pd->pl->accept(this);//ejecuta asignacion de variables
    return "";
}

QString chequea_tipos_1::visit_visibilidad1(produccion_visibilidad1 *pd)
{
    return pd->tipo;
}

QString chequea_tipos_1::visit_visibilidad2(produccion_visibilidad2 *pd)
{
    return pd->tipo;
}

QString chequea_tipos_1::visit_visibilidad3(produccion_visibilidad3 *pd)
{
    return pd->tipo;
}

QString chequea_tipos_1::visit_extiende1(produccion_extiende1 *pd)
{
    return pd->pl->accept(this);
}

QString chequea_tipos_1::visit_lista_nombre1(produccion_lista_nombre1 *pd)
{
    return pd->pl->accept(this)+","+pd->iden->accept(this);
}

QString chequea_tipos_1::visit_lista_nombre2(produccion_lista_nombre2 *pd)
{
    return pd->iden->accept(this);//retorna un identificador
}

QString chequea_tipos_1::visit_lista_instrucciones1(produccion_lista_instrucciones1 *pd)
{//esta el nodo de la lista de instrucciones del lienzo
    pd->pl->accept(this);//lista de instrucciones
    pd->pi->accept(this);//una instruccion
    return "";
}

QString chequea_tipos_1::visit_lista_instrucciones2(produccion_lista_instrucciones2 *pd)
{
    pd->pi->accept(this); //visita un nodo que visitara una declaracion de metodo o variable
    return "";
}

QString chequea_tipos_1::visit_declaracion_variable1(produccion_declaracion_variable1 *pd)
{
    QString tipo =pd->pt->accept(this); //produccion de declarador aca esta el identificador del metodo
    QString listado =pd->pl->accept(this);//va a traer todo el listado de nombres q se este declarando del mismo tipo
    if(listado.contains(",")){
    QStringList vec=listado.split(",");
    for(int i=0;i<vec.length();i++){
        variable*var= new variable(tipo,vec[i],"nulo","","conservar");
            if(metodo_activo!=NULL){
                if(metodo_activo->ts->contains(vec[i])==true){
                    token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+vec[i]+" ya existe en  el metodo "+metodo_activo->id);
                    errores->append(t);
                    qDebug()<<"error la variable "+vec[i]+" ya existe en  el metodo "+metodo_activo->id;
                    return "error la variable "+vec[i]+" ya existe en  el metodo "+metodo_activo->id;
                }else{
                    metodo_activo->ts->insert(vec[i],var);
                }
            }else{
                if(lienzo_activo->ts->contains(vec[i])==true){
                    token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+vec[i]+" ya existe en  el lienzo "+lienzo_activo->id);
                    errores->append(t);
                    qDebug()<<"error la variable "+vec[i]+" ya existe en  el lienzo "+lienzo_activo->id;
                    return "error la variable "+vec[i]+" ya existe en  el lienzo "+lienzo_activo->id;
                }else{
                    lienzo_activo->ts->insert(vec[i],var);
                }
            }
    }
    }else{
        variable*var= new variable(tipo,listado,"nulo","","conservar");
        if(metodo_activo!=NULL){
            if(metodo_activo->ts->contains(listado)==true){
                token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+listado+" ya existe en  el metodo "+metodo_activo->id);
                errores->append(t);
                qDebug()<<"error la variable "+listado+" ya existe en  el metodo "+metodo_activo->id;
                return "error la variable "+listado+" ya existe en  el metodo "+metodo_activo->id;
            }else{
                metodo_activo->ts->insert(listado,var);
            }
        }else{
            if(lienzo_activo->ts->contains(listado)==true){
                token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+listado+" ya existe en  el lienzo "+lienzo_activo->id);
                errores->append(t);
                qDebug()<<"error la variable "+listado+" ya existe en  el lienzo "+lienzo_activo->id;
                return "error la variable "+listado+" ya existe en  el lienzo "+lienzo_activo->id;
            }else{
                lienzo_activo->ts->insert(listado,var);
            }
        }
    }
    return "";
}


QString chequea_tipos_1::visit_declaracion_variable2(produccion_declaracion_variable2 *pd)
{
    QString tipo =pd->pt->accept(this); //produccion de declarador aca esta el identificador del metodo
    QString listado =pd->pl->accept(this);//va a traer todo el listado de nombres q se este declarando del mismo tipo
    QString valor=pd->pa->accept(this);
    if(listado.contains(",")){
    QStringList vec=listado.split(",");
    for(int i=0;i<vec.length();i++){
        variable*var= new variable(tipo,vec[i],valor,"","conservar");
            if(metodo_activo!=NULL){
                if(metodo_activo->ts->contains(vec[i])==true){
                    token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+vec[i]+" ya existe en  el metodo "+metodo_activo->id);
                    errores->append(t);
                    qDebug()<<"error la variable "+vec[i]+" ya existe en  el metodo "+metodo_activo->id;
                    return "error la variable "+vec[i]+" ya existe en  el metodo "+metodo_activo->id;
                }else{
                    verifica_tipos*v=new verifica_tipos();
                    QString valido=v->asigna_tipo(tipo,valor);
                    if(valido.contains("error")==true){
                        token_error *t=new token_error("---",pd->fila,"---","error semantico","no se pudo asignar el valor a la variable "+vec[i]);
                        errores->append(t);
                        return "error en la asignacion de la variable "+vec[i];
                    }else{
                        metodo_activo->ts->insert(vec[i],var);
                        return "";
                    }
                }
            }else{
                if(lienzo_activo->ts->contains(vec[i])==true){
                    token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+vec[i]+" ya existe en  el lienzo "+lienzo_activo->id);
                    errores->append(t);
                    qDebug()<<"error la variable "+vec[i]+" ya existe en  el lienzo "+lienzo_activo->id;
                    return "error la variable "+vec[i]+" ya existe en  el lienzo "+lienzo_activo->id;
                }else{
                    verifica_tipos*v=new verifica_tipos();
                    QString valido=v->asigna_tipo(tipo,valor);
                    if(valido.contains("error")==true){
                        token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+vec[i]+" no pudo ser asignada");
                        errores->append(t);
                        return "error en la asignacion de la variable "+vec[i];
                    }else{
                        lienzo_activo->ts->insert(vec[i],var);
                        return "";
                    }
                }
            }
    }
    }else{
        variable*var= new variable(tipo,listado,valor,"","conservar");
        if(metodo_activo!=NULL){
            if(metodo_activo->ts->contains(listado)==true){
                token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+listado+" ya existe en  el metodo "+metodo_activo->id);
                errores->append(t);
                qDebug()<<"error la variable "+listado+" ya existe en  el metodo "+metodo_activo->id;
                return "error la variable "+listado+" ya existe en  el metodo "+metodo_activo->id;
            }else{
                verifica_tipos*v=new verifica_tipos();
                QString valido=v->asigna_tipo(tipo,valor);
                if(valido.contains("error")==true){
                    token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+listado+" no pudo ser asignada");
                    errores->append(t);
                    return "error en la asignacion de la variable "+listado;
                }else{
                    metodo_activo->ts->insert(listado,var);
                    return "";
                }
            }
        }else{
            if(lienzo_activo->ts->contains(listado)==true){
                token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+listado+" ya existe en  el lienzo "+lienzo_activo->id);
                errores->append(t);
                qDebug()<<"error la variable "+listado+" ya existe en  el lienzo "+lienzo_activo->id;
                return "error la variable "+listado+" ya existe en  el lienzo "+lienzo_activo->id;
            }else{
                verifica_tipos*v=new verifica_tipos();
                QString valido=v->asigna_tipo(tipo,valor);
                if(valido.contains("error")==true){
                    token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+listado+" no pudo ser asignada");
                    errores->append(t);
                    return "error en la asignacion de la variable "+listado;
                }else{
                    lienzo_activo->ts->insert(listado,var);
                    return "";
                }
            }
        }
    }
    return "";
}

QString chequea_tipos_1::visit_declaracion_variable3(produccion_declaracion_variable3 *pd)
{
    QString tipo =pd->pt->accept(this); //produccion de declarador aca esta el identificador del metodo
    QString listado =pd->pl->accept(this);//va a traer todo el listado de nombres q se este declarando del mismo tipo
    if(listado.contains(",")){
    QStringList vec=listado.split(",");
    for(int i=0;i<vec.length();i++){
        variable*var= new variable(tipo,vec[i],"nulo","","");
            if(metodo_activo!=NULL){
                if(metodo_activo->ts->contains(vec[i])==true){
                    token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+vec[i]+" ya existe en  el metodo "+metodo_activo->id);
                    errores->append(t);
                    qDebug()<<"error la variable "+vec[i]+" ya existe en  el metodo "+metodo_activo->id;
                    return "error la variable "+vec[i]+" ya existe en  el metodo "+metodo_activo->id;
                }else{
                    metodo_activo->ts->insert(vec[i],var);
                }
            }else{
                if(lienzo_activo->ts->contains(vec[i])==true){
                    token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+vec[i]+" ya existe en  el lienzo "+lienzo_activo->id);
                    errores->append(t);
                    qDebug()<<"error la variable "+vec[i]+" ya existe en  el lienzo "+lienzo_activo->id;
                    return "error la variable "+vec[i]+" ya existe en  el lienzo "+lienzo_activo->id;
                }else{
                    lienzo_activo->ts->insert(vec[i],var);
                }
            }
    }
    }else{
        variable*var= new variable(tipo,listado,"nulo","","");
        if(metodo_activo!=NULL){
            if(metodo_activo->ts->contains(listado)==true){
                token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+listado+" ya existe en  el metodo "+metodo_activo->id);
                errores->append(t);
                qDebug()<<"error la variable "+listado+" ya existe en  el metodo "+metodo_activo->id;
                return "error la variable "+listado+" ya existe en  el metodo "+metodo_activo->id;
            }else{
                metodo_activo->ts->insert(listado,var);
            }
        }else{
            if(lienzo_activo->ts->contains(listado)==true){
                token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+listado+" ya existe en  el lienzo "+lienzo_activo->id);
                errores->append(t);
                qDebug()<<"error la variable "+listado+" ya existe en  el lienzo "+lienzo_activo->id;
                return "error la variable "+listado+" ya existe en  el lienzo "+lienzo_activo->id;
            }else{
                lienzo_activo->ts->insert(listado,var);
            }
        }
    }
    return "";
}

QString chequea_tipos_1::visit_declaracion_variable4(produccion_declaracion_variable4 *pd)
{//este es para declarar una variable con asignacion al mismo tiempo es posible guardar esta en la tabla de simbolos del metodo o de la clase activa

    QString tipo =pd->pt->accept(this); //produccion de declarador aca esta el identificador del metodo
    QString listado =pd->pl->accept(this);//va a traer todo el listado de nombres q se este declarando del mismo tipo
    QString valor=pd->pa->accept(this);
    if(listado.contains(",")){
    QStringList vec=listado.split(",");
    for(int i=0;i<vec.length();i++){
        variable*var= new variable(tipo,vec[i],valor,"","");
            if(metodo_activo!=NULL){
                if(metodo_activo->ts->contains(vec[i])==true){
                    token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+vec[i]+" ya existe en  el metodo "+metodo_activo->id);
                    errores->append(t);
                    qDebug()<<"error la variable "+vec[i]+" ya existe en  el metodo "+metodo_activo->id;
                    return "error la variable "+vec[i]+" ya existe en  el metodo "+metodo_activo->id;
                }else{
                    metodo_activo->ts->insert(vec[i],var);
                }
            }else{
                if(lienzo_activo->ts->contains(vec[i])==true){
                    token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+vec[i]+" ya existe en  el lienzo "+lienzo_activo->id);
                    errores->append(t);
                    qDebug()<<"error la variable "+vec[i]+" ya existe en  el lienzo "+lienzo_activo->id;
                    return "error la variable "+vec[i]+" ya existe en  el lienzo "+lienzo_activo->id;
                }else{
                    lienzo_activo->ts->insert(vec[i],var);
                }
            }
    }
    }else{
        variable*var= new variable(tipo,listado,valor,"","");
        if(metodo_activo!=NULL){
            if(metodo_activo->ts->contains(listado)==true){
                token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+listado+" ya existe en  el metodo "+metodo_activo->id);
                errores->append(t);
                qDebug()<<"error la variable "+listado+" ya existe en  el metodo "+metodo_activo->id;
                return "error la variable "+listado+" ya existe en  el metodo "+metodo_activo->id;
            }else{
                metodo_activo->ts->insert(listado,var);
            }
        }else{            
            if(lienzo_activo->ts->contains(listado)==true){
                token_error *t=new token_error("---",pd->fila,"---","error semantico","la variable "+listado+" ya existe en  el lienzo "+lienzo_activo->id);
                errores->append(t);
                qDebug()<<"error la variable "+listado+" ya existe en  el lienzo "+lienzo_activo->id;
                return "error la variable "+listado+" ya existe en  el lienzo "+lienzo_activo->id;
            }else{
                lienzo_activo->ts->insert(listado,var);
            }
        }
    }
    return "";
}

QString chequea_tipos_1::visit_tipo1(produccion_tipo1 *pd)
{
    return pd->tipo;
}

QString chequea_tipos_1::visit_tipo2(produccion_tipo2 *pd)
{
    return pd->tipo;//este retorno un tipo
}

QString chequea_tipos_1::visit_tipo3(produccion_tipo3 *pd)
{
    return pd->tipo;
}

QString chequea_tipos_1::visit_tipo4(produccion_tipo4 *pd)
{
    return pd->tipo;
}

QString chequea_tipos_1::visit_tipo5(produccion_tipo5 *pd)
{
    return pd->tipo;
}

QString chequea_tipos_1::visit_asignacion2(produccion_asignacion2 *pd)
{
    return pd->pe->accept(this);//visita una expresion
    //return "";//m
}

QString chequea_tipos_1::visit_lista_asignacion1(produccion_lista_asignacion1 *pd)
{
  /* pd->pl->accept(this);
   QString id=pd->iden;
   QString valor=pd->pe->accept(this);
       if(lienzo_activo->ts->contains(id)==true){
           if(metodo_activo!=NULL){
               if(metodo_activo->ts->contains(id)==true){
                   variable*v=(variable*)metodo_activo->ts->take(id);
                   v->valor=valor;
                   metodo_activo->ts->insert(id,v);
               }
           }else{
               variable*v=(variable*)lienzo_activo->ts->take(id);
               v->valor=valor;
               lienzo_activo->ts->insert(id,v);
           }
       }else{
           qDebug()<<"error la variable no existe en este lienzo: "+id;
           return "error la variable "+id+" no existe en  lienzo "+"   "+lienzo_activo->id;
       }*/
    //m
   return "";
}

QString chequea_tipos_1::visit_lista_asignacion2(produccion_lista_asignacion2 *pd)
{
   /* QString id=pd->iden;
    QString valor=pd->pe->accept(this);
        if(lienzo_activo->ts->contains(id)==true){
            if(metodo_activo!=NULL){
                if(metodo_activo->ts->contains(id)==true){
                    variable*v=(variable*)metodo_activo->ts->take(id);
                    v->valor=valor;
                    metodo_activo->ts->insert(id,v);
                }
            }else{
                variable*v=(variable*)lienzo_activo->ts->take(id);
                v->valor=valor;
                lienzo_activo->ts->insert(id,v);
            }
        }else{
            qDebug()<<"error la variable no existe en este lienzo: "+id;
            return "error la variable "+id+" no existe en  lienzo "+"   "+lienzo_activo->id;
        }
*///m
    return "";
}

QString chequea_tipos_1::visit_lista_asignacion3(produccion_lista_asignacion3 *pd)
{
    /*QString id=pd->iden;
    QString valor=pd->pe->accept(this);
        if(lienzo_activo->ts->contains(id)==true){
            if(metodo_activo!=NULL){
                if(metodo_activo->ts->contains(id)==true){
                    variable*v=(variable*)metodo_activo->ts->take(id);
                    double var=v->valor.toDouble()+valor.toDouble();
                    v->valor=QString::number(var);
                    metodo_activo->ts->insert(id,v);
                }
            }else{
                variable*v=(variable*)lienzo_activo->ts->take(id);
                double var=v->valor.toDouble()+valor.toDouble();
                v->valor=QString::number(var);
                lienzo_activo->ts->insert(id,v);
            }
        }else{
            qDebug()<<"error la variable no existe en este lienzo: "+id;
            return "error la variable "+id+" no existe en  lienzo "+"   "+lienzo_activo->id;
        }
*///m
    return "";

}

QString chequea_tipos_1::visit_lista_asignacion4(produccion_lista_asignacion4 *pd)
{
    /*QString id=pd->iden;
    QString valor=pd->pe->accept(this);
        if(lienzo_activo->ts->contains(id)==true){
            if(metodo_activo!=NULL){
                if(metodo_activo->ts->contains(id)==true){
                    variable*v=(variable*)metodo_activo->ts->take(id);
                    double var=v->valor.toDouble()-valor.toDouble();
                    v->valor=QString::number(var);
                    metodo_activo->ts->insert(id,v);
                }
            }else{
                variable*v=(variable*)lienzo_activo->ts->take(id);
                double var=v->valor.toDouble()-valor.toDouble();
                v->valor=QString::number(var);
                lienzo_activo->ts->insert(id,v);
            }
        }else{
            qDebug()<<"error la variable no existe en este lienzo: "+id;
            return "error la variable "+id+" no existe en  lienzo "+"   "+lienzo_activo->id;
        }
*///m
    return "";

}

QString chequea_tipos_1::visit_asignacion1(produccion_asignacion1 *pd)
{
    //pd->pe->accept(this);
    //pd->pl->accept(this);
    return "";//m

}

QString chequea_tipos_1::visit_instruccion1(produccion_instruccion1*pd)
{
    pd->pd->accept(this);//esto lleva a la declaracion de una variable con valor de asignacion
    return "";

}

QString chequea_tipos_1::visit_instruccion2(produccion_instruccion2*pd)
{
    pd->pd->accept(this); //visita la declaracion de un metodo
    return "";

}

QString chequea_tipos_1::visit_instruccion3(produccion_instruccion3*pd)
{
    pd->pl->accept(this);//entra aki cuando se hace una asignacion o una listado de asignaciones
    return "";
}

QString chequea_tipos_1::visit_instruccion4(produccion_instruccion4*pd)
{
    pd->pc->accept(this);//visita la produccion de ciclos
    return"";
}

QString chequea_tipos_1::visit_instruccion5(produccion_instruccion5*pd)
{
    pd->pp->accept(this);//visita la produccion de pintar_or
    return"";
}

QString chequea_tipos_1::visit_instruccion6(produccion_instruccion6*pd)
{
    pd->pp->accept(this);//visita la produccion de pintar_p
    return "";

}

QString chequea_tipos_1::visit_instruccion7(produccion_instruccion7*pd)
{
    pd->pp->accept(this);//no funciona aun
    return "";

}

QString chequea_tipos_1::visit_instruccion8(produccion_instruccion8*pd)
{
    pd->ps->accept(this);//visita cuando viene el metodo de sumarizar
    return "";

}

QString chequea_tipos_1::visit_instruccion9(produccion_instruccion9*pd)
{
    pd->po->accept(this);//visita cuando viene el metodo de ordenar
    return "";

}

QString chequea_tipos_1::visit_instruccion10(produccion_instruccion10*pd)
{
    return pd->cont;//retorna la palabra continuar

}

QString chequea_tipos_1::visit_instruccion11(produccion_instruccion11*pd)
{
    return pd->sal;//retorna la palabra salir

}

QString chequea_tipos_1::visit_instruccion12(produccion_instruccion12*pd)
{
    pd->pe->accept(this);//ejecuta la expresion de retornar en un metodo
    return "";
}

QString chequea_tipos_1::visit_instruccion13(produccion_instruccion13*pd)
{
    pd->pp->accept(this);//visita la produccion PRINCIPAL del lienzo
    return "";
}

QString chequea_tipos_1::visit_instruccion14(produccion_instruccion14 *pd)
{
    return"";
}

QString chequea_tipos_1::visit_expresion_igual(Expresion_igual *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1==exp2){
        return "true";
    }else{
        return "false";
    }
}

QString chequea_tipos_1::visit_expresion_diferente(expresion_diferente *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1!=exp2){
        return "true";
    }else{
        return "false";
    }
}

QString chequea_tipos_1::visit_expresion_y(Expresion_y *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare("true")==0 && e2.compare("true")==0){
        return "true";
    }else{
        return "false";
    }
}

QString chequea_tipos_1::visit_expresion_nand(expresion_nand *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare("true")==0 && e2.compare("true")==0){
        return "false";
    }else{
        return "true";
    }
}

QString chequea_tipos_1::visit_expresion_or(expresion_or *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare("true")==0 || e2.compare("true")==0){
        return "true";
    }else{
        return "false";
    }
}

QString chequea_tipos_1::visit_expresion_xor(expresion_xor *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare(e2)==0){
        return "false";
    }else{
        return "true";
    }
}

QString chequea_tipos_1::visit_expresion_nor(expresion_nor *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare("false")==0 && e2.compare("false")==0){
        return "true";
    }else{
        return "false";
    }
}

QString chequea_tipos_1::visit_expresion_mayor(expresion_mayor *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1>exp2){
        return "true";
    }else{
        return "false";
    }
}

QString chequea_tipos_1::visit_expresion_mayorq(expresion_mayorq *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1>=exp2){
        return "true";
    }else{
        return "false";
    }
}

QString chequea_tipos_1::visit_expresion_menor(expresion_menor *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1<exp2){
        return "true";
    }else{
        return "false";
    }
}

QString chequea_tipos_1::visit_expresion_menorq(expresion_menoq *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1<=exp2){
        return "true";
    }else{
        return "false";
    }
}

QString chequea_tipos_1::visit_expresion_not(expresion_not *e)
{
    QString e1=e->exp1->accept(this);
    if(e1.compare("true")==0){
        return "false";
    }else{
        return "true";
    }
}

QString chequea_tipos_1::visit_expresion_nulo(expresion_nulo *e)
{

}

QString chequea_tipos_1::visit_expresion_parentesis(expresion_parentesis *e)
{
    return e->exp1->accept(this);//ejecuta el expresion q esta dentro de parentesis
}

QString chequea_tipos_1::visit_expresion_potencia(expresion_potencia *e)
{
    QString a=e->exp1->accept(this);//base
    QString b=e->exp2->accept(this);//potencia
    verifica_tipos*v=new verifica_tipos();
    QString res=v->verifica_tipo(a,b);
   /* double val;
    if(!res.contains("cadena") && !res.contains("error")){
        if(res.contains("bool-bool")){
            return "error";
        }if(a=="true"){
            val=pow(1,b.toDouble());
            return QString::number(val);
        }if(b=="true"){
            val=pow(a.toDouble(),1);
            return QString::number(val);
        }if(a=="false"){
            return "0";
        }if(b=="false"){
            return "1";
        }else{
            val=pow(a.toDouble(),b.toDouble());
            return QString::number(val);
        }
    }else{
      qDebug()<<"error al intentar elevar "+a+" a "+b;
      return "error";
    }*/
    return res;
}

QString chequea_tipos_1::visit_expresion_mas(expresion_mas *e)
{
QString a=e->exp1->accept(this);
QString b=e->exp2->accept(this);
verifica_tipos*v=new verifica_tipos();
QString res=v->verifica_tipo(a,b);
/*if(res.contains("cadena") && !res.contains("error") || res=="bool-bool"){
    if(res.contains("cadena-bool")){
        if(b=="true"){
            return a+" "+"1";
        }else{
            return a+" "+"0";
        }
        }else{
            QString temp=v->obtener_valor_booleano(a)+v->obtener_valor_booleano(b);
            return temp;
        }
    }else if(!res.contains("cadena") && !res.contains("error")){
    if(a.contains("'")){
        QChar as;
        //obtener el char y devolver el numero del ascci
        as=a.at(1);
        int v=as.toLatin1();
        a=QString::number(v);
    }if(b.contains("'")){
        QChar as;
        //obtener el char y devolver el numero del ascci
        as=b.at(1);
        int v=as.toLatin1();
        b=QString::number(v);
    }
        double val=v->obtener_valor_booleano(a).toDouble()+v->obtener_valor_booleano(b).toDouble();
        return QString::number(val);
    }else{
    qDebug()<<"error al intentar sumar "+a+" con "+b;
    }*/
    return res;
}

QString chequea_tipos_1::visit_expresion_menos(expresion_menos *e)
{
    QString a=e->exp1->accept(this);
    QString b=e->exp2->accept(this);
    verifica_tipos*v=new verifica_tipos();
    QString res=v->verifica_tipo(a,b);
  /*  double val=0;
    if(!res.contains("cadena") && !res.contains("error")){
        if(res.contains("bool-bool")){
            return v->resta_bool(a,b);
        }else{
            val=v->obtener_valor_booleano(a).toDouble()-v->obtener_valor_booleano(b).toDouble();
            return QString::number(val);
        }
    }else{
      qDebug()<<"error al intentar restar "+a+" con "+b;
    }*/
    return res;
}

QString chequea_tipos_1::visit_expresion_divi(expresion_divi *e)
{
    QString a=e->exp1->accept(this);
    QString b=e->exp2->accept(this);
    verifica_tipos*v=new verifica_tipos();
    QString res=v->verifica_tipo(a,b);
    /*double val;
    if(!res.contains("cadena") && !res.contains("error")){
        if(res.contains("bool-bool")){
            return "error";
        }if(a=="true"){
            val=1/b.toDouble();
            return QString::number(val);
        }if(b=="true"){
            val=a.toDouble()/1;
            return QString::number(val);
        }if(a=="false"){
            return "0";
        }if(b=="false"){
            return "error";
        }else{
            val=a.toDouble()/b.toDouble();
            return QString::number(val);
        }
    }else{
      qDebug()<<"error al intentar divividr "+a+" con "+b;
      return "error";
    }*/
    return res;
}

QString chequea_tipos_1::visit_expresion_por(expresion_por*e)
{
    QString a=e->exp1->accept(this);
    QString b=e->exp2->accept(this);
    verifica_tipos*v=new verifica_tipos();
    QString res=v->verifica_tipo(a,b);
    /*if(!res.contains("cadena") && !res.contains("error")){
        if(res.contains("bool-bool")){
            return v->mul_bool(a,b);
        }else{
            val=v->obtener_valor_booleano(a).toDouble()*v->obtener_valor_booleano(b).toDouble();
            return QString::number(val);
        }
    }else{
      qDebug()<<"error al intentar multiplicar "+a+" con "+b;
    }*/
    return res;
}

QString chequea_tipos_1::visit_expresion_masmas(expresion_masmas *e)
{
    QString a=e->pe->accept(this);//obtengo el id y lo busco en una tabla de simbolos y le sumo uno
    return "";
}

QString chequea_tipos_1::visit_expresion_menosmenos(expresion_menosmenos *e)
{
    QString a=e->pe->accept(this);//obtengo el id y lo busco en una tabla de simbolos y le resto uno
    return "";
}

QString chequea_tipos_1::visit_expresion_masigual(expresion_masigual *e)
{
    QString id=e->pe1->accept(this);//obtengo el valor a sumarle al valor actual
    QString a=e->pe->accept(this);//obtengo el id y lo busco en una tabla de simbolos
    return "";
}

QString chequea_tipos_1::visit_expresion_menosigual(expresion_menosigual *e)
{
    QString id=e->pe1->accept(this);//obtengo el valor a sumarle al valor actual
    QString a=e->pe->accept(this);//obtengo el id y lo busco en una tabla de simbolos
    return "";
}

QString chequea_tipos_1::visit_expresion_numero(expresion_numero *e)
{
    return e->num;//retorna el valor del numero
}

QString chequea_tipos_1::visit_expresion_iden(expresion_iden *e)
{
    QString id=e->iden->accept(this);
        //if(lienzo_activo->ts->contains(id)==true){
            if(metodo_activo!=NULL){
                if(metodo_activo->ts->contains(id)==true){
                    variable*v=(variable*)metodo_activo->ts->take(id);
                    metodo_activo->ts->insert(id,v);
                    return v->valor;
                }else if(lienzo_activo->ts->contains(id)==true){
                    variable*v=(variable*)lienzo_activo->ts->take(id);
                    lienzo_activo->ts->insert(id,v);
                    return v->valor;
                }else{
                    return "error "+id+" no fue encontrado en el metodo ni en el lienzo";
                }
            }else if(lienzo_activo!=NULL){
                if(lienzo_activo->ts->contains(id)==true){
                variable*v=(variable*)lienzo_activo->ts->take(id);
                lienzo_activo->ts->insert(id,v);
                return v->valor;
                }else{
                    return "error "+id+" no fue encontrado en el lienzo";
                }
            }
}

QString chequea_tipos_1::visit_expresion_caracter(expresion_caracter *e)
{
    return e->car;//retorna el valor del caracter
}

QString chequea_tipos_1::visit_expresion_decimal(expresion_decimal *e)
{
    return e->dec;//retorna el valor del decimal
}

QString chequea_tipos_1::visit_expresion_true(expresion_true *e)
{
    return e->tr;//retorna el valor de true
}

QString chequea_tipos_1::visit_expresion_false(expresion_false *e)
{
    return e->fa;//retorna el valor de false
}

QString chequea_tipos_1::visit_expresion_cadenacomillas(expresion_cadenacomillas *e)
{
    return e->cad;//retorna el valor de cadena con comillas
}

QString chequea_tipos_1::visit_ciclos1(produccion_ciclos1 *pd)//aki se ejecuta un if_else
{
    return pd->pe->accept(this)+pd->l1->accept(this)+pd->l2->accept(this);
}

QString chequea_tipos_1::visit_ciclos2(produccion_ciclos2 *pd)//aki se ejecuta un if
{

    return pd->pe->accept(this)+pd->l1->accept(this);

}

QString chequea_tipos_1::visit_ciclos3(produccion_ciclos3 *pd)//aki se ejecuta un while
{    
    return pd->pe->accept(this)+pd->l1->accept(this);

}

QString chequea_tipos_1::visit_ciclos4(produccion_ciclos4 *pd)//aki se ejecuta un for
{
    return pd->pi->accept(this)+pd->pe->accept(this)+pd->pl->accept(this)+pd->pf->accept(this);
}

QString chequea_tipos_1::visit_ciclos5(produccion_ciclos5 *pd)//aki se ejecuta un do while
{
    return pd->pl->accept(this)+pd->pe->accept(this)+pd->pl->accept(this);
}

QString chequea_tipos_1::visit_ciclos6(produccion_ciclos6 *pd)//aki se ejecuta un switch
{    
    return pd->pe->accept(this)+pd->pl->accept(this);
}

QString chequea_tipos_1::visit_lista_case1(produccion_lista_case1 *pd)
{
    pd->pc->accept(this);//ejecuta los siguientes casos
    pd->pe->accept(this);//se ejecuta la expresion para verificar si cumple
    pd->pi->accept(this);//si cumple se ejecutan esas instrucciones
    return "";

}
QString chequea_tipos_1::visit_lista_case2(produccion_lista_case2 *pd)
{
    pd->pe->accept(this);//se ejecuta la expresion para verificar si cumple
    pd->pi->accept(this);//si cumple se ejecuta las instrucciones
    return "";

}
QString chequea_tipos_1::visit_lista_case3(produccion_lista_case3 *pd)
{
    pd->pi->accept(this);//entra aki en un "defecto" de algun switch
    return "";

}

QString chequea_tipos_1::visit_lista_parametros1(produccion_lista_parametros1 *pd)
{//esta es una lista de parametros
    pd->pl->accept(this); //este visita una l->l s
    pd->pp->accept(this);// este visita un parametro
    return "";

}

QString chequea_tipos_1::visit_lista_parametros2(produccion_lista_parametros2 *pd)
{//este es el nodo de un solo parametro
    pd->pp->accept(this); //devolver un string
    return "";

}

QString chequea_tipos_1::visit_lista_parametros3(produccion_lista_parametros3 *pd)
{
    return "";
}

QString chequea_tipos_1::visit_parametro1(produccion_parametro1 *pd)
{//en este nodo se puede guardar el parametro en la tabla de simbolos del metodo
    QString iden =pd->id->accept(this); // este el nombre del parametro
    QString tipo =pd->pt->accept(this);//este debe ser el tipo del parametro
    variable * v = new variable(tipo,iden,"","privado","");
    if(metodo_activo==NULL){
        token_error *t=new token_error("---",pd->fila,"---","error semantico","no existe metodo activo");
        errores->append(t);
        qDebug()<<"error faltal";
        return "error faltal";
    }else{
        metodo_activo->parametros->append(v);
    }
    return "";

}

QString chequea_tipos_1::visit_declaracion_metodo1(produccion_declaracion_metodo1 *pd)
{//en esta parte se declara un metodo sin la palabra conservar falta agregar ese atributo a la
    //clase declaracion_metodo
    tabla_simbolos *t = new tabla_simbolos();
    declaracion_metodo * metodo = new declaracion_metodo(NULL,"","","","",NULL,NULL,"");
    QString identificador1 =pd->iden->accept(this); //produccion de declarador aca esta el identificador del metodo
    QString tipo =pd->pt->accept(this);//este es el tipo del metodo

    if(lienzo_activo->ts->contains(identificador1)==true){        
        qDebug()<<"error el metodo ya existe en este lienzo";
        return "error el metodo ya existe en este lienzo";
    }else{
        metodo_activo = new declaracion_metodo(pd,"publico","",tipo,identificador1,pd->pp,t,"conservar");
        QString identificador =pd->iden->accept(this); //produccion de declarador aca esta el identificador del metodo
        pd->pl->accept(this); //instrucciones
        pd->pp->accept(this);//este visita la lista de parametros
        metodo->id=metodo_activo->id;
        metodo->lista_parametros=metodo_activo->lista_parametros;
        metodo->metodo=metodo_activo->metodo;
        metodo->tipo=metodo_activo->tipo;
        metodo->ts=metodo_activo->ts;
        metodo->valor=metodo_activo->valor;
        metodo->visibilidad=metodo_activo->visibilidad;
        metodo->conservar=metodo_activo->conservar;
        metodo->parametros = metodo_activo->parametros;
        metodo->vector=metodo_activo->vector;
        metodo_activo->vector="";
        lienzo_activo->ts->insert(identificador,metodo);        

    }
    metodo_activo=NULL;

    return "";
}

QString chequea_tipos_1::visit_declaracion_metodo2(produccion_declaracion_metodo2 *pd)
{
    tabla_simbolos *t = new tabla_simbolos();
    declaracion_metodo * metodo = new declaracion_metodo(NULL,"","","","",NULL,NULL,"");    
    QString identificador1 =pd->iden->accept(this); //produccion de declarador aca esta el identificador del metodo
    QString tipo =pd->pt->accept(this);//este es el tipo del metodo

    if(lienzo_activo->ts->contains(identificador1)==true){
        qDebug()<<"error el metodo ya existe en este lienzo";
        return "error el metodo ya existe en este lienzo";
    }else{
        metodo_activo = new declaracion_metodo(pd,"publico","",tipo,identificador1,pd->pp,t,"");
        QString identificador =pd->iden->accept(this); //produccion de declarador aca esta el identificador del metodo
        pd->pl->accept(this); //instrucciones
        pd->pp->accept(this);//este visita la lista de parametros
        metodo->id=metodo_activo->id;
        metodo->lista_parametros=metodo_activo->lista_parametros;
        metodo->metodo=metodo_activo->metodo;
        metodo->tipo=metodo_activo->tipo;
        metodo->ts=metodo_activo->ts;
        metodo->valor=metodo_activo->valor;
        metodo->visibilidad=metodo_activo->visibilidad;
        metodo->conservar=metodo_activo->conservar;
        metodo->parametros = metodo_activo->parametros;
        metodo->vector=metodo_activo->vector;
        metodo_activo->vector="";
        lienzo_activo->ts->insert(identificador,metodo);

    }
    metodo_activo=NULL;

    return "";

}

QString chequea_tipos_1::visit_declaracion_metodo3(produccion_declaracion_metodo3 *pd)
{
    tabla_simbolos *t = new tabla_simbolos();
    declaracion_metodo * metodo = new declaracion_metodo(NULL,"","","","",NULL,NULL,"");    
    QString identificador1 =pd->iden->accept(this); //produccion de declarador aca esta el identificador del metodo
    if(lienzo_activo->ts->contains(identificador1)==true){
        qDebug()<<"error el metodo ya existe en este lienzo";
        return "error el metodo ya existe en este lienzo";
    }else{
        metodo_activo = new declaracion_metodo(pd,"publico","","void",identificador1,pd->pp,t,"conservar");
        QString identificador =pd->iden->accept(this); //produccion de declarador aca esta el identificador del metodo
        pd->pl->accept(this); //instrucciones
        pd->pp->accept(this);//este visita la lista de parametros
        metodo->id=metodo_activo->id;
        metodo->lista_parametros=metodo_activo->lista_parametros;
        metodo->metodo=metodo_activo->metodo;
        metodo->tipo=metodo_activo->tipo;
        metodo->ts=metodo_activo->ts;
        metodo->valor=metodo_activo->valor;
        metodo->visibilidad=metodo_activo->visibilidad;
        metodo->conservar=metodo_activo->conservar;
        metodo->parametros = metodo_activo->parametros;
        metodo->vector=metodo_activo->vector;
        metodo_activo->vector="";
        lienzo_activo->ts->insert(identificador,metodo);

    }
    metodo_activo=NULL;

    return "";

}

QString chequea_tipos_1::visit_declaracion_metodo4(produccion_declaracion_metodo4 *pd)
{
    tabla_simbolos *t = new tabla_simbolos();
    declaracion_metodo * metodo = new declaracion_metodo(NULL,"","","","",NULL,NULL,"");    
    QString identificador1 =pd->iden->accept(this); //produccion de declarador aca esta el identificador del metodo

    if(lienzo_activo->ts->contains(identificador1)==true){
        qDebug()<<"error el metodo ya existe en este lienzo";
        return "error el metodo ya existe en este lienzo";
    }else{
        metodo_activo = new declaracion_metodo(pd,"publico","","void",identificador1,pd->pp,t,"");
        QString identificador =pd->iden->accept(this); //produccion de declarador aca esta el identificador del metodo
        pd->pl->accept(this); //instrucciones
        pd->pp->accept(this);//este visita la lista de parametros
        metodo->id=metodo_activo->id;
        metodo->lista_parametros=metodo_activo->lista_parametros;
        metodo->metodo=metodo_activo->metodo;
        metodo->tipo=metodo_activo->tipo;
        metodo->ts=metodo_activo->ts;
        metodo->valor=metodo_activo->valor;
        metodo->visibilidad=metodo_activo->visibilidad;
        metodo->conservar=metodo_activo->conservar;
        metodo->parametros = metodo_activo->parametros;
        metodo->vector=metodo_activo->vector;
        metodo_activo->vector="";
        lienzo_activo->ts->insert(identificador,metodo);

    }
    metodo_activo=NULL;

    return "";

}


int contador_dimensiones=0;
//nuevo
 QString chequea_tipos_1::visit_lista_c1(produccion_lista_corchetes_1*pd){
     contador_dimensiones++;
     pd->lc->accept(this);
     int valor_dim=pd->exp->accept(this).toInt();//hay q validar q el resultado sea int, sino error
     dim->append(valor_dim);
     return "";

}

 QString  chequea_tipos_1::visit_lista_c2(produccion_lista_corchete_2*pd){
     contador_dimensiones++;
     int valor_dim=pd->exp->accept(this).toInt();//hay q validar q el resultado sea int, sino error
     dim->append(valor_dim);
     return "";

}

 QString chequea_tipos_1::visit_declarador_1(produccion_declarador_1*pd){
     pd->iden;
     return pd->iden;//retorna el identificador para esta produccion

}

 QString chequea_tipos_1::visit_declarador_2(produccion_declarador_2*pd){
     pd->iden;
     if(metodo_activo!=NULL){
         metodo_activo->vector="si";
     }
     pd->lc->accept(this);
     return pd->iden;
}
QString chequea_tipos_1::visit_declaracion_variable5(produccion_declaracion_variable5*pd) {    
    QStringList*valores=new QStringList();
    QString nombre=pd->nombre->accept(this);
    QString tipo=pd->tipo->accept(this);
    QString asignar=pd->asignacion->accept(this);
    QLinkedList<int>*lista=new QLinkedList<int>();
    QLinkedList<int> aux=*(dim);
    QStringList lis=asignar.split(",");//OBTENEMOS LOS VALORES DEL VECTOR
    aux.takeFirst();//NO BORRAR, SIRVE PARA Q CUANDO KIERA OBTENER LA DIMENSION ACTUAL EN LA PRIMERA ITERACION
//    lista->append(1);
  //  lista->append(1);
//    lista->append(1);
//    lista->append(1);
//    lista->append(2);
    //if(dim->count()<=fila_vector){
    for(int i=0;i<lis.count();i++){
        valores->append(lis.at(i));
    }
    Vector*vec=new Vector("",tipo,nombre,valores,dim);

    //lista=listado de coordenadas a buscar, aux tiene q ser la QLinkedlist de dimensiones del array a buscar
    //esto sirve para ir a buscar
        int pos=asignar_valor_vector(lista,tamano_dimension_anterior(&aux,2),2,2);
/*    }else{
        qDebug()<<"error en la asignacion de vector";
    }*/

     return "";
}



QString chequea_tipos_1::visit_declaracion_variable6(produccion_declaracion_variable6*pd) {    
    QStringList*valores=new QStringList();
    QString nombre=pd->nombre->accept(this);
    QString tipo=pd->tipo->accept(this);
    Vector*vec=new Vector("",tipo,nombre,valores,dim);
    return "";
}



QString chequea_tipos_1::visit_expresion_epsilon(expresion_epsilon*pd){
    return "";
}

QString chequea_tipos_1::visit_declaracion_variable_7(produccion_declaracion_variable7*pd) {
    //declaracion de vectores 7
    QStringList*valores=new QStringList();
    QString nombre=pd->lnombre->accept(this);
    QString tipo=pd->tipo->accept(this);
    QString asignar=pd->asignacion->accept(this);
    QStringList lis=asignar.split(",");//OBTENEMOS LOS VALORES DEL VECTOR
    for(int i=0;i<lis.count();i++){
        valores->append(lis.at(i));
    }
    Vector*vec=new Vector("",tipo,nombre,valores,dim);
    return "";
}

QString chequea_tipos_1::visit_declaracion_variable_8(produccion_declaracion_variable_8*pd){
    //declaracion de vectores 8
    QStringList*valores=new QStringList();
    QString nombre=pd->lnombre->accept(this);
    QString tipo=pd->tipo->accept(this);
    Vector*vec=new Vector("consevar",tipo,nombre,valores,dim);
    return "";

}

 QString chequea_tipos_1::visit_expresion_vector(expresion_vector*pd) {
     //aki entra por cada fila existente en la asignacion
     QString exp1=pd->exp1->accept(this);//se ejecuta los valores q pertenecen a cada columna
     fila_vector++;
     return exp1;
 }

 QString chequea_tipos_1::visit_lista_expresion1(produccion_lista_expresion1 *pd)
 {
   // pd->pl->accept(this);
    //pd->pe->accept(this);
    return pd->pl->accept(this)+","+pd->pe->accept(this);
 }

 QString chequea_tipos_1::visit_lista_expresion2(produccion_lista_expresion2 *pd)
 {
     //QString valor=pd->pe->accept(this);
     //asignar_valor_vector(fila_vector,col_vector,valor);
     //col_vector++;
    return pd->pe->accept(this);
 }

 int chequea_tipos_1::asignar_valor_vector(QLinkedList<int>*lista,int tam_dimension,int aux,int aux_bandera){
    int t1=lista->takeFirst()-1;
    int t2=t1*tam_dimension;
    int t3=t2+lista->takeFirst();
    QLinkedList<int>::iterator j;
    j=lista->begin();
    ++j;
    lista->insert(j,t3);
    if(aux==dim->count()){
        return t3;
    }else{
       return asignar_valor_vector(lista,tamano_dimension_anterior(dim,++aux),aux,aux_bandera);
    }

}
int chequea_tipos_1::tamano_dimension_anterior(QLinkedList<int>*lista,int dim_actual){
    int valor=1;
    int cont=1;
    QLinkedList<int>::iterator j;
        for(j=lista->begin();j!=lista->end();++j){
            if(cont==dim_actual){
                return valor;
            }
            cont++;
            valor=valor*(*j);
        }
        return valor;
}

int chequea_tipos_1::obtener_valor_columna(QLinkedList<int>*lista){
    QLinkedList<int>::iterator j;
    int cont=0;
        for(j=lista->begin();j!=lista->end();++j){
            if(cont==1){
                return(*j);
            }
        }
}
