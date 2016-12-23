%option noyywrap
%{
#include "parser.h"
#include <iostream>
#include <QString>
#include"token_error.h"
#include<QLinkedList>
int columna=0;
int linea=0;
static QLinkedList<token_error*>*errores1=new QLinkedList<token_error*>();
QLinkedList<token_error*> *lista_errores(){
    return errores1;
};
%}
comentariolinea ">>"[^\n']*""
letra [a-zñA-ZÑ]
digito [0-9]
identificador ({letra})+({letra}|{digito}|"_")*
caracter [\']([^\"\n]|(\\\"))[\']
comentario "<-"[^'*']*"->"
numero {digito}+
decimal {digito}+[.]+{digito}+
cadenacomillas [\"]([^\"\n]|(\\\"))*[\"]
%%
"="             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return igual; }
[!]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return Not;}
[.]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return punto;}
[+]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return mas; }
[-]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return menos; }
[*]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return por; }
[/]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return divi; }
[(]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return aparen; }
[)]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return cparen; }
"["             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return acorch; }
"]"             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return ccorch; }
[{]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return allave; }
[}]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return cllave; }
"^"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return potencia; }
[<]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return menor; }
"\n"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); linea++;columna=0;}
[>]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return mayor; }
"<="            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return menorq; }
">="            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return mayorq; }
"!&¡"             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return esnulo; }
"!="            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return diferente; }
"=="            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return igualigual; }
"+="            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return masigual; }
"-="            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return menosigual; }
"++"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return masmas; }
"--"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return menosmenos; }
"||"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return Or; }
"!&&"          { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return Nand; }
"&&"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return And; }
"!||"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return Nor; }
"&|"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return Xor; }

"?"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return cierra_lienzo; }
"¿"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return abre_lienzo; }
"$"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return fin_sentencia; }

"doble"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return doble; }
"boolean"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return boolean; }
"caracter"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return Char; }
"cadena"          { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return cadena; }
"entero"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return entero; }
"true"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return TRUE; }
"false"          { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return FALSE; }

"Lienzo"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return lienzo; }
"arreglo"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return arreglo; }
"extiende"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return extiende; }
"publico"          { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return publico; }
"privado"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return privado; }
"defecto"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return defecto; }
"protegido"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return protegido; }
"var"          { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return var; }
"Conservar"             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return conservar; }

"si"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return si; }
"sino"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return sino; }
"comprobar"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return comprobar; }
"caso"          { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return caso; }
"para"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return para; }
"mientras"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return mientras; }
"hacer"          { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return hacer; }
"Continuar"             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return continuar; }
"salir"             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return salir; }

"Pintar_P"          { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return pintarp; }
"Pintar_OR"           { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return pintaror; }
"Pintar_S"            { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return pintars; }
"Principal"          { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return principal; }
"Ordenar"             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return ordenar; }
"retorna"             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return retorna; }
"Sumarizar"             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return sumarizar; }
[,]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return coma; }
[;]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return pcoma; }
[:]             { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return dosp; }
{identificador}        { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return iden; }
{caracter}        { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return caracter; }
{cadenacomillas}        { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return cadenacomillas; }
{numero}        { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return numero; }
{decimal}        { columna=columna+strlen(yylval.TEXT); strcpy(yylval.TEXT, yytext); return decimal; }
{comentario}    { /*Se ignoran*/ }
{comentariolinea}    { /*Se ignoran*/ }
[[:blank:]]     { /*Se ignoran*/ }
.               {
                std::cout <<yytext<<"Error Lexico en la linea"<< linea<<"columna: "<<columna<<std::endl;
                token_error *t=new token_error(yytext,QString::number(linea),QString::number(columna),"error lexico","caracter no permitido");
                errores1->append(t);
                }
%%
