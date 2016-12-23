/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    numero = 258,
    decimal = 259,
    cadenacomillas = 260,
    caracter = 261,
    iden = 262,
    dosp = 263,
    pcoma = 264,
    coma = 265,
    igual = 266,
    Not = 267,
    mas = 268,
    menos = 269,
    por = 270,
    divi = 271,
    aparen = 272,
    punto = 273,
    cparen = 274,
    acorch = 275,
    ccorch = 276,
    allave = 277,
    cllave = 278,
    potencia = 279,
    menor = 280,
    mayor = 281,
    menorq = 282,
    mayorq = 283,
    esnulo = 284,
    diferente = 285,
    igualigual = 286,
    masigual = 287,
    menosigual = 288,
    masmas = 289,
    menosmenos = 290,
    Or = 291,
    And = 292,
    Nand = 293,
    Nor = 294,
    Xor = 295,
    cierra_lienzo = 296,
    abre_lienzo = 297,
    fin_sentencia = 298,
    doble = 299,
    boolean = 300,
    Char = 301,
    cadena = 302,
    entero = 303,
    TRUE = 304,
    FALSE = 305,
    lienzo = 306,
    arreglo = 307,
    extiende = 308,
    publico = 309,
    privado = 310,
    protegido = 311,
    var = 312,
    conservar = 313,
    defecto = 314,
    si = 315,
    sino = 316,
    comprobar = 317,
    caso = 318,
    para = 319,
    mientras = 320,
    hacer = 321,
    continuar = 322,
    salir = 323,
    pintarp = 324,
    pintaror = 325,
    pintars = 326,
    retorna = 327,
    principal = 328,
    ordenar = 329,
    sumarizar = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
#include "expresion_diferente.h"
#include "expresion_vector.h"
#include "expresion_y.h"
#include "expresion_epsilon.h"
#include "expresion_igual.h"
#include "expresion_or.h"
#include "expresion_por.h"
#include "expresion_por.h"
#include "produccion_declaracion_variable5.h"
#include "produccion_declaracion_variable7.h"
#include "produccion_declaracion_variable_8.h"
#include "expresion_mas.h"
#include "expresion_masmas.h"
#include "expresion_menosmenos.h"
#include "expresion_masigual.h"
#include "expresion_menosigual.h"
#include "expresion_menos.h"
#include "expresion_nor.h"
#include "expresion_mayor.h"
#include "produccion_lista_corchetes_1.h"
#include "produccion_lista_corchete_2.h"
#include "produccion_declarador_1.h"
#include "produccion_declarador_2.h"
#include "expresion_numero.h"
#include "expresion_iden.h"
#include "expresion_decimal.h"
#include "expresion_caracter.h"
#include "expresion_cadenacomillas.h"
#include "expresion_true.h"
#include "expresion_false.h"
#include "expresion_divi.h"

#include "expresion_parentesis.h"
#include "expresion_potencia.h"
#include "expresion_mayorq.h"
#include "expresion_menor.h"
#include "expresion_menoq.h"
#include "expresion_not.h"
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
#include"produccion_declaracion_variable6.h"
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
#include"token_error.h"
#include<QLinkedList>

union YYSTYPE
{


//se especifican los tipo de valores para los no terminales y lo terminales
char TEXT [256];
struct Operador * VAL;
produccion_ini*pi;
produccion_lienzo*pl;
produccion_visibilidad*pv;
produccion_lista_instrucciones*pli;
produccion_extiende*pe;
produccion_declaracion_variable*pdv;
produccion_lista_asignacion*pla;
produccion_instruccion*pins;
produccion_tipo*pt;
produccion_asignacion*pa;
produccion_expresion*pexp;
produccion_ciclos*pc;
produccion_lista_case*plc;
produccion_declaracion_metodo*pdm;
produccion_lista_parametros*plp;
produccion_parametro*pp;
produccion_ordenar*po;
produccion_sumarizar*ps;
produccion_principal*prin;
produccion_pintar_p*pintar;
produccion_pintar_or*por;
produccion_lista_nombre*pln;
produccion_lista_expresion*prlc;
declarador *dec;
lista_corchetes*lc;


};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
