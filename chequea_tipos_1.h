#ifndef CHEQUEA_TIPOS_1_H
#define CHEQUEA_TIPOS_1_H
#include "visitor.h"
#include"QHash"
#include<QString>
#include "tabla_simbolos.h"
#include "lienzo.h"
#include "declaracion_metodo.h"
#include"variable.h"
#include "variable.h"
#include "stdlib.h"
#include <QDebug>
#include"token_error.h"
class chequea_tipos_1:public visitor
{
public:
    chequea_tipos_1(tabla_simbolos*ts,QLinkedList<token_error*> *errores);
    int asignar_valor_vector(QLinkedList<int>*lista,int tam_dimension,int aux,int aux_bandera);
    int tamano_dimension_anterior(QLinkedList<int>*lista,int tam);
    int obtener_valor_columna(QLinkedList<int>*lista);
    tabla_simbolos*ts;
    lienzo * lienzo_activo;
    declaracion_metodo * metodo_activo;
    QLinkedList<token_error*> *errores;
    virtual QString visit_pintar_s11(produccion_pintar_s11*pd) ;
    virtual QString visit_pintar_or1(produccion_pintar_or1*pd) ;
    virtual QString visit_pintar_p1(produccion_pintar_p1*pd) ;
    virtual QString visit_principal1(produccion_principal1*pd) ;
    virtual QString visit_ordenar1(produccion_ordenar1*pd) ;
    virtual QString visit_sumarizar1(produccion_sumarizar1*pd) ;
    virtual QString visit_ini1(produccion_ini1*pd) ;
    virtual QString visit_lienzo1(produccion_lienzo1*pd) ;
    virtual QString visit_lienzo2(produccion_lienzo2*pd) ;
    virtual QString visit_lienzo3(produccion_lienzo3*pd) ;
    virtual QString visit_lienzo4(produccion_lienzo4*pd) ;
    virtual QString visit_lienzo5(produccion_lienzo5*pd) ;
    virtual QString visit_lienzo6(produccion_lienzo6*pd) ;
    virtual QString visit_ini2(produccion_ini2*pd) ;
    virtual QString visit_visibilidad1(produccion_visibilidad1*pd) ;
    virtual QString visit_visibilidad2(produccion_visibilidad2*pd) ;
    virtual QString visit_visibilidad3(produccion_visibilidad3*pd) ;
    virtual QString visit_extiende1(produccion_extiende1*pd) ;
    virtual QString visit_lista_nombre1(produccion_lista_nombre1*pd) ;
    virtual QString visit_lista_nombre2(produccion_lista_nombre2*pd) ;
    virtual QString visit_lista_instrucciones1(produccion_lista_instrucciones1*pd) ;
    virtual QString visit_lista_instrucciones2(produccion_lista_instrucciones2*pd) ;
    virtual QString visit_declaracion_variable1(produccion_declaracion_variable1*pd) ;
    virtual QString visit_declaracion_variable2(produccion_declaracion_variable2*pd) ;
    virtual QString visit_declaracion_variable3(produccion_declaracion_variable3*pd) ;
    virtual QString visit_declaracion_variable4(produccion_declaracion_variable4*pd) ;
    virtual QString visit_tipo1(produccion_tipo1*pd) ;
    virtual QString visit_tipo2(produccion_tipo2*pd) ;
    virtual QString visit_tipo3(produccion_tipo3*pd) ;
    virtual QString visit_tipo4(produccion_tipo4*pd) ;
    virtual QString visit_tipo5(produccion_tipo5*pd) ;
    virtual QString visit_asignacion1(produccion_asignacion1*pd) ;
    virtual QString visit_asignacion2(produccion_asignacion2*pd) ;
    virtual QString visit_lista_asignacion1(produccion_lista_asignacion1*pd) ;
    virtual QString visit_lista_asignacion2(produccion_lista_asignacion2*pd) ;
    virtual QString visit_lista_asignacion3(produccion_lista_asignacion3*pd) ;
    virtual QString visit_lista_asignacion4(produccion_lista_asignacion4*pd) ;
    virtual QString visit_instruccion1(produccion_instruccion1*pd);
    virtual QString visit_instruccion2(produccion_instruccion2*pd);
    virtual QString visit_instruccion3(produccion_instruccion3*pd);
    virtual QString visit_instruccion4(produccion_instruccion4*pd);
    virtual QString visit_instruccion5(produccion_instruccion5*pd);
    virtual QString visit_instruccion6(produccion_instruccion6*pd);
    virtual QString visit_instruccion7(produccion_instruccion7*pd);
    virtual QString visit_instruccion8(produccion_instruccion8*pd);
    virtual QString visit_instruccion9(produccion_instruccion9*pd);
    virtual QString visit_instruccion10(produccion_instruccion10*pd);
    virtual QString visit_instruccion11(produccion_instruccion11*pd);
    virtual QString visit_instruccion12(produccion_instruccion12*pd);
    virtual QString visit_instruccion13(produccion_instruccion13*pd);
    virtual QString visit_instruccion14(produccion_instruccion14*pd);
    virtual QString visit_expresion_igual(Expresion_igual*e);
    virtual QString visit_expresion_diferente(expresion_diferente*e);
    virtual QString visit_expresion_y(Expresion_y*e);
    virtual QString visit_expresion_nand(expresion_nand*e);
    virtual QString visit_expresion_or(expresion_or*e);
    virtual QString visit_expresion_xor(expresion_xor*e);
    virtual QString visit_expresion_nor(expresion_nor*e);
    virtual QString visit_expresion_mayor(expresion_mayor*e);
    virtual QString visit_expresion_mayorq(expresion_mayorq*e);
    virtual QString visit_expresion_menor(expresion_menor*e);
    virtual QString visit_expresion_menorq(expresion_menoq*e);
    virtual QString visit_expresion_not(expresion_not*e);
    virtual QString visit_expresion_nulo(expresion_nulo*e);
    virtual QString visit_expresion_parentesis(expresion_parentesis*e);
    virtual QString visit_expresion_potencia(expresion_potencia*e);
    virtual QString visit_expresion_mas(expresion_mas*e);
    virtual QString visit_expresion_masmas(expresion_masmas*e);
    virtual QString visit_expresion_menosmenos(expresion_menosmenos*e);
    virtual QString visit_expresion_masigual(expresion_masigual*e);
    virtual QString visit_expresion_menosigual(expresion_menosigual*e);
    virtual QString visit_expresion_menos(expresion_menos*e);
    virtual QString visit_expresion_por(expresion_por*e);
    virtual QString visit_expresion_divi(expresion_divi*e);
    virtual QString visit_expresion_numero(expresion_numero*e);
    virtual QString visit_expresion_iden(expresion_iden*e);
    virtual QString visit_expresion_caracter(expresion_caracter*e);
    virtual QString visit_expresion_decimal(expresion_decimal*e);
    virtual QString visit_expresion_true(expresion_true*e);
    virtual QString visit_expresion_false(expresion_false*e);
    virtual QString visit_expresion_cadenacomillas(expresion_cadenacomillas*e);

    virtual QString visit_ciclos1(produccion_ciclos1*pd) ;
    virtual QString visit_ciclos2(produccion_ciclos2*pd) ;
    virtual QString visit_ciclos3(produccion_ciclos3*pd) ;
    virtual QString visit_ciclos4(produccion_ciclos4*pd) ;
    virtual QString visit_ciclos5(produccion_ciclos5*pd) ;
    virtual QString visit_ciclos6(produccion_ciclos6*pd) ;
    virtual QString visit_lista_case1(produccion_lista_case1*pd) ;
    virtual QString visit_lista_case2(produccion_lista_case2*pd) ;
    virtual QString visit_lista_case3(produccion_lista_case3*pd) ;
    virtual QString visit_lista_parametros1(produccion_lista_parametros1*pd) ;
    virtual QString visit_lista_parametros2(produccion_lista_parametros2*pd) ;
    virtual QString visit_lista_parametros3(produccion_lista_parametros3*pd) ;
    virtual QString visit_parametro1(produccion_parametro1*pd) ;
    virtual QString visit_declaracion_metodo1(produccion_declaracion_metodo1*pd);
    virtual QString visit_declaracion_metodo2(produccion_declaracion_metodo2*pd);
    virtual QString visit_declaracion_metodo3(produccion_declaracion_metodo3*pd);
    virtual QString visit_declaracion_metodo4(produccion_declaracion_metodo4*pd);

    //nuevo
    virtual QString visit_lista_c1(produccion_lista_corchetes_1*pd);
    virtual QString visit_lista_c2(produccion_lista_corchete_2*pd);
    virtual QString visit_declarador_1(produccion_declarador_1*pd);
    virtual QString visit_declarador_2(produccion_declarador_2*pd);
    //nuevo2
    virtual QString visit_declaracion_variable5(produccion_declaracion_variable5*pd) ;
    virtual QString visit_declaracion_variable6(produccion_declaracion_variable6*pd) ;
    virtual QString visit_expresion_epsilon(expresion_epsilon*pd) ;
    virtual QString visit_declaracion_variable_7(produccion_declaracion_variable7*pd) ;
    virtual QString visit_declaracion_variable_8(produccion_declaracion_variable_8*pd) ;
    virtual QString visit_expresion_vector(expresion_vector*pd) ;
    virtual QString visit_lista_expresion1(produccion_lista_expresion1*pd);
    virtual QString visit_lista_expresion2(produccion_lista_expresion2*pd);
};

#endif // CHEQUEA_TIPOS_1_H
