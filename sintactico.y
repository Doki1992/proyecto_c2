%{
#include "scanner.h"//se importa el header del analisis sintactico
#include <iostream> //libreria para imprimir en cosola de C
#include <QString> //libreria para manejo de STRINGS de QT
#include <QHash> //Libreria para manejar HASH TABLES de QT, se usa para la tabla de simbolos
//#include "tablas.h" //clase que contiene los valores de la tabla de simbolos
#include "stdio.h"
#include <QTextEdit> //libreria QTextEdit de QT para poder mostrar el resultado en pantalla
#include "string.h"

//----------------------------------INCLUSION DE HEADERS DE LAS CLASES-----------------------------
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
//---------------------------FIN DE INCLUSION DE HEADERS---------------------------------
//----------------------------INCLUIR LAS CLASES PADRES---------------------------------




//----------------------------FIN INCLUSION DE CLASES PADRES-------------------------------

extern int yylineno; //linea actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern int linea;
extern int columna; //columna actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern char *yytext; //lexema actual donde esta el parser (analisis lexico) lo maneja BISON
QLinkedList<token_error*>*error=new QLinkedList<token_error*>();
nodo *raiz;
int yyerror(const char* mens){
//metodo que se llama al haber un error sintactico
//SE IMPRIME EN CONSOLA EL ERROR
token_error*t=new token_error(yytext,QString::number(linea),QString(columna),"error sintactico",mens);
error->append(t);
std::cout <<mens<<" "<<yytext<<linea<<columna<<std::endl;
return 0;
}
QLinkedList<token_error*> *lista_errores_s(){
    return error;
};

void asigna_lista(QLinkedList<token_error*> *lista){
    error=lista;
}
QTextEdit* salida; //puntero al QTextEdit de salida
void setSalida(QTextEdit* sal) {
//metodo que asigna el valor al QTextEdit de salida
salida=sal;
}
nodo *getRaiz(){
return raiz;
}
void setRaiz(){
raiz=NULL;
}
//QHash <QString, tablas*> tabla_s; //TABLA DE SIMBOLOS
QString tipo_variable="";
struct Operador{
//ESTRUCTURA LA CUAL CONTENDRA LOS TIPOS DE LOS NO TERMINALES PARA HEREDAR VALORES
QString  texto;
int valor;
};

%}
//error-verbose si se especifica la opcion los errores sintacticos son especificados por BISON
%error-verbose

%union{
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
}
//TERMINALES DE TIPO TEXT, SON STRINGS
%token<TEXT> numero
%token<TEXT> decimal
%token<TEXT> cadenacomillas
%token<TEXT> caracter
%token<TEXT> iden
%token<TEXT>  dosp
%token<TEXT>  pcoma
%token<TEXT>  coma
%token<TEXT>  igual
%token<TEXT>  Not
%token<TEXT>  mas
%token<TEXT>  menos
%token<TEXT>  por
%token<TEXT>  divi
%token<TEXT>  aparen
%token<TEXT>  punto
%token<TEXT>  cparen
%token<TEXT>  acorch
%token<TEXT>  ccorch
%token<TEXT>  allave
%token<TEXT>  cllave
%token<TEXT>  potencia
%token<TEXT>  menor
%token<TEXT>  mayor
%token<TEXT>  menorq
%token<TEXT>  mayorq
%token<TEXT>  esnulo
%token<TEXT>  diferente
%token<TEXT>  igualigual
%token<TEXT>  masigual
%token<TEXT>  menosigual
%token<TEXT>  masmas
%token<TEXT>  menosmenos
%token<TEXT>  Or
%token<TEXT>  And
%token<TEXT>  Nand
%token<TEXT>  Nor
%token<TEXT>  Xor
%token<TEXT>  cierra_lienzo
%token<TEXT>  abre_lienzo
%token<TEXT>  fin_sentencia
%token<TEXT>  doble
%token<TEXT>  boolean
%token<TEXT>  Char
%token<TEXT>  cadena
%token<TEXT>  entero
%token<TEXT>  TRUE
%token<TEXT>  FALSE
%token<TEXT>  lienzo
%token<TEXT>  arreglo
%token<TEXT>  extiende
%token<TEXT>  publico
%token<TEXT>  privado
%token<TEXT>  protegido
%token<TEXT>  var
%token<TEXT>  conservar
%token<TEXT>  defecto
%token<TEXT>  si
%token<TEXT>  sino
%token<TEXT>  comprobar
%token<TEXT>  caso
%token<TEXT>  para
%token<TEXT>  mientras
%token<TEXT>  hacer
%token<TEXT>  continuar
%token<TEXT>  salir
%token<TEXT>  pintarp
%token<TEXT>  pintaror
%token<TEXT>  pintars
%token<TEXT>  retorna
%token<TEXT>  principal
%token<TEXT>  ordenar
%token<TEXT>  sumarizar


//NO TERMINALES DE TIPO VAL, POSEEN ATRIBUTOS INT VALOR, Y QSTRING TEXTO
%type<pi>  INI
%type<prin>  PRINCIPAL
%type<pins>  INSTRUCCION
%type<pli>  LISTA_INSTRUCCIONES
%type<pl>  LIENZO
%type<pv>  VISIBILIDAD
%type<pln>  LISTA_NOMBRE
%type<pe>  EXTIENDE
%type<pdv>  DECLARACION_VARIABLE
%type<pdm>  DECLARACION_METODO
%type<pa>  ASIGNACION
%type<pla>  LISTA_ASIGNACION
%type<plc>  LISTA_CASE
%type<pc>  CICLOS
%type<prlc>  LISTA_EXPRESION

%type<pexp>  EXPRESION
%type<pp>  PARAMETRO
%type<plp>  LISTA_PARAMETROS
%type<por>  PINTAR_OR
%type<TEXT>  PINTAR_S
%type<pintar>  PINTAR_P
%type<po>  ORDENAR
%type<ps>  SUMARIZAR
%type<pt>  TIPO
%type<dec>  DECLARADOR
%type<lc>  LISTA_CORCHETES

//LOS NO TERMINALES PUEDEN SER DE DIFERENTE TIPO, LOS TERMINALES SIEMPRE SON STRINGS O NO SE ESPECIFICA TIPO
//PRECEDENCIA DE LOS OPERADORES PARA QUITAR LA AMBIGUEDAD DEN LA GRAMTICA
//%right Not
%left Or Xor Nor
%left And Nand
%left Not esnulo
%left igual diferente
%left mayor menor mayorq menorq
%left masmas menosmenos
%left mas menos menosigual masigual
%left por divi
%left potencia


%%
START:INI{raiz=$1;};

INI: INI LIENZO{$$=new produccion_ini1($1,$2,QString::number(linea));}
    |LIENZO{$$=new produccion_ini2($1,QString::number(linea));};

LIENZO : lienzo iden abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_lienzo1($2,$4,QString::number(linea));}	//sin extens y sin visibilidad
|VISIBILIDAD lienzo iden abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_lienzo2($1,$3,$5,QString::number(linea));}	//sin extens
|lienzo iden EXTIENDE abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_lienzo3($2,$3,$5,QString::number(linea));}	//sin visibilidad
|VISIBILIDAD lienzo iden EXTIENDE abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_lienzo4($1,$3,$4,$6,QString::number(linea));}
|DECLARACION_VARIABLE{$$=new produccion_lienzo5($1,QString::number(linea));}
|LISTA_ASIGNACION{$$=new produccion_lienzo6($1,QString::number(linea));};



VISIBILIDAD: publico{$$=new produccion_visibilidad1($1,QString::number(linea));}
|privado{$$=new produccion_visibilidad2($1,QString::number(linea));}
|protegido{$$=new produccion_visibilidad3($1,QString::number(linea));};

EXTIENDE: extiende LISTA_NOMBRE{$$=new produccion_extiende1($2,QString::number(linea));} ;

LISTA_NOMBRE: LISTA_NOMBRE coma DECLARADOR{$$=new produccion_lista_nombre1($1,$3,QString::number(linea));}
|DECLARADOR{$$=new produccion_lista_nombre2($1,QString::number(linea));};

DECLARADOR: iden {$$ = new produccion_declarador_1($1,QString::number(linea));}
|iden LISTA_CORCHETES {$$ = new produccion_declarador_2($1, $2,QString::number(linea));}


LISTA_CORCHETES: LISTA_CORCHETES acorch EXPRESION ccorch {$$= new produccion_lista_corchetes_1($1,$3,QString::number(linea));}
                 |acorch EXPRESION ccorch {$$= new produccion_lista_corchete_2($2,QString::number(linea));}

LISTA_INSTRUCCIONES: LISTA_INSTRUCCIONES INSTRUCCION{$$=new produccion_lista_instrucciones1($1,$2,QString::number(linea));}
|INSTRUCCION{$$=new produccion_lista_instrucciones2($1,QString::number(linea));};

INSTRUCCION: DECLARACION_VARIABLE fin_sentencia{$$=new produccion_instruccion1($1,QString::number(linea));}
|DECLARACION_METODO{$$=new produccion_instruccion2($1,QString::number(linea));}
|LISTA_ASIGNACION fin_sentencia{$$=new produccion_instruccion3($1,QString::number(linea));}
|CICLOS{$$=new produccion_instruccion4($1,QString::number(linea));}
|PINTAR_OR{$$=new produccion_instruccion5($1,QString::number(linea));}
|PINTAR_P{$$=new produccion_instruccion6($1,QString::number(linea));}
|PINTAR_S{} // esto no sirve
|SUMARIZAR{$$=new produccion_instruccion8($1,QString::number(linea));}
|ORDENAR{$$=new produccion_instruccion9($1,QString::number(linea));}
|continuar fin_sentencia{$$=new produccion_instruccion10($1,QString::number(linea));}
|salir fin_sentencia{$$=new produccion_instruccion11($1,QString::number(linea));}
|retorna EXPRESION fin_sentencia{$$=new produccion_instruccion12($2,QString::number(linea));}
|PRINCIPAL{$$=new produccion_instruccion13($1,QString::number(linea));}
|punto iden aparen LISTA_EXPRESION cparen fin_sentencia{$$=new produccion_instruccion14($2,$4,QString::number(linea));}

LISTA_EXPRESION: LISTA_EXPRESION coma EXPRESION{$$=new produccion_lista_expresion1($1,$3,QString::number(linea));}
                 |EXPRESION{$$=new produccion_lista_expresion2($1,QString::number(linea));}



DECLARACION_VARIABLE:conservar var TIPO LISTA_NOMBRE{$$=new produccion_declaracion_variable1($3,$4,QString::number(linea));}
|conservar var TIPO LISTA_NOMBRE ASIGNACION{$$=new produccion_declaracion_variable2($3,$4,$5,QString::number(linea));}
|var TIPO LISTA_NOMBRE{$$=new produccion_declaracion_variable3($2,$3,QString::number(linea));}
|var TIPO LISTA_NOMBRE ASIGNACION{$$=new produccion_declaracion_variable4($2,$3,$4,QString::number(linea));}
|var TIPO arreglo LISTA_NOMBRE ASIGNACION{$$=new produccion_declaracion_variable5($2,$4,$5,QString::number(linea));}
|var TIPO arreglo LISTA_NOMBRE{$$=new produccion_declaracion_variable6($2,$4,QString::number(linea));}
|conservar var TIPO arreglo LISTA_NOMBRE ASIGNACION{$$=new produccion_declaracion_variable7($1,$3,$5,$6,QString::number(linea));}
|conservar var TIPO arreglo LISTA_NOMBRE{$$=new produccion_declaracion_variable_8($1,$3,$5,QString::number(linea));}

TIPO: boolean{$$=new produccion_tipo1($1,QString::number(linea));}
|entero{$$=new produccion_tipo2($1,QString::number(linea));}
|cadena{$$=new produccion_tipo3($1,QString::number(linea));}
|Char{$$=new produccion_tipo4($1,QString::number(linea));}
|doble{$$=new produccion_tipo5($1,QString::number(linea));};



ASIGNACION: igual EXPRESION coma LISTA_ASIGNACION{$$=new produccion_asignacion1($2,$4,QString::number(linea));}
|igual EXPRESION{$$=new produccion_asignacion2($2,QString::number(linea));};

LISTA_ASIGNACION:LISTA_ASIGNACION coma iden igual EXPRESION{$$=new produccion_lista_asignacion1($1,$3,$5,QString::number(linea));}
|DECLARADOR igual EXPRESION{$$=new produccion_lista_asignacion2($1,$3,QString::number(linea));}
|iden masigual EXPRESION{$$=new produccion_lista_asignacion3($1,$3,QString::number(linea));}
|iden menosigual EXPRESION{$$=new produccion_lista_asignacion4($1,$3,QString::number(linea));};

EXPRESION :EXPRESION igualigual EXPRESION{$$=new Expresion_igual($1,$3);}
                |EXPRESION diferente EXPRESION{$$=new expresion_diferente($1,$3);}
                |EXPRESION And EXPRESION{$$=new Expresion_y($1,$3);}
                |EXPRESION Nand EXPRESION{$$=new expresion_nand($1,$3);}
                |EXPRESION Or EXPRESION{$$=new expresion_or($1,$3);}
                |EXPRESION Xor EXPRESION{$$=new expresion_xor($1,$3);}
                |EXPRESION Nor EXPRESION{$$=new expresion_nor($1,$3);}
                |EXPRESION mayor EXPRESION{$$=new expresion_mayor($1,$3);}
                |EXPRESION menor EXPRESION{$$=new expresion_menor($1,$3);}
                |EXPRESION mayorq EXPRESION{$$=new expresion_mayorq($1,$3);}
                |EXPRESION menorq EXPRESION{$$=new expresion_menoq($1,$3);}
                |Not EXPRESION{$$=new expresion_not($2);}
                |aparen EXPRESION cparen{$$=new expresion_parentesis($2);}
                |EXPRESION potencia EXPRESION{$$=new expresion_potencia($1,$3);}
                |EXPRESION mas EXPRESION{$$=new expresion_mas($1,$3);}
                |EXPRESION menos EXPRESION{$$=new expresion_menos($1,$3);}
                |EXPRESION por EXPRESION{$$=new expresion_por($1,$3);}
                |EXPRESION divi EXPRESION{$$=new expresion_divi($1,$3);}
                |EXPRESION masmas{$$=new expresion_masmas($1);}
                |EXPRESION menosmenos{$$=new expresion_menosmenos($1);}
                |EXPRESION masigual EXPRESION{$$=new expresion_masigual($1,$3);}
                |EXPRESION menosigual EXPRESION{$$=new expresion_menosigual($1,$3);}
                |numero{$$=new expresion_numero($1);}
                |DECLARADOR{$$=new expresion_iden($1);}
                |decimal{$$=new expresion_decimal($1);}
                |cadenacomillas{$$=new expresion_cadenacomillas($1);}
                |caracter{$$=new expresion_caracter($1);}
                |TRUE{$$=new expresion_true($1);}
                |FALSE{$$=new expresion_false($1);}
                |{$$ = new expresion_epsilon();}
                |allave LISTA_EXPRESION cllave{$$=new expresion_vector($2);}
                |punto iden aparen LISTA_EXPRESION cparen


CICLOS : si aparen EXPRESION cparen abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo sino abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_ciclos1($3,$6,$10,QString::number(linea));}
        |si aparen EXPRESION cparen abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_ciclos2($3,$6,QString::number(linea));}
        |mientras aparen EXPRESION cparen abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_ciclos3($3,$6,QString::number(linea));}
        |para aparen LISTA_ASIGNACION pcoma EXPRESION pcoma LISTA_ASIGNACION cparen abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_ciclos4($3,$5,$7,$10,QString::number(linea));}
        |hacer abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo mientras aparen EXPRESION cparen fin_sentencia{$$=new produccion_ciclos5($3,$7,QString::number(linea));}
        |comprobar aparen EXPRESION cparen abre_lienzo LISTA_CASE cierra_lienzo{$$=new produccion_ciclos6($3,$6,QString::number(linea));};

LISTA_CASE : LISTA_CASE caso EXPRESION dosp LISTA_INSTRUCCIONES{$$=new produccion_lista_case1($1,$3,$5,QString::number(linea));}
        |caso EXPRESION dosp LISTA_INSTRUCCIONES{$$=new produccion_lista_case2($2,$4,QString::number(linea));}
        |defecto dosp LISTA_INSTRUCCIONES{$$=new produccion_lista_case3($3,QString::number(linea));};

DECLARACION_METODO: conservar TIPO DECLARADOR aparen LISTA_PARAMETROS cparen abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_declaracion_metodo1($2,$3,$5,$8,QString::number(linea));}
|TIPO DECLARADOR aparen LISTA_PARAMETROS cparen abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_declaracion_metodo2($1,$2,$4,$7,QString::number(linea));}
|conservar DECLARADOR aparen LISTA_PARAMETROS cparen abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_declaracion_metodo3($2,$4,$7,QString::number(linea));}
|DECLARADOR aparen LISTA_PARAMETROS cparen abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_declaracion_metodo4($1,$3,$6,QString::number(linea));}




LISTA_PARAMETROS:LISTA_PARAMETROS coma PARAMETRO{$$=new produccion_lista_parametros1($1,$3,QString::number(linea));}
|PARAMETRO{$$=new produccion_lista_parametros2($1,QString::number(linea));}
|{$$=new produccion_lista_parametros3();};

PARAMETRO: TIPO DECLARADOR{$$=new produccion_parametro1($1,$2,QString::number(linea));}


PINTAR_P: pintarp aparen EXPRESION coma EXPRESION coma cadenacomillas coma EXPRESION cparen fin_sentencia{$$=new produccion_pintar_p1($3,$5,$7,$9,QString::number(linea));};
PINTAR_OR: pintaror aparen EXPRESION coma EXPRESION coma cadenacomillas coma EXPRESION coma EXPRESION coma EXPRESION cparen fin_sentencia{$$=new produccion_pintar_or1($3,$5,$7,$9,$11,$13,QString::number(linea));};
PINTAR_S: pintars aparen EXPRESION coma EXPRESION coma EXPRESION coma EXPRESION  cparen fin_sentencia;

PRINCIPAL:principal aparen cparen abre_lienzo LISTA_INSTRUCCIONES cierra_lienzo{$$=new produccion_principal1($5,QString::number(linea));};
ORDENAR: ordenar aparen iden coma cadenacomillas cparen fin_sentencia{$$=new produccion_ordenar1($3,$5,QString::number(linea));};
SUMARIZAR: sumarizar aparen iden cparen fin_sentencia{$$=new produccion_sumarizar1($3,QString::number(linea));};
%%
