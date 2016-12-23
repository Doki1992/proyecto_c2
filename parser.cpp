/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */


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




# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
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

/* Copy the second part of user declarations.  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1787

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  314

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   327,   327,   329,   330,   332,   333,   334,   335,   336,
     337,   341,   342,   343,   345,   347,   348,   350,   351,   354,
     355,   357,   358,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   375,   376,   380,
     381,   382,   383,   384,   385,   386,   387,   389,   390,   391,
     392,   393,   397,   398,   400,   401,   402,   403,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     439,   440,   441,   442,   443,   444,   446,   447,   448,   450,
     451,   452,   453,   458,   459,   460,   462,   465,   466,   467,
     469,   470,   471
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "numero", "decimal", "cadenacomillas",
  "caracter", "iden", "dosp", "pcoma", "coma", "igual", "Not", "mas",
  "menos", "por", "divi", "aparen", "punto", "cparen", "acorch", "ccorch",
  "allave", "cllave", "potencia", "menor", "mayor", "menorq", "mayorq",
  "esnulo", "diferente", "igualigual", "masigual", "menosigual", "masmas",
  "menosmenos", "Or", "And", "Nand", "Nor", "Xor", "cierra_lienzo",
  "abre_lienzo", "fin_sentencia", "doble", "boolean", "Char", "cadena",
  "entero", "TRUE", "FALSE", "lienzo", "arreglo", "extiende", "publico",
  "privado", "protegido", "var", "conservar", "defecto", "si", "sino",
  "comprobar", "caso", "para", "mientras", "hacer", "continuar", "salir",
  "pintarp", "pintaror", "pintars", "retorna", "principal", "ordenar",
  "sumarizar", "$accept", "START", "INI", "LIENZO", "VISIBILIDAD",
  "EXTIENDE", "LISTA_NOMBRE", "DECLARADOR", "LISTA_CORCHETES",
  "LISTA_INSTRUCCIONES", "INSTRUCCION", "LISTA_EXPRESION",
  "DECLARACION_VARIABLE", "TIPO", "ASIGNACION", "LISTA_ASIGNACION",
  "EXPRESION", "CICLOS", "LISTA_CASE", "DECLARACION_METODO",
  "LISTA_PARAMETROS", "PARAMETRO", "PINTAR_P", "PINTAR_OR", "PINTAR_S",
  "PRINCIPAL", "ORDENAR", "SUMARIZAR", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330
};
# endif

#define YYPACT_NINF -174

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-174)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    43,    29,  -174,  -174,  -174,    92,     3,    55,    11,
    -174,    21,    63,  -174,    87,    28,    28,    28,    65,   -27,
    -174,  -174,  -174,  -174,  -174,     5,    92,  -174,  -174,    91,
      28,    93,  -174,  -174,  -174,  -174,    94,    28,    28,   121,
      28,  -174,  -174,  -174,  1395,  1675,  1675,    28,   962,   123,
      70,   123,    60,  -174,     7,   -23,  1675,   114,  1729,  1423,
     115,    19,  1675,    28,    28,    28,    28,  -174,    28,    28,
      28,    28,    28,    28,    28,    28,    28,  -174,  -174,    28,
      28,    28,    28,    28,  1451,   126,    36,   124,   125,   127,
     128,   106,   104,   109,   132,   133,   136,    28,   138,   140,
     142,   118,   381,  -174,   117,   123,    -2,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,   152,   962,    60,   123,    28,
    -174,   123,    60,   962,   122,    28,  -174,    28,    28,  -174,
      80,    80,    96,    96,   135,    75,    75,    75,    75,  1752,
    1675,    80,    80,  1703,  1729,  1729,  1703,  1703,  -174,   151,
     153,   123,    28,    28,   162,    28,   962,  -174,  -174,    28,
      28,    28,  1057,   154,   164,   167,    92,  -174,  -174,  -174,
     158,  -174,   507,  -174,  -174,  1088,    60,  -174,   542,   962,
    1675,    34,  1675,    28,    92,   159,  1479,  1507,    12,  1535,
     577,  1119,  1150,  1181,  -174,   139,   170,   165,   123,    42,
    -174,    92,  -174,   162,  -174,  -174,   612,  -174,    82,    84,
      92,   141,   144,    28,   145,   112,    28,    28,    28,   962,
     183,   146,  -174,    92,   150,   103,    87,  -174,   156,   155,
     105,   962,   -39,  1029,   962,   178,  1212,  1243,  1274,   647,
     177,  -174,  -174,   962,   163,  -174,   962,   166,   682,   192,
      28,   -24,   162,   717,    28,   196,   199,    28,  -174,   169,
     752,   962,   787,   962,   148,   962,   453,  -174,    28,   107,
    -174,  1563,   203,   204,  1305,  -174,  -174,   822,  -174,   857,
     173,   962,   962,   503,   174,   175,    28,    28,    28,  -174,
    -174,   962,   962,   962,   962,  -174,  1591,  1336,  1619,   892,
     962,   927,   179,    28,   180,  -174,  -174,  -174,  1367,  -174,
      28,  1647,   182,  -174
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    17,     0,    11,    12,    13,     0,     0,     0,     2,
       4,     0,     0,     9,    10,    87,    87,    87,    18,     0,
      51,    47,    50,    49,    48,     0,     0,     1,     3,     0,
      87,     0,    80,    82,    83,    84,    17,    87,    87,     0,
      87,    85,    86,    81,     0,    56,    57,    87,     0,     0,
       0,     0,    41,    16,     0,     0,    55,     0,    69,     0,
       0,     0,    38,    87,    87,    87,    87,    20,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    76,    77,    87,
      87,    87,    87,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,    22,     0,     0,     0,    26,    24,    28,
      27,    29,    35,    31,    30,    14,     0,    44,     0,    87,
      42,     0,    39,     0,     0,    87,    70,    87,    87,    88,
      72,    73,    74,    75,    71,    66,    65,    68,    67,    59,
      58,    78,    79,    62,    60,    61,    64,    63,    19,     0,
       0,     0,    87,    87,     0,    87,     0,    32,    33,    87,
      87,    87,     0,     0,     0,     0,   105,     5,    21,    23,
       0,    25,     0,    43,    15,    53,    46,    40,     0,     0,
      54,     0,    37,    87,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
     104,   105,     7,     0,    45,     6,     0,    89,     0,     0,
     105,     0,     0,    87,     0,     0,    87,    87,    87,     0,
       0,     0,   106,     0,     0,     0,    52,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,   103,     0,     0,    36,     0,     0,     0,     0,
      87,     0,     0,     0,    87,     0,     0,    87,   110,     0,
       0,     0,     0,     0,    91,     0,     0,    95,    87,     0,
      92,     0,     0,     0,     0,   111,   102,     0,   101,     0,
       0,    98,     0,     0,     0,     0,    87,    87,    87,   100,
      99,     0,    97,     0,     0,    94,     0,     0,     0,     0,
      96,     0,     0,    87,     0,    90,    93,   107,     0,   109,
      87,     0,     0,   108
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,  -174,  -174,   208,  -174,   171,   -48,     0,  -174,  -100,
     108,  -125,    38,     1,  -112,     4,   258,  -174,  -174,  -174,
    -173,    -3,  -174,  -174,  -174,  -174,  -174,  -174
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    50,    52,    43,    18,   102,
     103,    61,   104,   105,   120,   106,    62,   107,   251,   108,
     199,   200,   109,   110,   111,   112,   113,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      12,   115,   181,   117,    14,   173,   122,    25,    31,    12,
     177,   209,    36,    14,    36,    48,   172,   267,     1,   123,
     249,   213,    31,   178,   250,    53,    49,    54,   225,   128,
      49,    32,    33,    34,    35,    36,    19,   230,    13,   268,
      37,   171,   129,    36,   128,    38,    39,    13,   101,    53,
      40,    53,   223,   207,    53,    27,   190,    51,   208,   121,
      26,   224,     2,    15,   204,     3,     4,     5,     6,     7,
     118,   119,    29,   176,    30,    16,    17,    41,    42,   206,
      20,    21,    22,    23,    24,    47,   150,   151,    63,    64,
      65,    66,   128,    26,   223,    65,    66,    31,    55,    68,
      57,   228,   101,   229,    68,   170,    74,    75,    76,    77,
      78,    74,   116,   223,    15,   223,   101,    31,   174,   239,
      68,    53,   244,   101,   247,   125,   284,    74,    60,    30,
      36,   248,   127,   149,   253,   166,    20,    21,    22,    23,
      24,   152,   153,   260,   154,   155,   262,   157,   156,   159,
     160,   185,   158,   161,    12,   163,   101,   164,   188,   165,
     169,   277,   118,   279,   179,   281,    74,   198,   183,     1,
     184,   196,   101,   195,   197,   201,   210,   235,   101,   101,
     220,   219,   292,   231,   221,   198,   232,   234,   240,   241,
     101,   299,   243,   300,   301,   254,   259,   246,   222,   245,
     265,   272,   198,    12,   273,   261,   101,   226,   263,   280,
     168,   198,   275,   286,   287,   291,   294,    28,   295,   101,
     242,     0,   307,   309,   198,   313,   124,     0,     0,     0,
       0,   101,     0,     0,   101,     0,     0,     0,     0,   101,
       0,     0,     0,   101,     0,     0,   101,     0,   101,     0,
       0,     0,    12,   101,     0,     0,   269,     0,     0,     0,
     101,   101,   101,   101,     0,   101,     0,     0,     0,     0,
       0,     0,     0,    44,    45,    46,     0,   101,     0,   101,
     168,   101,   101,     0,     0,     0,   168,     0,    56,     0,
       0,   101,   101,   101,   101,    58,    59,     0,   168,   101,
     101,   101,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,   168,     0,     0,     0,     0,     0,
       0,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     138,   139,   140,   141,   142,     0,     0,   143,   144,   145,
     146,   147,     0,     0,     0,     0,     0,   168,     0,     0,
       0,     0,     0,     0,     0,   162,   168,     0,     0,     0,
       0,   168,     0,     0,     0,     0,     0,     0,   168,     0,
     168,     0,     0,     0,     0,     0,     0,   175,     0,     0,
       0,     0,     0,   180,     0,   168,   182,   168,     1,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
     168,     0,     0,     0,     0,     0,     0,   168,   168,   168,
     186,   187,     0,   189,     0,     0,     0,   191,   192,   193,
       0,     0,   167,     0,     0,    20,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     6,    86,
       0,    87,     0,    88,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,     0,     0,     0,
       0,   282,     0,     0,     0,     0,    63,    64,    65,    66,
       0,   233,     0,     0,   236,   237,   238,    68,    69,    70,
      71,    72,     0,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   266,     0,
       0,   293,   271,     0,     1,   274,    63,    64,    65,    66,
       0,     0,     0,     0,     0,    85,   283,    68,    69,    70,
      71,    72,     0,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   296,   297,   298,     0,   202,     1,
       0,    20,    21,    22,    23,    24,     0,     0,     0,     0,
      85,   308,     0,     0,     6,    86,     0,    87,   311,    88,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   205,     1,     0,    20,    21,    22,    23,
      24,     0,     0,     0,     0,    85,     0,     0,     0,     6,
      86,     0,    87,     0,    88,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   215,     1,
       0,    20,    21,    22,    23,    24,     0,     0,     0,     0,
      85,     0,     0,     0,     6,    86,     0,    87,     0,    88,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   227,     1,     0,    20,    21,    22,    23,
      24,     0,     0,     0,     0,    85,     0,     0,     0,     6,
      86,     0,    87,     0,    88,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   258,     1,
       0,    20,    21,    22,    23,    24,     0,     0,     0,     0,
      85,     0,     0,     0,     6,    86,     0,    87,     0,    88,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   264,     1,     0,    20,    21,    22,    23,
      24,     0,     0,     0,     0,    85,     0,     0,     0,     6,
      86,     0,    87,     0,    88,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   270,     1,
       0,    20,    21,    22,    23,    24,     0,     0,     0,     0,
      85,     0,     0,     0,     6,    86,     0,    87,     0,    88,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   276,     1,     0,    20,    21,    22,    23,
      24,     0,     0,     0,     0,    85,     0,     0,     0,     6,
      86,     0,    87,     0,    88,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   278,     1,
       0,    20,    21,    22,    23,    24,     0,     0,     0,     0,
      85,     0,     0,     0,     6,    86,     0,    87,     0,    88,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   289,     1,     0,    20,    21,    22,    23,
      24,     0,     0,     0,     0,    85,     0,     0,     0,     6,
      86,     0,    87,     0,    88,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   290,     1,
       0,    20,    21,    22,    23,    24,     0,     0,     0,     0,
      85,     0,     0,     0,     6,    86,     0,    87,     0,    88,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   305,     1,     0,    20,    21,    22,    23,
      24,     0,     0,     0,     0,    85,     0,     0,     0,     6,
      86,     0,    87,     0,    88,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   306,     1,
       0,    20,    21,    22,    23,    24,     0,     0,     0,     0,
      85,     0,     0,     0,     6,    86,     0,    87,     0,    88,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     0,     0,     0,    20,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      86,     0,    87,     0,    88,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   252,     0,
       0,     0,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,   203,     0,
     194,    63,    64,    65,    66,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,     0,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,   216,
       0,     0,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
     217,     0,     0,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,    68,    69,    70,    71,    72,     0,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,   218,     0,     0,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
       0,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,   255,     0,     0,    63,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,     0,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   256,     0,     0,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,     0,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   257,     0,     0,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,     0,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,   288,     0,     0,    63,    64,
      65,    66,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,     0,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,   303,     0,     0,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,     0,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   310,     0,     0,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    63,    64,
      65,    66,     0,     0,     0,     0,    67,     0,     0,    68,
      69,    70,    71,    72,     0,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    63,    64,    65,    66,
       0,     0,   126,     0,     0,     0,     0,    68,    69,    70,
      71,    72,     0,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    63,    64,    65,    66,     0,     0,
       0,     0,   148,     0,     0,    68,    69,    70,    71,    72,
       0,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    63,    64,    65,    66,     0,     0,   211,     0,
       0,     0,     0,    68,    69,    70,    71,    72,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      63,    64,    65,    66,     0,     0,   212,     0,     0,     0,
       0,    68,    69,    70,    71,    72,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    63,    64,
      65,    66,     0,     0,   214,     0,     0,     0,     0,    68,
      69,    70,    71,    72,     0,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    63,    64,    65,    66,
       0,     0,   285,     0,     0,     0,     0,    68,    69,    70,
      71,    72,     0,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    63,    64,    65,    66,     0,     0,
     302,     0,     0,     0,     0,    68,    69,    70,    71,    72,
       0,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    63,    64,    65,    66,     0,     0,   304,     0,
       0,     0,     0,    68,    69,    70,    71,    72,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      63,    64,    65,    66,     0,     0,   312,     0,     0,     0,
       0,    68,    69,    70,    71,    72,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    63,    64,
      65,    66,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,     0,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,     0,    73,    74,    75,    76,    77,    78,     0,
      80,    81,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,     0,    73,
      74,    75,    76,    77,    78,    63,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,     0,     0,    74,    75,    76,    77,    78
};

static const yytype_int16 yycheck[] =
{
       0,    49,   127,    51,     0,   117,    54,     6,    10,     9,
     122,   184,     7,     9,     7,    42,   116,    41,     7,    42,
      59,     9,    10,   123,    63,    25,    53,    26,   201,    10,
      53,     3,     4,     5,     6,     7,     7,   210,     0,    63,
      12,    43,    23,     7,    10,    17,    18,     9,    48,    49,
      22,    51,    10,    19,    54,     0,   156,    52,   183,    52,
      57,    19,    51,    20,   176,    54,    55,    56,    57,    58,
      10,    11,    51,   121,    11,    32,    33,    49,    50,   179,
      44,    45,    46,    47,    48,    20,    86,    86,    13,    14,
      15,    16,    10,    57,    10,    15,    16,    10,     7,    24,
       7,    19,   102,    19,    24,   105,    31,    32,    33,    34,
      35,    31,    42,    10,    20,    10,   116,    10,   118,   219,
      24,   121,    19,   123,    19,    11,    19,    31,     7,    11,
       7,   231,    17,     7,   234,    17,    44,    45,    46,    47,
      48,    17,    17,   243,    17,    17,   246,    43,    42,    17,
      17,   151,    43,    17,   154,    17,   156,    17,   154,    17,
      43,   261,    10,   263,    42,   265,    31,   166,    17,     7,
      17,     7,   172,    19,     7,    17,    17,    65,   178,   179,
      10,    42,   282,    42,    19,   184,    42,    42,     5,    43,
     190,   291,    42,   293,   294,    17,    19,    42,   198,    43,
       8,     5,   201,   203,     5,    42,   206,   203,    42,    61,
     102,   210,    43,    10,    10,    42,    42,     9,    43,   219,
     223,    -1,    43,    43,   223,    43,    55,    -1,    -1,    -1,
      -1,   231,    -1,    -1,   234,    -1,    -1,    -1,    -1,   239,
      -1,    -1,    -1,   243,    -1,    -1,   246,    -1,   248,    -1,
      -1,    -1,   252,   253,    -1,    -1,   252,    -1,    -1,    -1,
     260,   261,   262,   263,    -1,   265,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    -1,   277,    -1,   279,
     172,   281,   282,    -1,    -1,    -1,   178,    -1,    30,    -1,
      -1,   291,   292,   293,   294,    37,    38,    -1,   190,   299,
     300,   301,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    -1,    -1,   239,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,   248,    -1,    -1,    -1,
      -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,   260,    -1,
     262,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,   125,    -1,   277,   128,   279,     7,   281,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
     292,    -1,    -1,    -1,    -1,    -1,    -1,   299,   300,   301,
     152,   153,    -1,   155,    -1,    -1,    -1,   159,   160,   161,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    60,    -1,    62,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      -1,   213,    -1,    -1,   216,   217,   218,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,
      -1,     8,   254,    -1,     7,   257,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    18,   268,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,   286,   287,   288,    -1,    41,     7,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      18,   303,    -1,    -1,    57,    58,    -1,    60,   310,    62,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,     7,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    57,
      58,    -1,    60,    -1,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,     7,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    57,    58,    -1,    60,    -1,    62,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,     7,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    57,
      58,    -1,    60,    -1,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,     7,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    57,    58,    -1,    60,    -1,    62,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,     7,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    57,
      58,    -1,    60,    -1,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,     7,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    57,    58,    -1,    60,    -1,    62,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,     7,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    57,
      58,    -1,    60,    -1,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,     7,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    57,    58,    -1,    60,    -1,    62,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,     7,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    57,
      58,    -1,    60,    -1,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,     7,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    57,    58,    -1,    60,    -1,    62,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    41,     7,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    57,
      58,    -1,    60,    -1,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    41,     7,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    57,    58,    -1,    60,    -1,    62,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    60,    -1,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,     9,    -1,
      -1,    -1,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    10,    -1,
      43,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    10,
      -1,    -1,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      10,    -1,    -1,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    10,    -1,    -1,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    10,    -1,    -1,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    10,    -1,    -1,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    10,    -1,    -1,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    10,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    10,    -1,    -1,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    10,    -1,    -1,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    13,    14,    15,    16,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    13,    14,    15,    16,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      13,    14,    15,    16,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    13,    14,
      15,    16,    -1,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    13,    14,    15,    16,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    13,    14,    15,    16,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    13,    14,    15,    16,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      13,    14,    15,    16,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    31,    32,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    51,    54,    55,    56,    57,    58,    77,    78,
      79,    80,    83,    88,    91,    20,    32,    33,    84,     7,
      44,    45,    46,    47,    48,    89,    57,     0,    79,    51,
      11,    10,     3,     4,     5,     6,     7,    12,    17,    18,
      22,    49,    50,    83,    92,    92,    92,    20,    42,    53,
      81,    52,    82,    83,    89,     7,    92,     7,    92,    92,
       7,    87,    92,    13,    14,    15,    16,    21,    24,    25,
      26,    27,    28,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    92,    18,    58,    60,    62,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    83,    85,    86,    88,    89,    91,    93,    95,    98,
      99,   100,   101,   102,   103,    82,    42,    82,    10,    11,
      90,    52,    82,    42,    81,    11,    19,    17,    10,    23,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    21,     7,
      83,    89,    17,    17,    17,    17,    42,    43,    43,    17,
      17,    17,    92,    17,    17,    17,    17,    41,    86,    43,
      83,    43,    85,    90,    83,    92,    82,    90,    85,    42,
      92,    87,    92,    17,    17,    83,    92,    92,    91,    92,
      85,    92,    92,    92,    43,    19,     7,     7,    89,    96,
      97,    17,    41,    10,    90,    41,    85,    19,    87,    96,
      17,    19,    19,     9,    19,    41,    10,    10,    10,    42,
      10,    19,    83,    10,    19,    96,    91,    41,    19,    19,
      96,    42,    42,    92,    42,    65,    92,    92,    92,    85,
       5,    43,    97,    42,    19,    43,    42,    19,    85,    59,
      63,    94,     9,    85,    17,    10,    10,    10,    41,    19,
      85,    42,    85,    42,    41,     8,    92,    41,    63,    91,
      41,    92,     5,     5,    92,    43,    41,    85,    41,    85,
      61,    85,     8,    92,    19,    19,    10,    10,    10,    41,
      41,    42,    85,     8,    42,    43,    92,    92,    92,    85,
      85,    85,    19,    10,    19,    41,    41,    43,    92,    43,
      10,    92,    19,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    81,    82,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    93,    93,    93,    93,    93,    94,    94,    94,    95,
      95,    95,    95,    96,    96,    96,    97,    98,    99,   100,
     101,   102,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     5,     6,     6,     7,     1,
       1,     1,     1,     1,     2,     3,     1,     1,     2,     4,
       3,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     1,     6,     3,     1,     4,
       5,     3,     4,     5,     4,     6,     5,     1,     1,     1,
       1,     1,     4,     2,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     5,
      11,     7,     7,    11,     9,     7,     5,     4,     3,     9,
       8,     8,     7,     3,     1,     0,     2,    11,    15,    11,
       6,     7,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    {raiz=(yyvsp[0].pi);}

    break;

  case 3:

    {(yyval.pi)=new produccion_ini1((yyvsp[-1].pi),(yyvsp[0].pl),QString::number(linea));}

    break;

  case 4:

    {(yyval.pi)=new produccion_ini2((yyvsp[0].pl),QString::number(linea));}

    break;

  case 5:

    {(yyval.pl)=new produccion_lienzo1((yyvsp[-3].TEXT),(yyvsp[-1].pli),QString::number(linea));}

    break;

  case 6:

    {(yyval.pl)=new produccion_lienzo2((yyvsp[-5].pv),(yyvsp[-3].TEXT),(yyvsp[-1].pli),QString::number(linea));}

    break;

  case 7:

    {(yyval.pl)=new produccion_lienzo3((yyvsp[-4].TEXT),(yyvsp[-3].pe),(yyvsp[-1].pli),QString::number(linea));}

    break;

  case 8:

    {(yyval.pl)=new produccion_lienzo4((yyvsp[-6].pv),(yyvsp[-4].TEXT),(yyvsp[-3].pe),(yyvsp[-1].pli),QString::number(linea));}

    break;

  case 9:

    {(yyval.pl)=new produccion_lienzo5((yyvsp[0].pdv),QString::number(linea));}

    break;

  case 10:

    {(yyval.pl)=new produccion_lienzo6((yyvsp[0].pla),QString::number(linea));}

    break;

  case 11:

    {(yyval.pv)=new produccion_visibilidad1((yyvsp[0].TEXT),QString::number(linea));}

    break;

  case 12:

    {(yyval.pv)=new produccion_visibilidad2((yyvsp[0].TEXT),QString::number(linea));}

    break;

  case 13:

    {(yyval.pv)=new produccion_visibilidad3((yyvsp[0].TEXT),QString::number(linea));}

    break;

  case 14:

    {(yyval.pe)=new produccion_extiende1((yyvsp[0].pln),QString::number(linea));}

    break;

  case 15:

    {(yyval.pln)=new produccion_lista_nombre1((yyvsp[-2].pln),(yyvsp[0].dec),QString::number(linea));}

    break;

  case 16:

    {(yyval.pln)=new produccion_lista_nombre2((yyvsp[0].dec),QString::number(linea));}

    break;

  case 17:

    {(yyval.dec) = new produccion_declarador_1((yyvsp[0].TEXT),QString::number(linea));}

    break;

  case 18:

    {(yyval.dec) = new produccion_declarador_2((yyvsp[-1].TEXT), (yyvsp[0].lc),QString::number(linea));}

    break;

  case 19:

    {(yyval.lc)= new produccion_lista_corchetes_1((yyvsp[-3].lc),(yyvsp[-1].pexp),QString::number(linea));}

    break;

  case 20:

    {(yyval.lc)= new produccion_lista_corchete_2((yyvsp[-1].pexp),QString::number(linea));}

    break;

  case 21:

    {(yyval.pli)=new produccion_lista_instrucciones1((yyvsp[-1].pli),(yyvsp[0].pins),QString::number(linea));}

    break;

  case 22:

    {(yyval.pli)=new produccion_lista_instrucciones2((yyvsp[0].pins),QString::number(linea));}

    break;

  case 23:

    {(yyval.pins)=new produccion_instruccion1((yyvsp[-1].pdv),QString::number(linea));}

    break;

  case 24:

    {(yyval.pins)=new produccion_instruccion2((yyvsp[0].pdm),QString::number(linea));}

    break;

  case 25:

    {(yyval.pins)=new produccion_instruccion3((yyvsp[-1].pla),QString::number(linea));}

    break;

  case 26:

    {(yyval.pins)=new produccion_instruccion4((yyvsp[0].pc),QString::number(linea));}

    break;

  case 27:

    {(yyval.pins)=new produccion_instruccion5((yyvsp[0].por),QString::number(linea));}

    break;

  case 28:

    {(yyval.pins)=new produccion_instruccion6((yyvsp[0].pintar),QString::number(linea));}

    break;

  case 29:

    {}

    break;

  case 30:

    {(yyval.pins)=new produccion_instruccion8((yyvsp[0].ps),QString::number(linea));}

    break;

  case 31:

    {(yyval.pins)=new produccion_instruccion9((yyvsp[0].po),QString::number(linea));}

    break;

  case 32:

    {(yyval.pins)=new produccion_instruccion10((yyvsp[-1].TEXT),QString::number(linea));}

    break;

  case 33:

    {(yyval.pins)=new produccion_instruccion11((yyvsp[-1].TEXT),QString::number(linea));}

    break;

  case 34:

    {(yyval.pins)=new produccion_instruccion12((yyvsp[-1].pexp),QString::number(linea));}

    break;

  case 35:

    {(yyval.pins)=new produccion_instruccion13((yyvsp[0].prin),QString::number(linea));}

    break;

  case 36:

    {(yyval.pins)=new produccion_instruccion14((yyvsp[-4].TEXT),(yyvsp[-2].prlc),QString::number(linea));}

    break;

  case 37:

    {(yyval.prlc)=new produccion_lista_expresion1((yyvsp[-2].prlc),(yyvsp[0].pexp),QString::number(linea));}

    break;

  case 38:

    {(yyval.prlc)=new produccion_lista_expresion2((yyvsp[0].pexp),QString::number(linea));}

    break;

  case 39:

    {(yyval.pdv)=new produccion_declaracion_variable1((yyvsp[-1].pt),(yyvsp[0].pln),QString::number(linea));}

    break;

  case 40:

    {(yyval.pdv)=new produccion_declaracion_variable2((yyvsp[-2].pt),(yyvsp[-1].pln),(yyvsp[0].pa),QString::number(linea));}

    break;

  case 41:

    {(yyval.pdv)=new produccion_declaracion_variable3((yyvsp[-1].pt),(yyvsp[0].pln),QString::number(linea));}

    break;

  case 42:

    {(yyval.pdv)=new produccion_declaracion_variable4((yyvsp[-2].pt),(yyvsp[-1].pln),(yyvsp[0].pa),QString::number(linea));}

    break;

  case 43:

    {(yyval.pdv)=new produccion_declaracion_variable5((yyvsp[-3].pt),(yyvsp[-1].pln),(yyvsp[0].pa),QString::number(linea));}

    break;

  case 44:

    {(yyval.pdv)=new produccion_declaracion_variable6((yyvsp[-2].pt),(yyvsp[0].pln),QString::number(linea));}

    break;

  case 45:

    {(yyval.pdv)=new produccion_declaracion_variable7((yyvsp[-5].TEXT),(yyvsp[-3].pt),(yyvsp[-1].pln),(yyvsp[0].pa),QString::number(linea));}

    break;

  case 46:

    {(yyval.pdv)=new produccion_declaracion_variable_8((yyvsp[-4].TEXT),(yyvsp[-2].pt),(yyvsp[0].pln),QString::number(linea));}

    break;

  case 47:

    {(yyval.pt)=new produccion_tipo1((yyvsp[0].TEXT),QString::number(linea));}

    break;

  case 48:

    {(yyval.pt)=new produccion_tipo2((yyvsp[0].TEXT),QString::number(linea));}

    break;

  case 49:

    {(yyval.pt)=new produccion_tipo3((yyvsp[0].TEXT),QString::number(linea));}

    break;

  case 50:

    {(yyval.pt)=new produccion_tipo4((yyvsp[0].TEXT),QString::number(linea));}

    break;

  case 51:

    {(yyval.pt)=new produccion_tipo5((yyvsp[0].TEXT),QString::number(linea));}

    break;

  case 52:

    {(yyval.pa)=new produccion_asignacion1((yyvsp[-2].pexp),(yyvsp[0].pla),QString::number(linea));}

    break;

  case 53:

    {(yyval.pa)=new produccion_asignacion2((yyvsp[0].pexp),QString::number(linea));}

    break;

  case 54:

    {(yyval.pla)=new produccion_lista_asignacion1((yyvsp[-4].pla),(yyvsp[-2].TEXT),(yyvsp[0].pexp),QString::number(linea));}

    break;

  case 55:

    {(yyval.pla)=new produccion_lista_asignacion2((yyvsp[-2].dec),(yyvsp[0].pexp),QString::number(linea));}

    break;

  case 56:

    {(yyval.pla)=new produccion_lista_asignacion3((yyvsp[-2].TEXT),(yyvsp[0].pexp),QString::number(linea));}

    break;

  case 57:

    {(yyval.pla)=new produccion_lista_asignacion4((yyvsp[-2].TEXT),(yyvsp[0].pexp),QString::number(linea));}

    break;

  case 58:

    {(yyval.pexp)=new Expresion_igual((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 59:

    {(yyval.pexp)=new expresion_diferente((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 60:

    {(yyval.pexp)=new Expresion_y((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 61:

    {(yyval.pexp)=new expresion_nand((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 62:

    {(yyval.pexp)=new expresion_or((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 63:

    {(yyval.pexp)=new expresion_xor((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 64:

    {(yyval.pexp)=new expresion_nor((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 65:

    {(yyval.pexp)=new expresion_mayor((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 66:

    {(yyval.pexp)=new expresion_menor((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 67:

    {(yyval.pexp)=new expresion_mayorq((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 68:

    {(yyval.pexp)=new expresion_menoq((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 69:

    {(yyval.pexp)=new expresion_not((yyvsp[0].pexp));}

    break;

  case 70:

    {(yyval.pexp)=new expresion_parentesis((yyvsp[-1].pexp));}

    break;

  case 71:

    {(yyval.pexp)=new expresion_potencia((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 72:

    {(yyval.pexp)=new expresion_mas((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 73:

    {(yyval.pexp)=new expresion_menos((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 74:

    {(yyval.pexp)=new expresion_por((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 75:

    {(yyval.pexp)=new expresion_divi((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 76:

    {(yyval.pexp)=new expresion_masmas((yyvsp[-1].pexp));}

    break;

  case 77:

    {(yyval.pexp)=new expresion_menosmenos((yyvsp[-1].pexp));}

    break;

  case 78:

    {(yyval.pexp)=new expresion_masigual((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 79:

    {(yyval.pexp)=new expresion_menosigual((yyvsp[-2].pexp),(yyvsp[0].pexp));}

    break;

  case 80:

    {(yyval.pexp)=new expresion_numero((yyvsp[0].TEXT));}

    break;

  case 81:

    {(yyval.pexp)=new expresion_iden((yyvsp[0].dec));}

    break;

  case 82:

    {(yyval.pexp)=new expresion_decimal((yyvsp[0].TEXT));}

    break;

  case 83:

    {(yyval.pexp)=new expresion_cadenacomillas((yyvsp[0].TEXT));}

    break;

  case 84:

    {(yyval.pexp)=new expresion_caracter((yyvsp[0].TEXT));}

    break;

  case 85:

    {(yyval.pexp)=new expresion_true((yyvsp[0].TEXT));}

    break;

  case 86:

    {(yyval.pexp)=new expresion_false((yyvsp[0].TEXT));}

    break;

  case 87:

    {(yyval.pexp) = new expresion_epsilon();}

    break;

  case 88:

    {(yyval.pexp)=new expresion_vector((yyvsp[-1].prlc));}

    break;

  case 90:

    {(yyval.pc)=new produccion_ciclos1((yyvsp[-8].pexp),(yyvsp[-5].pli),(yyvsp[-1].pli),QString::number(linea));}

    break;

  case 91:

    {(yyval.pc)=new produccion_ciclos2((yyvsp[-4].pexp),(yyvsp[-1].pli),QString::number(linea));}

    break;

  case 92:

    {(yyval.pc)=new produccion_ciclos3((yyvsp[-4].pexp),(yyvsp[-1].pli),QString::number(linea));}

    break;

  case 93:

    {(yyval.pc)=new produccion_ciclos4((yyvsp[-8].pla),(yyvsp[-6].pexp),(yyvsp[-4].pla),(yyvsp[-1].pli),QString::number(linea));}

    break;

  case 94:

    {(yyval.pc)=new produccion_ciclos5((yyvsp[-6].pli),(yyvsp[-2].pexp),QString::number(linea));}

    break;

  case 95:

    {(yyval.pc)=new produccion_ciclos6((yyvsp[-4].pexp),(yyvsp[-1].plc),QString::number(linea));}

    break;

  case 96:

    {(yyval.plc)=new produccion_lista_case1((yyvsp[-4].plc),(yyvsp[-2].pexp),(yyvsp[0].pli),QString::number(linea));}

    break;

  case 97:

    {(yyval.plc)=new produccion_lista_case2((yyvsp[-2].pexp),(yyvsp[0].pli),QString::number(linea));}

    break;

  case 98:

    {(yyval.plc)=new produccion_lista_case3((yyvsp[0].pli),QString::number(linea));}

    break;

  case 99:

    {(yyval.pdm)=new produccion_declaracion_metodo1((yyvsp[-7].pt),(yyvsp[-6].dec),(yyvsp[-4].plp),(yyvsp[-1].pli),QString::number(linea));}

    break;

  case 100:

    {(yyval.pdm)=new produccion_declaracion_metodo2((yyvsp[-7].pt),(yyvsp[-6].dec),(yyvsp[-4].plp),(yyvsp[-1].pli),QString::number(linea));}

    break;

  case 101:

    {(yyval.pdm)=new produccion_declaracion_metodo3((yyvsp[-6].dec),(yyvsp[-4].plp),(yyvsp[-1].pli),QString::number(linea));}

    break;

  case 102:

    {(yyval.pdm)=new produccion_declaracion_metodo4((yyvsp[-6].dec),(yyvsp[-4].plp),(yyvsp[-1].pli),QString::number(linea));}

    break;

  case 103:

    {(yyval.plp)=new produccion_lista_parametros1((yyvsp[-2].plp),(yyvsp[0].pp),QString::number(linea));}

    break;

  case 104:

    {(yyval.plp)=new produccion_lista_parametros2((yyvsp[0].pp),QString::number(linea));}

    break;

  case 105:

    {(yyval.plp)=new produccion_lista_parametros3();}

    break;

  case 106:

    {(yyval.pp)=new produccion_parametro1((yyvsp[-1].pt),(yyvsp[0].dec),QString::number(linea));}

    break;

  case 107:

    {(yyval.pintar)=new produccion_pintar_p1((yyvsp[-8].pexp),(yyvsp[-6].pexp),(yyvsp[-4].TEXT),(yyvsp[-2].pexp),QString::number(linea));}

    break;

  case 108:

    {(yyval.por)=new produccion_pintar_or1((yyvsp[-12].pexp),(yyvsp[-10].pexp),(yyvsp[-8].TEXT),(yyvsp[-6].pexp),(yyvsp[-4].pexp),(yyvsp[-2].pexp),QString::number(linea));}

    break;

  case 110:

    {(yyval.prin)=new produccion_principal1((yyvsp[-1].pli),QString::number(linea));}

    break;

  case 111:

    {(yyval.po)=new produccion_ordenar1((yyvsp[-4].TEXT),(yyvsp[-2].TEXT),QString::number(linea));}

    break;

  case 112:

    {(yyval.ps)=new produccion_sumarizar1((yyvsp[-2].TEXT),QString::number(linea));}

    break;



      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}


