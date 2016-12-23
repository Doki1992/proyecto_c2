#include "verifica_tipos.h"
#include<QString>
#include "iostream"
#include"stdlib.h"
#include"stdio.h"
verifica_tipos::verifica_tipos()
{
}

QString verifica_tipos::verifica_tipo(QString valor,QString valor2)
{    
    if(check_char(valor)=="char" && check_bool(valor2)=="bool"){
        return "error char-bool";
    }else if(check_bool(valor)=="bool" && check_char(valor2)=="char"){
        return "error bool-char";
    }else if(check_entero(valor)=="entero" && check_char(valor2)=="char"){
         return "entero-char";
    }else if(check_char(valor)=="char" && check_entero(valor2)=="entero"){
         return "char-entero";
    }else if(check_doble(valor)=="doble" && check_char(valor2)=="char"){
        return "doble-char";
    }else if(check_char(valor)=="char" && check_doble(valor2)=="doble"){
        return "char-doble";
    }else if(check_bool(valor)=="bool" && check_bool(valor2)=="bool"){
        return "bool-bool"   ;//yaaaaaaaaaaaaaaaaa
    }else if(check_bool(valor)=="bool" && check_entero(valor2)=="entero"){
        return "bool-entero";//yaaaaaaaaaaaaaaaaa
    }else if(check_bool(valor)=="bool" && check_doble(valor2)=="doble"){
        return "bool-doble";//yaaaaaaaaaaaaaaaaa
    }else if(check_bool(valor)=="bool" && check_doble(valor2)=="cadena"){
        return "error al operar bool-cadena";
    }else if(check_entero(valor)=="entero" && check_entero(valor2)=="entero"){
        return "entero-entero";//yaaaaaaaaaaaaaaaaa
    }else if(check_entero(valor)=="entero" && check_bool(valor2)=="bool"){
        return "entero-bool";//yaaaaaaaaaaaaaaaaa
    }else if(check_entero(valor)=="entero" && check_doble(valor2)=="doble"){
        return "entero-doble";//yaaaaaaaaaaaaaaaaa
    }else if(check_entero(valor)=="entero" && check_doble(valor2)=="cadena"){
        return "entero-cadena";//yaaaaaaaaaaaaaaaaa
    }else if(check_doble(valor)=="cadena" && check_entero(valor2)=="entero"){
            return "cadena-entero";//yaaaaaaaaaaaaaaaaa
    }else if(check_doble(valor)=="doble" && check_entero(valor2)=="entero"){
        return "doble-entero";//yaaaaaaaaaaaaaaaaa
    }else if(check_entero(valor)=="cadena" && check_doble(valor2)=="doble"){
            return "cadena-doble";//yaaaaaaaaaaaaaaaaa
    }else if(check_doble(valor)=="cadena" && check_bool(valor2)=="bool"){
            return "error al operar cadena-bool";
    }else if(check_doble(valor)=="doble" && check_bool(valor2)=="cadena"){
           return "doble-cadena";//yaaaaaaaaaaaaaaaaa
    }else if(check_doble(valor)=="doble" && check_bool(valor2)=="doble"){
           return "doble-doble";//yaaaaaaaaaaaaaaaaa
    }else if(check_doble(valor)=="doble" && check_bool(valor2)=="bool"){
        return "doble-bool";//yaaaaaaaaaaaaaaaaa
    }else if(check_entero(valor)=="cadena" && check_doble(valor2)=="cadena"){
        return "cadena-cadena";//yaaaaaaaaaaaaaaaaa
    }else{
        return "error en la operacion";
    }

}

QString verifica_tipos::check_bool(QString v)
{
    if(v=="true" || v=="false"){
        return "bool";
    }else{
        return check_entero(v);
    }

}

QString verifica_tipos::check_char(QString v)
{
    if(v.contains("'")==true){
        return "char";
    }else{
        return check_entero(v);
    }

}

QString verifica_tipos::check_entero(QString v)
{
    bool ok;
    int num=v.toInt(&ok,10);
    if (ok==true){
        return "entero";
    }else{
        if(v=="error"){
            return "error";
        }else{
            return "cadena";
        }
    }

}

QString verifica_tipos::check_doble(QString v)
{
    bool ok;
    double num=v.toDouble(&ok);
    if (ok==true){
        return "doble";
    }else{
        if(v=="error"){
            return "error";
        }else{
            return "cadena";
        }
    }

}

QString verifica_tipos::resta_bool(QString v1,QString v2)
{
    if(v1=="true" && v2=="true"){
        return "0";
    }else if(v1=="true" && v2=="false"){
        return "1";
    }else if(v1=="false" && v2=="false"){
        return "0";
    }else if(v1=="false" && v2=="true"){
        return "-1";
    }
}

QString verifica_tipos::mul_bool(QString v1,QString v2)
{
    if(v1=="true" && v2=="true"){
        return "1";
    }else if(v1=="true" && v2=="false"){
        return "0";
    }else if(v1=="false" && v2=="false"){
        return "0";
    }else if(v1=="false" && v2=="true"){
        return "0";
    }
}

QString verifica_tipos::divi_bool(QString v1,QString v2)
{
    if(v1=="true" && v2=="true"){
        return "1";
    }else if(v1=="true" && v2=="false"){
        return "error";
    }else if(v1=="false" && v2=="false"){
        return "error";
    }else if(v1=="false" && v2=="true"){
        return "0";
    }
}

QString verifica_tipos::suma_bool(QString v1,QString v2)
{
    if(v1=="true" && v2=="true"){
        return "2";
    }else if(v1=="true" && v2=="false"){
        return "1";
    }else if(v1=="false" && v2=="false"){
        return "0";
    }else if(v1=="false" && v2=="true"){
        return "1";
    }
}
QString verifica_tipos::obtener_valor_booleano(QString v1)
{
    if(v1=="true"){
        return "1";
    }else if(v1=="false"){
        return "0";
    }else{
        if(v1.contains("'")){
            QString temp=v1.remove('\'');            
            return temp;
        }else if(v1.contains("\"")){
            QString temp=v1.remove('\"');
            return temp;
        }else{
            return v1;
        }

    }
}


QString verifica_tipos::asigna_tipo(QString valor,QString valor2)
{
    if(valor=="bool" && check_bool(valor2)=="bool"){
        return "bool";
    }else if(valor=="bool" && check_entero(valor2)=="entero"){
        return "error asignacion bool-entero";
    }else if(valor=="bool" && check_doble(valor2)=="doble"){
        return "error asignacion bool-doble";
    }else if(valor=="bool" && check_doble(valor2)=="cadena"){
        return "error asignacion bool-cadena";
    }else if(valor=="entero" && check_entero(valor2)=="entero"){
        return "entero";
    }else if(valor=="entero" && check_bool(valor2)=="bool"){
        return "entero";
    }else if(valor=="entero" && check_doble(valor2)=="doble"){
        return "entero";
    }else if(valor=="entero" && check_doble(valor2)=="cadena"){
        return "error de asignacion entero-cadena";
    }else if(valor=="cadena" && check_entero(valor2)=="entero"){
            return "cadena";
    }else if(valor=="doble" && check_entero(valor2)=="entero"){
        return "doble";
    }else if(valor=="cadena" && check_doble(valor2)=="doble"){
            return "cadena";
    }else if(valor=="cadena" && check_bool(valor2)=="bool"){
            return "cadenal";
    }else if(valor=="doble" && check_bool(valor2)=="cadena"){
           return "error no se puede asignar cadena a doble";
    }else if(valor=="doble" && check_bool(valor2)=="doble"){
           return "doble";
    }else if(valor=="doble" && check_bool(valor2)=="bool"){
        return "doble";
    }else if(valor=="cadena" && check_doble(valor2)=="cadena"){
        return "cadena";
    }else{
        return "error en la asignacion de variables";
    }

}
