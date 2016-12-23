#include "ejecuta_visitor.h"
#include "QString"
#include "math.h"
#include"QDebug"
#include"verifica_tipos.h"
#include"mainwindow.h"
#include<QGraphicsItem>
ejecuta_visitor::ejecuta_visitor(tabla_simbolos *ts, QLinkedList<simbolo *> *ambitos)
{
    this->ts=ts;
    this->ambitos=ambitos;
}

QString ejecuta_visitor::visit_pintar_s11(produccion_pintar_s11 *pd)
{
    QGraphicsTextItem *text=new QGraphicsTextItem(pd->p4->accept(this));
    return "";
}

QString ejecuta_visitor::visit_pintar_or1(produccion_pintar_or1 *pd)
{
    QString tipo=pd->p6->accept(this);
    QString color=pd->cadena;
    if(tipo=="r"){

        QGraphicsRectItem *rectangulo=new QGraphicsRectItem(pd->p1->accept(this).toInt(),pd->p1->accept(this).toInt(),pd->p4->accept(this).toInt(),pd->p5->accept(this).toInt());

        return"";
    }else if(tipo=="o"){
        QGraphicsEllipseItem *elip=new QGraphicsEllipseItem(pd->p1->accept(this).toInt(),pd->p1->accept(this).toInt(),pd->p4->accept(this).toInt(),pd->p5->accept(this).toInt());
        return "";
    }else{
        return "error de parametro, solo permite o u r";
    }

}

QString ejecuta_visitor::visit_pintar_p1(produccion_pintar_p1 *pd)
{
            //QGraphicsEllipseItem *elip=new QGraphicsEllipseItem(pd->p1->accept(this).toInt(),pd->p1->accept(this).toInt(),pd->p4->accept(this).toInt(),pd->p5->accept(this).toInt());
}

QString ejecuta_visitor::visit_principal1(produccion_principal1 *pd)
{
    pd->pl->accept(this);
    return"";
}

QString ejecuta_visitor::visit_ordenar1(produccion_ordenar1 *pd)
{

}

QString ejecuta_visitor::visit_sumarizar1(produccion_sumarizar1 *pd)
{

}

QString ejecuta_visitor::visit_ini1(produccion_ini1 *pd)
{
    pd->pi->accept(this);
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_ini2(produccion_ini2 *pd)
{
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_lienzo1(produccion_lienzo1 *pd)
{
    QString nombre_lienzo=pd->iden;
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_lienzo2(produccion_lienzo2 *pd)
{

    //QString visibilidad=pd->pv->accept(this);    
   /* tabla_simbolos *no=ambitos->takeFirst();
    lienzo*l=(lienzo*)no->value(nombre_lienzo);
    if(ambitos->takeFirst()->contains(nombre_lienzo)==true){
        lienzo*l=(lienzo*)ambitos;
       l->lienz->accept(this);
   }else if(ambitos->takeLast()->contains(nombre_lienzo)==true){
     lienzo*l=(lienzo*)ambitos;
        l->lienz->accept(this);
   }*/
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_lienzo3(produccion_lienzo3 *pd)
{
    //QString extiende=pd->pe->accept(this);
    //QString nombre_lienzo=pd->iden;
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_lienzo4(produccion_lienzo4 *pd)
{
    //QString visibilidad=pd->pv->accept(this);
    //QString nombre_lienzo=pd->id;
    QString extiende = pd->pe->accept(this);
    pd->pl->accept(this);//instrucciones
    return "";
}

QString ejecuta_visitor::visit_lienzo5(produccion_lienzo5 *pd)
{
    pd->pd->accept(this);
    return "";
}

QString ejecuta_visitor::visit_lienzo6(produccion_lienzo6 *pd)
{
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_visibilidad1(produccion_visibilidad1 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_visibilidad2(produccion_visibilidad2 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_visibilidad3(produccion_visibilidad3 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_extiende1(produccion_extiende1 *pd)
{
    return pd->pl->accept(this);
}

QString ejecuta_visitor::visit_lista_nombre1(produccion_lista_nombre1 *pd)
{
    return pd->pl->accept(this)+","+pd->iden->accept(this);
}

QString ejecuta_visitor::visit_lista_nombre2(produccion_lista_nombre2 *pd)
{
    return pd->iden->accept(this);
}

QString ejecuta_visitor::visit_lista_instrucciones1(produccion_lista_instrucciones1 *pd)
{
    pd->pl->accept(this);//lista de instrucciones
    pd->pi->accept(this);//una instruccion
    return "";
}

QString ejecuta_visitor::visit_lista_instrucciones2(produccion_lista_instrucciones2 *pd)
{    
    pd->pi->accept(this); //visita una instruccion
    return "";
}

QString ejecuta_visitor::visit_declaracion_variable1(produccion_declaracion_variable1 *pd)
{
//    QString tipo=pd->pt->accept(this);

    return"";
}

QString ejecuta_visitor::visit_declaracion_variable2(produccion_declaracion_variable2 *pd)
{
    return"";
}

QString ejecuta_visitor::visit_declaracion_variable3(produccion_declaracion_variable3 *pd)
{
    return"";
}

QString ejecuta_visitor::visit_declaracion_variable4(produccion_declaracion_variable4 *pd)
{
    //declaracion de variable ojo con esto ???!!!
  /*  /*else if buscar en clases de las que hereda*/
    pd->pa->accept(this);
    if(es_llamada=="si"){
        I_need_identifer="si";
            QString nombre = pd->pl->accept(this);
            I_need_identifer="no";
            //obtener la variable con ese nombre si no existe que mierda; jajajaj
            declaracion_metodo *m = (declaracion_metodo*)ambitos->first();
            variable *v ;
            if(m->ts->contains(nombre)==true){
                v = (variable*)m->ts->value(nombre);
                QString valor =pd->pa->accept(this);
                v->valor=valor;
            }
    }
    es_llamada="no";
    return"";
}

QString ejecuta_visitor::visit_tipo1(produccion_tipo1 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_tipo2(produccion_tipo2 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_tipo3(produccion_tipo3 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_tipo4(produccion_tipo4 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_tipo5(produccion_tipo5 *pd)
{
    return pd->tipo;
}

QString ejecuta_visitor::visit_asignacion2(produccion_asignacion2 *pd)
{
    return pd->pe->accept(this);
}

QString ejecuta_visitor::visit_lista_asignacion1(produccion_lista_asignacion1 *pd)
{
    return "";
}

QString ejecuta_visitor::visit_lista_asignacion2(produccion_lista_asignacion2 *pd)
{
    //necesito el iden
    I_need_identifer="si";
    QString id=pd->iden->accept(this);
    I_need_identifer="no";
    QString valor=pd->pe->accept(this);
    tabla_simbolos* temp = get_tabla_temporal();
    if(temp->contains(id)==true){
        simbolo * s=temp->value(id);
        if(s->getId()=="variable"){
            variable *v = (variable*)temp->value(id);
            verifica_tipos*verifica=new verifica_tipos();
            QString res=verifica->asigna_tipo(v->tipo,valor);
            if(!res.contains("error")){
                v->tipo=res;
                v->valor=valor;
            }else{
                return "error de tipos";
            }

        }
    }

    return"";
}

QString ejecuta_visitor::visit_lista_asignacion3(produccion_lista_asignacion3 *pd)
{
    return "";
}

QString ejecuta_visitor::visit_lista_asignacion4(produccion_lista_asignacion4 *pd)
{

}

QString ejecuta_visitor::visit_asignacion1(produccion_asignacion1 *pd)
{

}

QString ejecuta_visitor::visit_instruccion1(produccion_instruccion1*pd)
{
    pd->pd->accept(this);//esto lleva a la declaracion de una variable con valor de asignacion
    return "";
}

QString ejecuta_visitor::visit_instruccion2(produccion_instruccion2*pd)
{
    pd->pd->accept(this);//esto lleva a la declaracion de una variable con valor de asignacion
    return "";
}

QString ejecuta_visitor::visit_instruccion3(produccion_instruccion3*pd)
{
    pd->pl->accept(this);
    return "";
}

QString ejecuta_visitor::visit_instruccion4(produccion_instruccion4*pd)
{
    pd->pc->accept(this);
    return"";
}

QString ejecuta_visitor::visit_instruccion5(produccion_instruccion5*pd)
{
    pd->pp->accept(this);
    return"";
}

QString ejecuta_visitor::visit_instruccion6(produccion_instruccion6*pd)
{
    pd->pp->accept(this);//esto lleva a la declaracion de una variable con valor de asignacion
    return "";
}

QString ejecuta_visitor::visit_instruccion7(produccion_instruccion7*pd)
{
    pd->pp->accept(this);//esto lleva a la declaracion de una variable con valor de asignacion
    return "";
}

QString ejecuta_visitor::visit_instruccion8(produccion_instruccion8*pd)
{
    pd->ps->accept(this);//esto lleva a la declaracion de una variable con valor de asignacion
    return "";
}

QString ejecuta_visitor::visit_instruccion9(produccion_instruccion9*pd)
{
    pd->po->accept(this);//esto lleva a la declaracion de una variable con valor de asignacion
    return "";
}

QString ejecuta_visitor::visit_instruccion10(produccion_instruccion10*pd)
{
        return pd->cont;
}

QString ejecuta_visitor::visit_instruccion11(produccion_instruccion11*pd)
{
    return pd->sal;
}

QString ejecuta_visitor::visit_instruccion12(produccion_instruccion12*pd)
{
    pd->pe->accept(this);
    return "";
}

QString ejecuta_visitor::visit_instruccion13(produccion_instruccion13*pd)
{
    pd->pp->accept(this);
    return "";
}

QString ejecuta_visitor::asigna_parametros(QLinkedList<simbolo *> *parametros, QStringList lista){
    QLinkedList<simbolo*>::iterator i;
    //QStringList::iterator j;
    int j=0;
    for(i=parametros->begin(); i!=parametros->end();i++){
        verifica_tipos*v=new verifica_tipos();
        variable*var=(variable*)(*i);
        QString res=v->asigna_tipo(var->tipo,lista.at(j));
        if(!res.contains("error")){
            var->tipo=res;
            var->valor=lista.at(j);
        }else{
            qDebug()<<"error de parametros en el metodo";
            return "error de tipos";
        }
    j++;
    }
    return "correcto";
}

void ejecuta_visitor::cargar_homonimos(QString nombre){
    QLinkedList<heredados*>::iterator i;
    for(i=lista->begin(); i!=lista->end();i++){
        heredados*h = (heredados*)(*i);
        lienzo* activo =(lienzo*) h->padre;
        QHash<QString,simbolo*>::iterator j;
        for (j=activo->ts->begin(); j!=activo->ts->end();j++){
            declaracion_metodo*m;
            variable*v;
            if((*j)->getId()=="metodo"){
                m=(declaracion_metodo*)(*j);
                if(m->id==nombre){
                    heredados*f =(heredados*)(*i);
                    lienzo *l = (lienzo*)f->padre;
                    heredados * h = new heredados(m,l,"");
                    homonimos->append(h);
                }
            }else if ((*j)->getId()=="variable"){
                v=(variable*)(*j);
                if(v->id==nombre){
                    heredados*f =(heredados*)(*i);
                    lienzo *l = (lienzo*)f->padre;
                    heredados * h = new heredados(v,l,"");
                    homonimos_var->append(h);
                }
            }
        }

    }
}

declaracion_metodo* ejecuta_visitor::get_metodos_sobre_cargados(tabla_simbolos*ts, QString id, int count, lienzo *padre){
    QHash<QString,simbolo*>::iterator i;
    cargar_homonimos(id);
    bool encontrado = false;
    for (i = ts->begin(); i!=ts->end(); i++){
        simbolo *s = *i;
        if(s->getId()=="metodo"){
            declaracion_metodo * m = (declaracion_metodo*)(s);
            if(m->id==id&&m->parametros->count()==count&&homonimos->count()==0){
                homonimos->clear();
                return m;
            }else if(homonimos->count()>0&&m->id==id){
                heredados *h =new heredados(m,padre,"");
                homonimos->append(h);
            }
        }
    }
    if(encontrado==false){
        QLinkedList<heredados*>::iterator i;
        int c = contar_consevar(homonimos);
        if(c==0){
            declaracion_metodo*d;
            lienzo*ac = (lienzo*)homonimos->last()->padre;
            if(homonimos->last()->hijo->getId()=="metodo"){
             d =(declaracion_metodo*)homonimos->last()->hijo;
            }
            if(ac->id==padre->id&&(d->visibilidad=="publico"||d->visibilidad=="protegido")&&d->parametros->count()==count){
                return (declaracion_metodo*)homonimos->last()->hijo;
            }else if(d->visibilidad=="publico"||d->visibilidad=="protegido"&&d->parametros->count()==count){
                ambitos->append(homonimos->last()->hijo);
                ambitos->append(homonimos->last()->padre);
                return (declaracion_metodo*)homonimos->last()->hijo;
            }else{
                return NULL;
            }
        }else if(c==1){
            for(i=homonimos->begin(); i!=homonimos->end(); i++){
                if((*i)->hijo->getId()=="metodo"){
                    heredados *h = (heredados*)(*i);
                    declaracion_metodo *d = (declaracion_metodo*)h->hijo;
                    lienzo* ac = (lienzo*)h->padre;
                    if(ac->id==padre->id&&d->parametros->count()==count&&d->conservar=="conservar"){
                        return d;
                    }else if((d->visibilidad=="publico"||d->visibilidad=="protegido")&&d->parametros->count()==count&&d->conservar=="conservar"){
                        ambitos->prepend(ac);
                        ambitos->prepend(d);
                        return d;
                    }else{
                        return NULL;
                    }

                }
            }
        }
    }

    return NULL;

}
int ejecuta_visitor::contar_consevar(QLinkedList<heredados *> *homonimos){
    QLinkedList<heredados*>::iterator i;
    int c=0;
    for(i=homonimos->begin(); i!=homonimos->end(); i++){
        heredados*h = (heredados*)*i;
        if(h->hijo->getId()=="metodo"){
            declaracion_metodo*d = (declaracion_metodo*)h->hijo;
            if(d->conservar=="conservar"){
               c++;
            }
        }
    }
    return c;
}

void ejecuta_visitor::copia_parametros(tabla_simbolos *ts, QLinkedList<simbolo *> *parametros){
    QLinkedList<simbolo*>::iterator i;
    for (i=parametros->begin(); i!=parametros->end();i++){
        simbolo *s = *i;
        if(s->getId()=="variable"){
            variable*v =(variable*) s;
            ts->replace(v->id,v);
        }

    }

}



QString ejecuta_visitor::visit_instruccion14(produccion_instruccion14 *pd)
{
    //aki se ejecuta la llamada al metodo
    I_need_identifer="si";
    QString id=pd->iden;//id del metodo llamado
    I_need_identifer="no";
    QString tam=pd->pl->accept(this);//valores de los metodos a enviar al metodo
    QStringList can;
    int t=0;
    if(tam.contains(",")==true){
    can=tam.split(",");
    t=can.count();//t sirve para la cantidad de parametros a enviar al metodo
    }else if(tam==""){
        t=0;
    }else{
        t=1;
    }
    lienzo*l = (lienzo*)get_ambito_padre(ambitos);
    if(existe(id,l)==true){
        //operar tengo que meter este ambito en la pila de ambitos si no error
        declaracion_metodo * m_ejecutar = get_metodos_sobre_cargados(l->ts,id,t,l);//metodo que tengo que ejecutar
        if(m_ejecutar==NULL){
            return "error este metodo no ha sido declarado o no tiene sobrecarga valida";
        }
        declaracion_metodo * primero_ambito;
        if(ambitos->first()->getId()=="metodo"){
            primero_ambito=(declaracion_metodo*)ambitos->first();
            //llamada recursiva ¿?
            if(primero_ambito->id==m_ejecutar->id){
                //es llamada recursiva
                ambitos->takeFirst();
                QString e = asigna_parametros(m_ejecutar->parametros,can);
                copia_parametros(m_ejecutar->ts,m_ejecutar->parametros);
                ambitos->prepend(m_ejecutar);
                if(e!="error de tipos"){
                 m_ejecutar->instrucciones->accept(this);
                }

            }else{
                //es otro metodo
                QString e = asigna_parametros(m_ejecutar->parametros,can);
                copia_parametros(m_ejecutar->ts,m_ejecutar->parametros);
                copia_ambito(l->ts,m_ejecutar->ts);
                ambitos->prepend(m_ejecutar);
                if(e!="error de tipos"){
                 m_ejecutar->instrucciones->accept(this);
                }
                ambitos->takeFirst();
            }

        }else{
            return "";//es probable que no entre nunca en este else pero es por seguridad; seria un grave error que entrara
        }

    }else{
        return "error este metodo no ha sido declarado";
    }


    return "";
}

QString ejecuta_visitor::visit_expresion_igual(Expresion_igual *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1==exp2){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_diferente(expresion_diferente *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1!=exp2){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_y(Expresion_y *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare("true")==0 && e2.compare("true")==0){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_nand(expresion_nand *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare("true")==0 && e2.compare("true")==0){
        return "false";
    }else{
        return "true";
    }
}

QString ejecuta_visitor::visit_expresion_or(expresion_or *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare("true")==0 || e2.compare("true")==0){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_xor(expresion_xor *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare(e2)==0){
        return "false";
    }else{
        return "true";
    }
}

QString ejecuta_visitor::visit_expresion_nor(expresion_nor *e)
{
    QString e1=e->exp1->accept(this);
    QString e2=e->exp2->accept(this);
    if(e1.compare("false")==0 && e2.compare("false")==0){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_mayor(expresion_mayor *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1>exp2){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_mayorq(expresion_mayorq *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1>=exp2){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_menor(expresion_menor *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1<exp2){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_menorq(expresion_menoq *e)
{
    double exp1 =QString(e->exp1->accept(this)).toDouble();
    double exp2 =QString(e->exp2->accept(this)).toDouble();
    if(exp1<=exp2){
        return "true";
    }else{
        return "false";
    }
}

QString ejecuta_visitor::visit_expresion_not(expresion_not *e)
{
    QString e1=e->exp1->accept(this);
    if(e1.compare("true")==0){
        return "false";
    }else{
        return "true";
    }
}

QString ejecuta_visitor::visit_expresion_parentesis(expresion_parentesis *e)
{
    return e->exp1->accept(this);
}

QString ejecuta_visitor::visit_expresion_potencia(expresion_potencia *e)
{
    QString a=e->exp1->accept(this);//base
    QString b=e->exp2->accept(this);//potencia
    verifica_tipos*v=new verifica_tipos();
    QString res=v->verifica_tipo(a,b);
    double val;
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
    }
}

QString ejecuta_visitor::visit_expresion_mas(expresion_mas *e)
{
    QString a=e->exp1->accept(this);
    QString b=e->exp2->accept(this);
    verifica_tipos*v=new verifica_tipos();
    QString res=v->verifica_tipo(a,b);
    if(res.contains("cadena") && !res.contains("error") || res=="bool-bool"){
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
            double val=v->obtener_valor_booleano(a).toDouble()+v->obtener_valor_booleano(b).toDouble();
            return QString::number(val);
        }else{
        qDebug()<<"error al intentar sumar "+a+" con "+b;
        }
}

QString ejecuta_visitor::visit_expresion_menos(expresion_menos *e)
{
    QString a=e->exp1->accept(this);
    QString b=e->exp2->accept(this);
    verifica_tipos*v=new verifica_tipos();
    QString res=v->verifica_tipo(a,b);
    double val=0;
    if(!res.contains("cadena") && !res.contains("error")){
        if(res.contains("bool-bool")){
            return v->resta_bool(a,b);
        }else{
            val=v->obtener_valor_booleano(a).toDouble()-v->obtener_valor_booleano(b).toDouble();
            return QString::number(val);
        }
    }else{
      qDebug()<<"error al intentar restar "+a+" con "+b;
    }
}

QString ejecuta_visitor::visit_expresion_por(expresion_por *e)
{
    QString a=e->exp1->accept(this);
    QString b=e->exp2->accept(this);
    verifica_tipos*v=new verifica_tipos();
    QString res=v->verifica_tipo(a,b);
    double val;
    if(!res.contains("cadena") && !res.contains("error")){
        if(res.contains("bool-bool")){
            return v->mul_bool(a,b);
        }else{
            val=v->obtener_valor_booleano(a).toDouble()*v->obtener_valor_booleano(b).toDouble();
            return QString::number(val);
        }
    }else{
      qDebug()<<"error al intentar multiplicar "+a+" con "+b;
    }
}

QString ejecuta_visitor::visit_expresion_divi(expresion_divi *e)
{
    QString a=e->exp1->accept(this);
    QString b=e->exp2->accept(this);
    verifica_tipos*v=new verifica_tipos();
    QString res=v->verifica_tipo(a,b);
    double val;
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
    }
}

QString ejecuta_visitor::visit_expresion_masmas(expresion_masmas *e)
{

    QString a=e->pe->accept(this);//obtengo el id y lo busco en una tabla de simbolos y le sumo uno
    QString val=a;
    return "";
}

QString ejecuta_visitor::visit_expresion_menosmenos(expresion_menosmenos *e)
{
    QString a=e->pe->accept(this);//obtengo el id y lo busco en una tabla de simbolos y le resto uno
    return "";
}

QString ejecuta_visitor::visit_expresion_masigual(expresion_masigual *e)
{
    QString id=e->pe1->accept(this);//obtengo el valor a sumarle al valor actual
    QString a=e->pe->accept(this);//obtengo el id y lo busco en una tabla de simbolos
    return "";
}

QString ejecuta_visitor::visit_expresion_menosigual(expresion_menosigual *e)
{
    QString id=e->pe1->accept(this);//obtengo el valor a sumarle al valor actual
    QString a=e->pe->accept(this);//obtengo el id y lo busco en una tabla de simbolos
    return "";
}

QString ejecuta_visitor::visit_expresion_numero(expresion_numero *e)
{
    return e->num;
}

QString ejecuta_visitor::visit_expresion_iden(expresion_iden *e)
{
    return e->iden->accept(this);
}

QString ejecuta_visitor::visit_expresion_caracter(expresion_caracter *e)
{
    return e->car;
}

QString ejecuta_visitor::visit_expresion_decimal(expresion_decimal *e)
{
    return e->dec;
}

QString ejecuta_visitor::visit_expresion_true(expresion_true *e)
{
    return e->tr;
}

QString ejecuta_visitor::visit_expresion_false(expresion_false *e)
{
    return e->fa;
}

QString ejecuta_visitor::visit_expresion_cadenacomillas(expresion_cadenacomillas *e)
{
    return e->cad;
}

QString ejecuta_visitor::visit_ciclos1(produccion_ciclos1 *pd)
{
    if (pd->pe->accept(this)=="true"){
        pd->l1->accept(this);
    }else{
        pd->l2->accept(this);
    }
    return "";
}

QString ejecuta_visitor::visit_ciclos2(produccion_ciclos2 *pd)
{
    //ejecuta si
    if(pd->pe->accept(this)=="true"){
        pd->l1->accept(this);
    }
    return "";
}

QString ejecuta_visitor::visit_ciclos3(produccion_ciclos3 *pd)
{
    while(pd->pe->accept(this)=="true"){
        pd->l1->accept(this);
    }
    return "";
}

QString ejecuta_visitor::visit_ciclos4(produccion_ciclos4 *pd)
{
    pd->pi->accept(this);
    while(pd->pe->accept(this)=="true"){
        pd->pl->accept(this);
        pd->pf->accept(this);
    }

    return "";
}

QString ejecuta_visitor::visit_ciclos5(produccion_ciclos5 *pd)
{
    pd->pl->accept(this);
    while(pd->pe->accept(this)=="true"){
        pd->pl->accept(this);
    }
    return "";
}
QString a="";
int entro=0;
QString ejecuta_visitor::visit_ciclos6(produccion_ciclos6 *pd)
{
    a=pd->pe->accept(this);
    //pd->pe->accept(this);//la expresion se ejecuta aki
    pd->pl->accept(this);//ejecuta todo el listado de casos
    return "";
}

QString ejecuta_visitor::visit_lista_case1(produccion_lista_case1 *pd)
{
    if(pd->pc->accept(this)!=NULL){
    pd->pc->accept(this);
    }
    QString b=pd->pe->accept(this);
    if(b==a && entro==0){
        qDebug()<<"entro con case = "+pd->pe->accept(this);
        pd->pi->accept(this);
        entro=1;
    }
    return "";
}
QString ejecuta_visitor::visit_lista_case2(produccion_lista_case2 *pd)
{
        QString b=pd->pe->accept(this);
    if(a==b && entro==0){
        qDebug()<<"entro con case = "+pd->pe->accept(this);
        pd->pi->accept(this);
        entro=1;
    }
    return "";
}
QString ejecuta_visitor::visit_lista_case3(produccion_lista_case3 *pd)
{
    if(entro=0){
        qDebug()<<"entro en switch por defecto";
        pd->pi->accept(this);
    }
    return "";
}

QString ejecuta_visitor::visit_lista_parametros1(produccion_lista_parametros1 *pd)
{

}

QString ejecuta_visitor::visit_lista_parametros2(produccion_lista_parametros2 *pd)
{

}

QString ejecuta_visitor::visit_lista_parametros3(produccion_lista_parametros3 *pd)
{

}

QString ejecuta_visitor::visit_parametro1(produccion_parametro1 *pd)
{

}

QString ejecuta_visitor::visit_declaracion_metodo1(produccion_declaracion_metodo1 *pd)
{        
    return"";
}

QString ejecuta_visitor::visit_declaracion_metodo2(produccion_declaracion_metodo2 *pd)
{
    QString n=pd->iden->accept(this);
    return"";
}

QString ejecuta_visitor::visit_declaracion_metodo3(produccion_declaracion_metodo3 *pd)
{
    QString n=pd->iden->accept(this);
    return"";
}

void ejecuta_visitor::copia_ambito(tabla_simbolos *padre, tabla_simbolos *hijo){
    QHash<QString,simbolo*>::iterator i;
    for(i=padre->begin(); i!=padre->end();i++){
        QString llave =i.key();
        simbolo * s = *i;
        if(s->getId()!="metodo"&&s->getId()!="lienzo"){
          hijo->insert(llave,*i);
        }
    }
}

simbolo *ejecuta_visitor::get_ambito_padre(QLinkedList<simbolo *> *ambitos){

    QLinkedList<simbolo*>::iterator i;
    for (i=ambitos->begin(); i!=ambitos->end(); i++){
        simbolo*s = *i;
        if(s->getId()=="lienzo"){
            lienzo* l = (lienzo*)s;
            return l;
        }
    }
    return NULL;
}

QString ejecuta_visitor::visit_declaracion_metodo4(produccion_declaracion_metodo4 *pd)
{  //visita metodo principal o delcaracion de metodo
    I_need_identifer="si";
    QString n=pd->iden->accept(this);
    I_need_identifer="no";
    if(n=="principal"){//el ambito padre ya e
        declaracion_metodo*m=(declaracion_metodo*)ambitos->first();//tabla del principal--posible error de conversion verificar
        lienzo*l=(lienzo*)get_ambito_padre(ambitos);
        copia_ambito(l->ts,m->ts);
        pd->pl->accept(this);
    }else{

    }
    //pd->pl->accept(this);
    return"";
}


//nuevo
 QString ejecuta_visitor::visit_lista_c1(produccion_lista_corchetes_1*pd){
return"";
}

 QString  ejecuta_visitor::visit_lista_c2(produccion_lista_corchete_2*pd){
    return"";
}


 tabla_simbolos* ejecuta_visitor::get_tabla_temporal(){
     simbolo *s = ambitos->first();
     declaracion_metodo *m ;
     lienzo *l;
     tabla_simbolos *temp;
     if(s->getId()=="metodo"){
         m=(declaracion_metodo*)s;
      return   temp=m->ts;
     }else if(s->getId()=="lienzo"){
         l=(lienzo*)s;
      return   temp=l->ts;
     }
 }

 QString ejecuta_visitor::visit_declarador_1(produccion_declarador_1*pd){
    tabla_simbolos*temp = get_tabla_temporal();
    if(temp->contains(pd->iden)&& I_need_identifer!="si"){
        variable *v = (variable*)temp->value(pd->iden);
        return v->valor;
    }/*else if(true){ esto para ver lo de herencia

    }*/
    return pd->iden;
}

bool ejecuta_visitor::existe(QString nombre, lienzo *l){
    bool exist = false;
    if(l->ts->contains(nombre)){
        exist =true;
        return exist;
    }
        QLinkedList<heredados*>::iterator i;
        for(i=lista->begin(); i!=lista->end(); i++){
            lienzo * actual;
            heredados * h =(heredados*)(*i);
            actual = (lienzo*)h->padre;
            if(actual->ts->contains(nombre)==true){
                exist = true;
                return exist;
            }
        }
    return exist;
}

QString ejecuta_visitor::visit_expresion_llamada(expresion_llamada_metodo *pd){
     //esta es la expresion llamada
     if(es_llamada=="no"){
         es_llamada="si";
     }else if(es_llamada=="si"){
         QString id =pd->iden;//ide del metodo llamado
         QString tam =pd->lista->accept(this);//valores a enviar al metodo;
         QStringList can;
         int t=0;
         if(tam.contains(",")==true){
            can=tam.split(",");
            t=can.count();//t sirve para la cantidad de parametros a enviar al metodo

        }else if(tam==""){
            t=0;
        }else{
            t=1;
         }
        lienzo*l = (lienzo*)get_ambito_padre(ambitos);//esta linea todavia existe puedo ejecutar
        if(existe(id,l)==true){
              //operar tengo que meter este ambito en la pila de ambitos si no error
              declaracion_metodo * m_ejecutar = get_metodos_sobre_cargados(l->ts,id,t,l);//metodo que tengo que ejecutar
              if(m_ejecutar==NULL){
                  return "error este metodo no ha sido declarado o no tiene sobrecarga valida";
              }
              declaracion_metodo * primero_ambito;
              if(ambitos->first()->getId()=="metodo"){
                  primero_ambito=(declaracion_metodo*)ambitos->first();
                  //llamada recursiva ¿?
                  if(primero_ambito->id==m_ejecutar->id){
                      //es llamada recursiva
                      ambitos->takeFirst();
                      QString e = asigna_parametros(m_ejecutar->parametros,can);
                      copia_parametros(m_ejecutar->ts,m_ejecutar->parametros);
                      ambitos->prepend(m_ejecutar);
                      if(e!="error de tipos"){
                       m_ejecutar->instrucciones->accept(this);
                      }

                  }else{
                      //es otro metodo
                      QString e = asigna_parametros(m_ejecutar->parametros,can);
                      copia_parametros(m_ejecutar->ts,m_ejecutar->parametros);
                      copia_ambito(l->ts,m_ejecutar->ts);
                      ambitos->prepend(m_ejecutar);
                      if(e!="error de tipos"){
                       m_ejecutar->instrucciones->accept(this);
                      }
                      ambitos->takeFirst();
                  }

              }else{
                  return "";//es probable que no entre nunca en este else pero es por seguridad; seria un grave error que entrara
              }

          }else{
              return "error este metodo no ha sido declarado";
          }

     }
     return "";
}

QString ejecuta_visitor::visit_declarador_2(produccion_declarador_2*pd){
    return pd->iden;
}

QString ejecuta_visitor::visit_declaracion_variable5(produccion_declaracion_variable5*pd) {
    return"";
}



QString ejecuta_visitor::visit_declaracion_variable6(produccion_declaracion_variable6*pd) {
    return"";
}


QString ejecuta_visitor::visit_expresion_epsilon(expresion_epsilon*pd){
    return "";
}

QString ejecuta_visitor::visit_declaracion_variable_7(produccion_declaracion_variable7*pd) {
    //declaracion de vectores 7
    pd->asignacion->accept(this);
    pd->conservar;
    pd->lnombre->accept(this);
    pd->tipo->accept(this);
    return "";
}

QString ejecuta_visitor::visit_declaracion_variable_8(produccion_declaracion_variable_8*pd){
    //declaracion de vectores 8
    pd->conservar;
    pd->lnombre->accept(this);
    pd->tipo->accept(this);
    return "";

}


QString ejecuta_visitor::visit_expresion_vector(expresion_vector*pd) {

    return "";

}

QString ejecuta_visitor::visit_lista_expresion1(produccion_lista_expresion1 *pd)
{
    return pd->pl->accept(this)+","+pd->pe->accept(this);
}

QString ejecuta_visitor::visit_lista_expresion2(produccion_lista_expresion2 *pd)
{
    return pd->pe->accept(this);
}
