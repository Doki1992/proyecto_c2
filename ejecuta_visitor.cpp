#include "ejecuta_visitor.h"
#include "QString"
#include "math.h"
#include"QDebug"
#include"verifica_tipos.h"
#include"mainwindow.h"
#include<QGraphicsItem>
ejecuta_visitor::ejecuta_visitor(tabla_simbolos *ts, QLinkedList<tabla_simbolos *> *ambitos)
{
    this->ts=ts;
    this->ambitos=ambitos;
}

QString ejecuta_visitor::visit_pintar_s11(produccion_pintar_s11 *pd)
{
    QGraphicsTextItem *text=new QGraphicsTextItem(pd->p4->accept(this));
    rect_local->append(text);
    return "";
}

QString ejecuta_visitor::visit_pintar_or1(produccion_pintar_or1 *pd)
{
    QString tipo=pd->p6->accept(this);
    QString color=pd->cadena;
    if(tipo=="r"){
        QGraphicsRectItem *rectangulo=new QGraphicsRectItem(pd->p1->accept(this).toInt(),pd->p1->accept(this).toInt(),pd->p4->accept(this).toInt(),pd->p5->accept(this).toInt());
        rect_local->append(rectangulo);
       // rectangulo->setBrush(QColor::red());
        return"";
    }else if(tipo=="o"){
        QGraphicsEllipseItem *elip=new QGraphicsEllipseItem(pd->p1->accept(this).toInt(),pd->p1->accept(this).toInt(),pd->p4->accept(this).toInt(),pd->p5->accept(this).toInt());
        rect_local->append(elip);
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
    QString nombre_lienzo=pd->iden;
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
    //QString extiende = pd->pe->accept(this);
    pd->pl->accept(this);
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
    return pd->pl->accept(this)+pd->iden->accept(this);
}

QString ejecuta_visitor::visit_lista_nombre2(produccion_lista_nombre2 *pd)
{
    return pd->iden->accept(this);
}

QString ejecuta_visitor::visit_lista_instrucciones1(produccion_lista_instrucciones1 *pd)
{
    pd->pl->accept(this);
    pd->pi->accept(this);   
    return "";
}

QString ejecuta_visitor::visit_lista_instrucciones2(produccion_lista_instrucciones2 *pd)
{    
    pd->pi->accept(this);
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
    QString id=pd->iden->accept(this);
    QString valor=pd->pe->accept(this);
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

QString ejecuta_visitor::visit_instruccion14(produccion_instruccion14 *pd)
{
    //aki se ejecuta la llamada al metodo
    QString id=pd->iden;//id del metodo llamado
    QString tam=pd->pl->accept(this);//valores de los metodos a enviar al metodo
    int t=0;
    if(tam.contains(",")==true){
    QStringList can=tam.split(",");
    t=can.count();//t sirve para la cantidad de parametros a enviar al metodo
    }else if(tam==""){
        t=0;
    }else{
        t=1;
    }//mike kito esto
    tabla_simbolos*ts=ambitos->first();//obteniendo tabla de simbolos del llienzo
    if(ts->contains(id)==true){//si existe el metodo en la ts, entonces verificamos cantidad de parametros de ambos
        declaracion_metodo*m=(declaracion_metodo*)ts->value(id);
        if(m->parametros->count()==t){//comparo cantidad de parametros es igual
            //aki se verifica cada tipo q se envia con el q se recibe
            QLinkedList<simbolo*>::iterator i;
            i=m->parametros->begin();
            int cont=0;
            QStringList can=tam.split(",");
            int correcto=0;
            while(i!=m->parametros->end()){
                simbolo*s=(*i);
                variable*v=(variable*)s;
                QString tipo=v->tipo;
                verifica_tipos*ver=new verifica_tipos();
                QString resultado=ver->asigna_tipo(tipo,can[cont]);
                if(!resultado.contains("error")){
                    v->valor=can[cont];
                }else{
                    correcto=1;//cambia la bandera a 1 si tiene algun error en la asignacion de parametros
                }
                ++i;
                cont++;
            }
            if(correcto==0){
                //ejecuta lo q este dentro del metodo
                m->metodo->accept(this);
            }else{
                return "error en los parametros enviados al metodo";
            }


        }else{
            return "error, cantidad de parametros incorrecto";
        }
    }else{
        return "error, el metodo no ha sido declarado";
    }

//hasta aki
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

QString ejecuta_visitor::visit_expresion_nulo(expresion_nulo *e)
{

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
    QString n=pd->iden->accept(this);
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

QString ejecuta_visitor::visit_declaracion_metodo4(produccion_declaracion_metodo4 *pd)
{    
    QString n=pd->iden->accept(this);
    if(n=="principal"){
        tabla_simbolos*t=ambitos->first();
        declaracion_metodo*m=(declaracion_metodo*)t->value(n);
        //ts=m->ts;
        produccion_declaracion_metodo4*pm=(produccion_declaracion_metodo4*)m->metodo;
        pm->pl->accept(this);
    }
    pd->pl->accept(this);
    return"";
}


//nuevo
 QString ejecuta_visitor::visit_lista_c1(produccion_lista_corchetes_1*pd){
return"";
}

 QString  ejecuta_visitor::visit_lista_c2(produccion_lista_corchete_2*pd){
    return"";
}

 QString ejecuta_visitor::visit_declarador_1(produccion_declarador_1*pd){
    return pd->iden;
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
