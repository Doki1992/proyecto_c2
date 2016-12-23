#ifndef VISITOR_H
#define VISITOR_H
#include<QString>
#include "expresion_diferente.h"
#include "expresion_vector.h"
#include "expresion_y.h"
#include "expresion_igual.h"
#include "expresion_or.h"
#include "expresion_por.h"
#include "expresion_divi.h"
#include "expresion_mas.h"
#include "expresion_masmas.h"
#include "expresion_menosmenos.h"
#include "expresion_masigual.h"
#include "expresion_menosigual.h"
#include "expresion_menos.h"
#include "expresion_nor.h"
#include "expresion_mayor.h"
#include "produccion_declarador_1.h"
#include "produccion_declarador_2.h"
#include "produccion_declaracion_variable5.h"
#include "produccion_declaracion_variable6.h"
#include "produccion_declaracion_variable7.h"
#include "produccion_declaracion_variable_8.h"
#include "expresion_epsilon.h"
#include "expresion_numero.h"
#include "expresion_iden.h"
#include "produccion_lista_corchete_2.h"
#include "expresion_decimal.h"
#include "expresion_caracter.h"
#include "expresion_cadenacomillas.h"
#include "expresion_true.h"
#include "expresion_false.h"
#include "produccion_lista_corchetes_1.h"
#include "expresion_parentesis.h"
#include "expresion_potencia.h"
#include "expresion_mayorq.h"
#include "expresion_menor.h"
#include "expresion_menoq.h"
#include "expresion_not.h"
#include "expresion_nulo.h"
#include "expresion_xor.h"
#include "expresion_nand.h"
#include"produccion_ordenar1.h"
#include"produccion_sumarizar1.h"
#include"produccion_principal1.h"
#include"produccion_pintar_or1.h"
#include"produccion_pintar_p1.h"
#include"produccion_pintar_s11.h"
#include"produccion_ini1.h"
#include"produccion_ini2.h"
#include"produccion_lienzo1.h"
#include"produccion_lienzo2.h"
#include"produccion_lienzo3.h"
#include"produccion_lienzo4.h"
#include"produccion_lienzo5.h"
#include"produccion_lienzo6.h"
#include"produccion_visibilidad1.h"
#include"produccion_visibilidad2.h"
#include"produccion_visibilidad3.h"
#include"produccion_extiende1.h"
#include"produccion_lista_nombre1.h"
#include"produccion_lista_nombre2.h"
#include"produccion_lista_instrucciones1.h"
#include"produccion_lista_instrucciones2.h"
#include"produccion_declaracion_variable1.h"
#include"produccion_declaracion_variable2.h"
#include"produccion_declaracion_variable3.h"
#include"produccion_declaracion_variable4.h"
#include"produccion_tipo1.h"
#include"produccion_tipo2.h"
#include"produccion_tipo3.h"
#include"produccion_tipo4.h"
#include"produccion_tipo5.h"
#include"produccion_asignacion1.h"
#include"produccion_asignacion2.h"
#include"produccion_lista_asignacion1.h"
#include"produccion_lista_asignacion2.h"
#include"produccion_lista_asignacion3.h"
#include"produccion_lista_asignacion4.h"
#include"produccion_instruccion1.h"
#include"produccion_instruccion2.h"
#include"produccion_instruccion3.h"
#include"produccion_instruccion4.h"
#include"produccion_instruccion5.h"
#include"produccion_instruccion6.h"
#include"produccion_instruccion7.h"
#include"produccion_instruccion8.h"
#include"produccion_instruccion9.h"
#include"produccion_instruccion10.h"
#include"produccion_instruccion11.h"
#include"produccion_instruccion12.h"
#include"produccion_instruccion13.h"
#include"produccion_instruccion14.h"
#include"produccion_ciclos1.h"
#include"produccion_ciclos2.h"
#include"produccion_ciclos3.h"
#include"produccion_ciclos4.h"
#include"produccion_ciclos5.h"
#include"produccion_ciclos6.h"
#include"produccion_lista_case1.h"
#include"produccion_lista_case2.h"
#include"produccion_lista_case3.h"
#include"produccion_lista_parametros1.h"
#include"produccion_lista_parametros2.h"
#include"produccion_lista_parametros3.h"
#include"produccion_parametro1.h"
#include"produccion_declaracion_metodo1.h"
#include"produccion_declaracion_metodo2.h"
#include"produccion_declaracion_metodo3.h"
#include"produccion_declaracion_metodo4.h"
#include"produccion_lista_expresion1.h"
#include"produccion_lista_expresion2.h"
class visitor{
    public:
        virtual QString visit_pintar_s11(produccion_pintar_s11*pd) =0;
        virtual QString visit_pintar_or1(produccion_pintar_or1*pd) =0;
        virtual QString visit_pintar_p1(produccion_pintar_p1*pd) =0;
        virtual QString visit_principal1(produccion_principal1*pd) =0;
        virtual QString visit_ordenar1(produccion_ordenar1*pd) =0;
        virtual QString visit_sumarizar1(produccion_sumarizar1*pd) =0;
        virtual QString visit_ini1(produccion_ini1*pd) =0;
        virtual QString visit_lienzo1(produccion_lienzo1*pd) =0;
        virtual QString visit_lienzo2(produccion_lienzo2*pd) =0;
        virtual QString visit_lienzo3(produccion_lienzo3*pd) =0;
        virtual QString visit_lienzo4(produccion_lienzo4*pd) =0;
        virtual QString visit_lienzo5(produccion_lienzo5*pd) =0;
        virtual QString visit_lienzo6(produccion_lienzo6*pd) =0;
        virtual QString visit_ini2(produccion_ini2*pd) =0;
        virtual QString visit_visibilidad1(produccion_visibilidad1*pd) =0;
        virtual QString visit_visibilidad2(produccion_visibilidad2*pd) =0;
        virtual QString visit_visibilidad3(produccion_visibilidad3*pd) =0;
        virtual QString visit_extiende1(produccion_extiende1*pd) =0;
        virtual QString visit_lista_nombre1(produccion_lista_nombre1*pd) =0;
        virtual QString visit_lista_nombre2(produccion_lista_nombre2*pd) =0;
        virtual QString visit_lista_instrucciones1(produccion_lista_instrucciones1*pd) =0;
        virtual QString visit_lista_instrucciones2(produccion_lista_instrucciones2*pd) =0;
        virtual QString visit_declaracion_variable1(produccion_declaracion_variable1*pd) =0;
        virtual QString visit_declaracion_variable2(produccion_declaracion_variable2*pd) =0;
        virtual QString visit_declaracion_variable3(produccion_declaracion_variable3*pd) =0;
        virtual QString visit_declaracion_variable4(produccion_declaracion_variable4*pd) =0;
        virtual QString visit_tipo1(produccion_tipo1*pd) =0;
        virtual QString visit_tipo2(produccion_tipo2*pd) =0;
        virtual QString visit_tipo3(produccion_tipo3*pd) =0;
        virtual QString visit_tipo4(produccion_tipo4*pd) =0;
        virtual QString visit_tipo5(produccion_tipo5*pd) =0;
        virtual QString visit_asignacion1(produccion_asignacion1*pd) =0;
        virtual QString visit_asignacion2(produccion_asignacion2*pd) =0;
        virtual QString visit_lista_asignacion1(produccion_lista_asignacion1*pd) =0;
        virtual QString visit_lista_asignacion2(produccion_lista_asignacion2*pd) =0;
        virtual QString visit_lista_asignacion3(produccion_lista_asignacion3*pd) =0;
        virtual QString visit_lista_asignacion4(produccion_lista_asignacion4*pd) =0;
        virtual QString visit_instruccion1(produccion_instruccion1*pd)=0;
        virtual QString visit_instruccion2(produccion_instruccion2*pd)=0;
        virtual QString visit_instruccion3(produccion_instruccion3*pd)=0;
        virtual QString visit_instruccion4(produccion_instruccion4*pd)=0;
        virtual QString visit_instruccion5(produccion_instruccion5*pd)=0;
        virtual QString visit_instruccion6(produccion_instruccion6*pd)=0;
        virtual QString visit_instruccion7(produccion_instruccion7*pd)=0;
        virtual QString visit_instruccion8(produccion_instruccion8*pd)=0;
        virtual QString visit_instruccion9(produccion_instruccion9*pd)=0;
        virtual QString visit_instruccion10(produccion_instruccion10*pd)=0;
        virtual QString visit_instruccion11(produccion_instruccion11*pd)=0;
        virtual QString visit_instruccion12(produccion_instruccion12*pd)=0;
        virtual QString visit_instruccion13(produccion_instruccion13*pd)=0;
        virtual QString visit_instruccion14(produccion_instruccion14*pd)=0;
        virtual QString visit_expresion_igual(Expresion_igual*e)=0;
        virtual QString visit_expresion_diferente(expresion_diferente*e)=0;
        virtual QString visit_expresion_y(Expresion_y*e)=0;
        virtual QString visit_expresion_nand(expresion_nand*e)=0;
        virtual QString visit_expresion_or(expresion_or*e)=0;
        virtual QString visit_expresion_xor(expresion_xor*e)=0;
        virtual QString visit_expresion_nor(expresion_nor*e)=0;
        virtual QString visit_expresion_mayor(expresion_mayor*e)=0;
        virtual QString visit_expresion_mayorq(expresion_mayorq*e)=0;
        virtual QString visit_expresion_menor(expresion_menor*e)=0;
        virtual QString visit_expresion_menorq(expresion_menoq*e)=0;
        virtual QString visit_expresion_not(expresion_not*e)=0;
        virtual QString visit_expresion_parentesis(expresion_parentesis*e)=0;
        virtual QString visit_expresion_potencia(expresion_potencia*e)=0;
        virtual QString visit_expresion_mas(expresion_mas*e)=0;
        virtual QString visit_expresion_masmas(expresion_masmas*e)=0;
        virtual QString visit_expresion_menosmenos(expresion_menosmenos*e)=0;
        virtual QString visit_expresion_masigual(expresion_masigual*e)=0;
        virtual QString visit_expresion_menosigual(expresion_menosigual*e)=0;
        virtual QString visit_expresion_menos(expresion_menos*e)=0;
        virtual QString visit_expresion_por(expresion_por*e)=0;
        virtual QString visit_expresion_divi(expresion_divi*e)=0;
        virtual QString visit_expresion_numero(expresion_numero*e)=0;
        virtual QString visit_expresion_iden(expresion_iden*e)=0;
        virtual QString visit_expresion_caracter(expresion_caracter*e)=0;
        virtual QString visit_expresion_decimal(expresion_decimal*e)=0;
        virtual QString visit_expresion_true(expresion_true*e)=0;
        virtual QString visit_expresion_false(expresion_false*e)=0;
        virtual QString visit_expresion_nulo(expresion_nulo*e)=0;
        virtual QString visit_expresion_cadenacomillas(expresion_cadenacomillas*e)=0;

        virtual QString visit_ciclos1(produccion_ciclos1*pd) =0;
        virtual QString visit_ciclos2(produccion_ciclos2*pd) =0;
        virtual QString visit_ciclos3(produccion_ciclos3*pd) =0;
        virtual QString visit_ciclos4(produccion_ciclos4*pd) =0;
        virtual QString visit_ciclos5(produccion_ciclos5*pd) =0;
        virtual QString visit_ciclos6(produccion_ciclos6*pd) =0;
        virtual QString visit_lista_case1(produccion_lista_case1*pd) =0;
        virtual QString visit_lista_case2(produccion_lista_case2*pd) =0;
        virtual QString visit_lista_case3(produccion_lista_case3*pd) =0;
        virtual QString visit_lista_parametros1(produccion_lista_parametros1*pd) =0;
        virtual QString visit_lista_parametros2(produccion_lista_parametros2*pd) =0;
        virtual QString visit_lista_parametros3(produccion_lista_parametros3*pd) =0;
        virtual QString visit_parametro1(produccion_parametro1*pd) =0;
        virtual QString visit_declaracion_metodo1(produccion_declaracion_metodo1*pd) =0;
        virtual QString visit_declaracion_metodo2(produccion_declaracion_metodo2*pd) =0;
        virtual QString visit_declaracion_metodo3(produccion_declaracion_metodo3*pd) =0;
        virtual QString visit_declaracion_metodo4(produccion_declaracion_metodo4*pd) =0;
        //nuevo para reconocimiento de vector
        virtual QString visit_lista_c1(produccion_lista_corchetes_1*pd) =0;
        virtual QString visit_lista_c2(produccion_lista_corchete_2*pd) =0;
        virtual QString visit_declarador_1(produccion_declarador_1*pd) =0;
        virtual QString visit_declarador_2(produccion_declarador_2*pd) =0;
        virtual QString visit_declaracion_variable5(produccion_declaracion_variable5*pd) =0;
        virtual QString visit_declaracion_variable6(produccion_declaracion_variable6*pd) =0;
        virtual QString visit_expresion_epsilon(expresion_epsilon*pd) =0;
        virtual QString visit_declaracion_variable_7(produccion_declaracion_variable7*pd) =0;
        virtual QString visit_declaracion_variable_8(produccion_declaracion_variable_8*pd) =0;
        virtual QString visit_expresion_vector(expresion_vector*pd) =0;
        virtual QString visit_lista_expresion1(produccion_lista_expresion1*pd) =0;
        virtual QString visit_lista_expresion2(produccion_lista_expresion2*pd) =0;
};

#endif // VISITOR_H

