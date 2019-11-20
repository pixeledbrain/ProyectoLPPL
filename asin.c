/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 4 "src/asin.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h"

#line 73 "asin.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "asin.h".  */
#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
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
    STRUCT_ = 258,
    READ_ = 259,
    PRINT_ = 260,
    IF_ = 261,
    ELSE_ = 262,
    WHILE_ = 263,
    TRUE_ = 264,
    FALSE_ = 265,
    INT_ = 266,
    BOOL_ = 267,
    PARA_ = 268,
    PARC_ = 269,
    MAS_ = 270,
    MENOS_ = 271,
    POR_ = 272,
    DIV_ = 273,
    ASIG_ = 274,
    MASASIG_ = 275,
    MENOSASIG_ = 276,
    PORASIG_ = 277,
    DIVASIG_ = 278,
    AND_ = 279,
    OR_ = 280,
    IGU_ = 281,
    DIF_ = 282,
    MAYOR_ = 283,
    MENOR_ = 284,
    MAYORIG_ = 285,
    MENORIG_ = 286,
    MOD_ = 287,
    NEG_ = 288,
    INCRE_ = 289,
    DECRE_ = 290,
    CORA_ = 291,
    CORC_ = 292,
    LLAVA_ = 293,
    LLAVC_ = 294,
    PCOMA_ = 295,
    PUNTO_ = 296,
    CTE_ = 297,
    ID_ = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "src/asin.y" /* yacc.c:355  */

        char *ident;
        int cent;
        REG regi;
        EXP exp;

#line 164 "asin.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 181 "asin.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    51,    60,    61,    65,    66,    70,    79,
      92,   108,   122,   123,   127,   131,   143,   144,   145,   146,
     147,   148,   152,   153,   157,   163,   169,   169,   178,   178,
     188,   189,   193,   194,   228,   271,   318,   320,   337,   338,
     354,   355,   367,   368,   380,   381,   394,   395,   396,   408,
     409,   418,   435,   444,   461,   465,   466,   467,   471,   472,
     473,   474,   475,   479,   480,   484,   485,   489,   490,   491,
     492,   496,   497,   501,   502,   503,   507,   508,   509,   513,
     514
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRUCT_", "READ_", "PRINT_", "IF_",
  "ELSE_", "WHILE_", "TRUE_", "FALSE_", "INT_", "BOOL_", "PARA_", "PARC_",
  "MAS_", "MENOS_", "POR_", "DIV_", "ASIG_", "MASASIG_", "MENOSASIG_",
  "PORASIG_", "DIVASIG_", "AND_", "OR_", "IGU_", "DIF_", "MAYOR_",
  "MENOR_", "MAYORIG_", "MENORIG_", "MOD_", "NEG_", "INCRE_", "DECRE_",
  "CORA_", "CORC_", "LLAVA_", "LLAVC_", "PCOMA_", "PUNTO_", "CTE_", "ID_",
  "$accept", "programa", "$@1", "secuenciaSentencias", "sentencia",
  "declaracion", "tipoSimple", "listaCampos", "instruccion",
  "listaInstrucciones", "instruccionEntradaSalida", "instruccionSeleccion",
  "$@2", "instruccionIteracion", "$@3", "instruccionExpresion",
  "expresion", "expresionLogica", "expresionIgualdad",
  "expresionRelacional", "expresionAditiva", "expresionMultiplicativa",
  "expresionUnaria", "expresionSufija", "constante", "operadorAsignacion",
  "operadorLogico", "operadorIgualdad", "operadorRelacional",
  "operadorAditivo", "operadorMultiplicativo", "operadorUnario",
  "operadorIncremento", YY_NULLPTR
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
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -81

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-81)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -81,    10,   -14,   -81,   118,    15,    30,    47,    56,    58,
     -81,   -81,   -81,   -81,    -4,   -81,   -81,   -81,   -81,   -81,
     131,   -81,   -81,   209,    46,   -81,   -81,   -25,   -81,   -81,
     -81,   -81,   -81,    28,    -9,     1,    67,    49,     5,   -81,
     -81,   -81,    57,    44,    71,    50,    -4,    -4,    -4,    87,
     -81,   -81,   171,   -81,   -81,   -81,   -81,   -81,    -4,    59,
      -4,   -81,   -81,   -81,     6,   -81,   -81,   -81,    57,   -81,
     -81,    57,   -81,   -81,   -81,   -81,    57,   -81,   -81,    57,
     -81,   -81,   -81,    57,   -15,   -81,   -81,    60,     2,    91,
      92,    95,    96,   -81,   -81,   -81,    74,    55,   -81,    -2,
      70,   -81,     1,    67,    49,     5,   -81,    -4,    72,    73,
      75,    76,    77,    85,   -81,   -81,    55,    -4,    98,   105,
     106,   -81,   -81,   108,   109,   -81,   -81,   184,   184,    -4,
     -81,   -81,   110,   -81,   -81,   -81,   107,   -81,   -81,   -81,
     184,   -81
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,     0,     0,
      56,    57,    12,    13,     0,    76,    77,    78,    79,    80,
       0,    31,    55,    52,     0,     4,     6,     0,     7,    18,
      19,    20,    21,     0,    32,    36,    38,    40,    42,    44,
      46,    54,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    22,     0,    58,    59,    60,    61,    62,     0,     0,
       0,    50,     3,     5,     0,    30,    63,    64,     0,    65,
      66,     0,    67,    68,    69,    70,     0,    71,    72,     0,
      73,    74,    75,     0,    52,    47,    48,     0,     0,     0,
       0,     0,     0,    49,    17,    23,     0,    53,    33,     0,
       0,     8,    37,    39,    41,    43,    45,     0,     0,     0,
       0,     0,     0,     0,    26,    28,    51,     0,     0,     0,
       0,    53,    14,     0,     0,    24,    25,     0,     0,     0,
      35,     9,     0,    51,    11,    15,     0,    29,    34,    10,
       0,    27
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -81,   -81,   -81,   -81,   121,   -81,   -40,   -81,   -20,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -13,   -81,    64,    83,
      79,    78,   -39,   -81,    63,   -80,   -81,   -81,   -81,   -81,
     -81,   -81,   -21
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    24,    25,    26,    27,    88,    28,    52,
      29,    30,   127,    31,   128,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    60,    68,    71,    76,    79,
      83,    42,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    49,    61,    85,    87,    10,    11,    10,    11,    14,
       3,    15,    16,    12,    13,    66,    67,   117,    64,    18,
      19,   107,    80,    81,     4,    99,   108,    69,    70,    17,
      18,    19,    95,    90,    91,    92,   129,    82,    22,    23,
      22,   110,   100,    45,   106,    96,   101,    98,   111,     5,
       6,     7,     8,    44,     9,    10,    11,    12,    13,    14,
      46,    15,    16,    61,    77,    78,    10,    11,    65,    47,
      14,    48,    15,    16,    53,    54,    55,    56,    57,    17,
      18,    19,    12,    13,    20,    62,    21,    86,    22,    23,
      17,    18,    19,    89,   120,    72,    73,    74,    75,    22,
      84,    93,    97,   109,   130,   112,   113,   136,   137,   114,
     115,   116,   119,   122,   140,   121,   138,   125,   123,   124,
     141,     5,     6,     7,     8,   126,     9,    10,    11,    12,
      13,    14,   102,    15,    16,     6,     7,     8,   131,     9,
      10,    11,   132,   133,    14,    63,    15,    16,   134,   135,
     139,    17,    18,    19,   103,   104,    20,   105,    21,     0,
      22,    23,   118,     0,    17,    18,    19,     0,     0,    20,
      50,    21,     0,    22,    23,     6,     7,     8,     0,     9,
      10,    11,     0,     0,    14,     0,    15,    16,     6,     7,
       8,     0,     9,    10,    11,     0,     0,    14,     0,    15,
      16,     0,     0,     0,    17,    18,    19,     0,     0,    20,
      94,    21,     0,    22,    23,     0,     0,    17,    18,    19,
       0,     0,    20,     0,    21,     0,    22,    23,    53,    54,
      55,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,    58,     0,     0,     0,     0,
      59
};

static const yytype_int16 yycheck[] =
{
      20,    14,    23,    42,    44,     9,    10,     9,    10,    13,
       0,    15,    16,    11,    12,    24,    25,    97,    43,    34,
      35,    36,    17,    18,    38,    19,    41,    26,    27,    33,
      34,    35,    52,    46,    47,    48,   116,    32,    42,    43,
      42,    39,    36,    13,    83,    58,    40,    60,    88,     3,
       4,     5,     6,    38,     8,     9,    10,    11,    12,    13,
      13,    15,    16,    84,    15,    16,     9,    10,    40,    13,
      13,    13,    15,    16,    19,    20,    21,    22,    23,    33,
      34,    35,    11,    12,    38,    39,    40,    43,    42,    43,
      33,    34,    35,    43,   107,    28,    29,    30,    31,    42,
      43,    14,    43,    43,   117,    14,    14,   127,   128,    14,
      14,    37,    42,    40,     7,    43,   129,    40,    43,    43,
     140,     3,     4,     5,     6,    40,     8,     9,    10,    11,
      12,    13,    68,    15,    16,     4,     5,     6,    40,     8,
       9,    10,    37,    37,    13,    24,    15,    16,    40,    40,
      40,    33,    34,    35,    71,    76,    38,    79,    40,    -1,
      42,    43,    99,    -1,    33,    34,    35,    -1,    -1,    38,
      39,    40,    -1,    42,    43,     4,     5,     6,    -1,     8,
       9,    10,    -1,    -1,    13,    -1,    15,    16,     4,     5,
       6,    -1,     8,     9,    10,    -1,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,    38,
      39,    40,    -1,    42,    43,    -1,    -1,    33,    34,    35,
      -1,    -1,    38,    -1,    40,    -1,    42,    43,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    -1,    -1,    -1,    -1,
      41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    46,     0,    38,     3,     4,     5,     6,     8,
       9,    10,    11,    12,    13,    15,    16,    33,    34,    35,
      38,    40,    42,    43,    47,    48,    49,    50,    52,    54,
      55,    57,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    75,    76,    38,    13,    13,    13,    13,    60,
      39,    52,    53,    19,    20,    21,    22,    23,    36,    41,
      69,    76,    39,    48,    43,    40,    24,    25,    70,    26,
      27,    71,    28,    29,    30,    31,    72,    15,    16,    73,
      17,    18,    32,    74,    43,    66,    43,    50,    51,    43,
      60,    60,    60,    14,    39,    52,    60,    43,    60,    19,
      36,    40,    62,    63,    64,    65,    66,    36,    41,    43,
      39,    50,    14,    14,    14,    14,    37,    69,    68,    42,
      60,    43,    40,    43,    43,    40,    40,    56,    58,    69,
      60,    40,    37,    37,    40,    40,    52,    52,    60,    40,
       7,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    46,    45,    47,    47,    48,    48,    49,    49,
      49,    49,    50,    50,    51,    51,    52,    52,    52,    52,
      52,    52,    53,    53,    54,    54,    56,    55,    58,    57,
      59,    59,    60,    60,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    66,    67,
      67,    67,    67,    67,    67,    68,    68,    68,    69,    69,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    72,
      72,    73,    73,    74,    74,    74,    75,    75,    75,    76,
      76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     1,     2,     1,     1,     3,     5,
       6,     6,     1,     1,     3,     4,     2,     3,     1,     1,
       1,     1,     1,     2,     5,     5,     0,     8,     0,     6,
       2,     1,     1,     3,     6,     5,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     2,     2,     3,
       2,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 51 "src/asin.y" /* yacc.c:1646  */
    {dvar = 0;}
#line 1390 "asin.c" /* yacc.c:1646  */
    break;

  case 3:
#line 52 "src/asin.y" /* yacc.c:1646  */
    {
                                        if(verTDS){
                                                verTdS();
                                        }
                                }
#line 1400 "asin.c" /* yacc.c:1646  */
    break;

  case 8:
#line 71 "src/asin.y" /* yacc.c:1646  */
    {
                                        if(insTdS((yyvsp[-1].ident), (yyvsp[-2].cent), dvar, -1) == 0){
                                                //Ya se ha declarado
                                                yyerror(ERROR_ID_YA_DECLARADO);
                                        } else {
                                                dvar += TALLA_TIPO_SIMPLE;
                                        }
                                }
#line 1413 "asin.c" /* yacc.c:1646  */
    break;

  case 9:
#line 80 "src/asin.y" /* yacc.c:1646  */
    {
                                        if((yyvsp[-4].cent) != (yyvsp[-1].exp).tipo){
                                                //Tipo declarado != tipo constante
                                                yyerror(ERROR_TIPOS_DECLARACION);
                                        } else if(insTdS((yyvsp[-3].ident), (yyvsp[-4].cent), dvar, -1) == 0){
                                                //Ya se ha declarado
                                                yyerror(ERROR_ID_YA_DECLARADO);
                                        } else {
                                                //Falta asignar
                                                dvar += TALLA_TIPO_SIMPLE;
                                        }
                                }
#line 1430 "asin.c" /* yacc.c:1646  */
    break;

  case 10:
#line 93 "src/asin.y" /* yacc.c:1646  */
    {

                                        

                                        if((yyvsp[-2].cent) <= 0){
                                                yyerror(ERROR_TALLA_ARRAY);
                                        } else{
                                                int ref = insTdA((yyvsp[-5].cent),(yyvsp[-2].cent));
                                                if(!insTdS((yyvsp[-4].ident),T_ARRAY,dvar,ref)){
                                                        yyerror(ERROR_ID_YA_DECLARADO);
                                                } else {
                                                        dvar += TALLA_TIPO_SIMPLE * (yyvsp[-2].cent);
                                                }
                                        }
                                }
#line 1450 "asin.c" /* yacc.c:1646  */
    break;

  case 11:
#line 109 "src/asin.y" /* yacc.c:1646  */
    {
                                        if(!insTdS((yyvsp[-1].ident), T_RECORD, dvar, (yyvsp[-3].regi).ref)){
                                                //Fallo al insertar
                                                yyerror(ERROR_ID_YA_DECLARADO);
                                        }
                                        else{
                                                dvar += (yyvsp[-3].regi).talla;
                                        }

                                }
#line 1465 "asin.c" /* yacc.c:1646  */
    break;

  case 12:
#line 122 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = T_ENTERO;}
#line 1471 "asin.c" /* yacc.c:1646  */
    break;

  case 13:
#line 123 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = T_LOGICO;}
#line 1477 "asin.c" /* yacc.c:1646  */
    break;

  case 14:
#line 127 "src/asin.y" /* yacc.c:1646  */
    { 
                                        (yyval.regi).ref = insTdR(-1,(yyvsp[-1].ident),(yyvsp[-2].cent),0);
                                        (yyval.regi).talla = TALLA_TIPO_SIMPLE;
                                }
#line 1486 "asin.c" /* yacc.c:1646  */
    break;

  case 15:
#line 131 "src/asin.y" /* yacc.c:1646  */
    {
                                int ref = insTdR((yyvsp[-3].regi).ref,(yyvsp[-1].ident),(yyvsp[-2].cent),(yyvsp[-3].regi).talla);
                                if(ref == -1){ yyerror(ERROR_CAMPO_YA_DECLARADO);}
                                else{
                                        (yyval.regi).ref = ref;
                                        (yyval.regi).talla = (yyvsp[-3].regi).talla + TALLA_TIPO_SIMPLE;
                                }

                }
#line 1500 "asin.c" /* yacc.c:1646  */
    break;

  case 24:
#line 157 "src/asin.y" /* yacc.c:1646  */
    { SIMB simb = obtTdS((yyvsp[-2].ident));
                                         if(simb.tipo == T_ERROR){ yyerror (ERROR_VAR_NO_DECLARADA);}
                                         else {
                                                if(simb.tipo != T_ENTERO){yyerror ("El argumento del Read debe ser entero");}
                                              }
                                        }
#line 1511 "asin.c" /* yacc.c:1646  */
    break;

  case 25:
#line 163 "src/asin.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].exp).tipo != T_ENTERO){
                                                yyerror("El argumento del print debe ser un entero");}
                                              }
#line 1519 "asin.c" /* yacc.c:1646  */
    break;

  case 26:
#line 169 "src/asin.y" /* yacc.c:1646  */
    {
                                                        if((yyvsp[-1].exp).tipo != T_LOGICO && (yyvsp[-1].exp).tipo != T_ERROR){
                                                                yyerror("Error, tipo no lógico como condición en IF ELSE");
                                                        }
                                                }
#line 1529 "asin.c" /* yacc.c:1646  */
    break;

  case 28:
#line 178 "src/asin.y" /* yacc.c:1646  */
    {
                                                        if((yyvsp[-1].exp).tipo != T_LOGICO && (yyvsp[-1].exp).tipo != T_ERROR){
                                                                yyerror("Error, tipo no lógico como condición en WHILE");
                                                        }
                                                }
#line 1539 "asin.c" /* yacc.c:1646  */
    break;

  case 32:
#line 193 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).pos = (yyvsp[0].exp).pos;}
#line 1545 "asin.c" /* yacc.c:1646  */
    break;

  case 33:
#line 195 "src/asin.y" /* yacc.c:1646  */
    {
        							(yyval.exp).tipo = T_ERROR;
        							if((yyvsp[0].exp).tipo != T_ERROR){
	        							SIMB simb = obtTdS((yyvsp[-2].ident));
	        							if(simb.tipo == T_ERROR){
	        								yyerror(ERROR_VAR_NO_DECLARADA);
	        							} else if(simb.tipo != (yyvsp[0].exp).tipo) {
	        								yyerror("Tipo inconsistente en expresión de asignación");
	        							} else if( (yyvsp[-1].cent) == ASIG){
	        								//Asignar
	        							} else if((yyvsp[0].exp).tipo != T_ENTERO){
	        								yyerror("Tipo no valido para asignacion con operación aritmética");
	        							} else if(1){ //COMPROBAMOS SI ESTA DECLARADA LA VARIABLE
	        								//switch para cada tipo de operadorAsignacion excepto ASIG
	        								switch((yyvsp[-1].cent)){
	        									case MASASIG:
	        										//Asignar sumando
	        										break;
	        									case MENOSASIG:
	        										//Asignar restando
	        										break;
	        									case PORASIG:
	        										//Asignar multiplicando
	        										break;
	        									case DIVASIG:
	        										//Asignar dividiendo
	        										break;
	        								}
	        							} else {
	        								yyerror(ERROR_VAR_NO_INI);
	        							}
	        						}
        						}
#line 1583 "asin.c" /* yacc.c:1646  */
    break;

  case 34:
#line 229 "src/asin.y" /* yacc.c:1646  */
    {
        							(yyval.exp).tipo = T_ERROR;
        							if((yyvsp[0].exp).tipo != T_ERROR){
	        							SIMB simb = obtTdS((yyvsp[-5].ident));
	        							if(simb.tipo == T_ERROR){
	        								yyerror("Estructura no declarada");
	        							} else {
        									if(simb.tipo == T_ARRAY){
	        									DIM dim = obtTdA(simb.ref);
	        									if(dim.telem == T_ERROR){
	        										yyerror("Error de array");
				    							} else if((yyvsp[-3].exp).tipo != T_ENTERO){
				    								yyerror("Se debe acceder al array con un entero");
				    							} else if(dim.telem != (yyvsp[0].exp).tipo) {
				    								yyerror("Tipo inconsistente en expresión de asignación");
				    							} else if( (yyvsp[-1].cent) == ASIG){
				    								//Asignar
				    							} else if(1){ //COMPROBAMOS SI ESTA DECLARADA LA VARIABLE
				    								//switch para cada tipo de operadorAsignacion excepto ASIG
				    								switch((yyvsp[-1].cent)){
				    									case MASASIG:
				    										//Asignar sumando
				    										break;
				    									case MENOSASIG:
				    										//Asignar restando
				    										break;
				    									case PORASIG:
				    										//Asignar multiplicando
				    										break;
				    									case DIVASIG:
				    										//Asignar dividiendo
				    										break;
				    								}
				    							} else {
				    								yyerror(ERROR_VAR_NO_INI);
				    							}
				    						} else {
				    							yyerror("Acceso vector sobre una variable no array");
				    						}
        								}
	        						}	
        						}
#line 1630 "asin.c" /* yacc.c:1646  */
    break;

  case 35:
#line 272 "src/asin.y" /* yacc.c:1646  */
    {
        							(yyval.exp).tipo = T_ERROR;
        							if((yyvsp[0].exp).tipo != T_ERROR){
	        							SIMB simb = obtTdS((yyvsp[-4].ident));
	        							if(simb.tipo == T_ERROR){
	        								yyerror("Registro no declarado");
	        							} else {
        									if(simb.tipo == T_RECORD){
	        									CAMP camp = obtTdR(simb.ref,(yyvsp[-2].ident));
	        									if(camp.tipo == T_ERROR){
	        										yyerror("Error campo no existente");
				    							} else if(camp.tipo != (yyvsp[0].exp).tipo){
				    								yyerror("Inconsistencia de tipos en asignacion en campo");
				    							} else if( (yyvsp[-1].cent) == ASIG){
				    								//Asignar
				    							} else if((yyvsp[0].exp).tipo != T_ENTERO){
			        								yyerror("Tipo no valido para asignacion con operación aritmética");
			        							} else if(1){ //COMPROBAMOS SI ESTA DECLARADA LA VARIABLE
				    								//switch para cada tipo de operadorAsignacion excepto ASIG
				    								switch((yyvsp[-1].cent)){
				    									case MASASIG:
				    										//Asignar sumando
				    										break;
				    									case MENOSASIG:
				    										//Asignar restando
				    										break;
				    									case PORASIG:
				    										//Asignar multiplicando
				    										break;
				    									case DIVASIG:
				    										//Asignar dividiendo
				    										break;
				    								}
				    							} else {
				    								yyerror(ERROR_VAR_NO_INI);
				    							}
				    						} else {
				    							yyerror("Acceso como estructura de una variable no estructura.");
				    						}
        								}
	        						}
        						}
#line 1677 "asin.c" /* yacc.c:1646  */
    break;

  case 36:
#line 319 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[0].exp);}
#line 1683 "asin.c" /* yacc.c:1646  */
    break;

  case 37:
#line 321 "src/asin.y" /* yacc.c:1646  */
    {
                                        (yyval.exp).tipo = T_ERROR;
                                        if ((yyvsp[-2].exp).tipo != T_ERROR && (yyvsp[0].exp).tipo != T_ERROR){
                                                if ((yyvsp[-2].exp).tipo != (yyvsp[0].exp).tipo){
                                                        yyerror("No coinciden los tipos del operador lógico");
                                                } else if (!((yyvsp[-2].exp).tipo == T_LOGICO && (yyvsp[0].exp).tipo == T_LOGICO) ){
                                                        yyerror("Error de tipos en expresión lógica");
                                                } else {
                                                        (yyval.exp).tipo = T_LOGICO;
                                                }
                                        }
                                }
#line 1700 "asin.c" /* yacc.c:1646  */
    break;

  case 38:
#line 337 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[0].exp);}
#line 1706 "asin.c" /* yacc.c:1646  */
    break;

  case 39:
#line 339 "src/asin.y" /* yacc.c:1646  */
    {
                                        (yyval.exp).tipo = T_ERROR;
                                        if ((yyvsp[-2].exp).tipo != T_ERROR && (yyvsp[0].exp).tipo != T_ERROR){
                                                if ((yyvsp[-2].exp).tipo != (yyvsp[0].exp).tipo){
                                                        yyerror("No coinciden los tipos de la igualdad");
                                                } else if (!((yyvsp[-2].exp).tipo == (yyvsp[0].exp).tipo && ((yyvsp[-2].exp).tipo == T_LOGICO || (yyvsp[-2].exp).tipo ==T_ENTERO)) ){
                                                        yyerror("Error de tipos en la igualdad");
                                                } else {
                                                        (yyval.exp).tipo = T_LOGICO;
                                                }
                                        }
                                }
#line 1723 "asin.c" /* yacc.c:1646  */
    break;

  case 40:
#line 354 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[0].exp);}
#line 1729 "asin.c" /* yacc.c:1646  */
    break;

  case 41:
#line 356 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = T_ERROR;
                 if((yyvsp[0].exp).tipo != T_ERROR && (yyvsp[-2].exp).tipo != T_ERROR){
                         if (!((yyvsp[-2].exp).tipo == T_ENTERO && (yyvsp[0].exp).tipo == T_ENTERO)){
                                 yyerror("Los tipos de una operacion relacional deben ser enteros");
                         }
                         else {(yyval.exp).tipo = T_LOGICO;}
                 }
                }
#line 1742 "asin.c" /* yacc.c:1646  */
    break;

  case 42:
#line 367 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[0].exp);}
#line 1748 "asin.c" /* yacc.c:1646  */
    break;

  case 43:
#line 369 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = T_ERROR;
                 if((yyvsp[0].exp).tipo != T_ERROR && (yyvsp[-2].exp).tipo != T_ERROR){
                         if (!((yyvsp[-2].exp).tipo == T_ENTERO && (yyvsp[0].exp).tipo == T_ENTERO)){
                                 yyerror("Los tipos de una operacion aditiva deben ser enteros");
                         }
                         else {(yyval.exp).tipo = (yyvsp[-2].exp).tipo;}
                 }
                }
#line 1761 "asin.c" /* yacc.c:1646  */
    break;

  case 44:
#line 380 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[0].exp);}
#line 1767 "asin.c" /* yacc.c:1646  */
    break;

  case 45:
#line 382 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = T_ERROR;
                  if((yyvsp[0].exp).tipo != T_ERROR && (yyvsp[-2].exp).tipo != T_ERROR){
                        if (!((yyvsp[-2].exp).tipo == T_ENTERO && (yyvsp[0].exp).tipo == T_ENTERO)){
                                    yyerror("Los tipos de una operacion multiplicativa deben de ser enteros");
                                } else {
                                    (yyval.exp).tipo = (yyvsp[-2].exp).tipo;
                                }
                            }
                }
#line 1781 "asin.c" /* yacc.c:1646  */
    break;

  case 46:
#line 394 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[0].exp);}
#line 1787 "asin.c" /* yacc.c:1646  */
    break;

  case 47:
#line 395 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp).tipo = (yyvsp[0].exp).tipo;}
#line 1793 "asin.c" /* yacc.c:1646  */
    break;

  case 48:
#line 396 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp).tipo = T_ERROR;
                                        SIMB simb = obtTdS((yyvsp[0].ident));
                                        if (simb.tipo == T_ERROR){yyerror("Objeto no declarado");}
                                        else if (simb.tipo == T_ENTERO){ 
                                                 	(yyval.exp).tipo = simb.tipo;
                                                } else {
                                                	yyerror("Operacion unaria debe ser aplicada a un entero");
                                                }
                                        }
#line 1807 "asin.c" /* yacc.c:1646  */
    break;

  case 49:
#line 408 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[-1].exp);}
#line 1813 "asin.c" /* yacc.c:1646  */
    break;

  case 50:
#line 409 "src/asin.y" /* yacc.c:1646  */
    {      (yyval.exp).tipo = T_ERROR;
                                        SIMB simb = obtTdS((yyvsp[-1].ident));
                                        if (simb.tipo == T_ERROR){yyerror("Objeto no declarado");}
                                        else{
                                                (yyval.exp).tipo = simb.tipo;
                                        }
                        

        }
#line 1827 "asin.c" /* yacc.c:1646  */
    break;

  case 51:
#line 418 "src/asin.y" /* yacc.c:1646  */
    {   (yyval.exp).tipo = T_ERROR;
                                        SIMB simb = obtTdS((yyvsp[-3].ident));
                                        if (simb.tipo == T_ERROR) {yyerror("Array no declarado");}
                                        else {
                                                if(simb.tipo == T_ARRAY){
                                                        if((yyvsp[-1].exp).tipo == T_ENTERO){
                                                                DIM arr = obtTdA(simb.ref);
                                                                if (arr.telem == T_ERROR) {yyerror("Array no declarado");}
                                                                else {(yyval.exp).tipo = arr.telem;}
                                                        }

                                                }else yyerror("Variable no es un array");
                                        }
                                 
                                     

                                }
#line 1849 "asin.c" /* yacc.c:1646  */
    break;

  case 52:
#line 435 "src/asin.y" /* yacc.c:1646  */
    {
                (yyval.exp).tipo = T_ERROR;
                SIMB sim = obtTdS((yyvsp[0].ident));
                if(sim.tipo == T_ERROR) {yyerror("Objeto no declarado");}
                else {
                        (yyval.exp).tipo = sim.tipo;
                }

                }
#line 1863 "asin.c" /* yacc.c:1646  */
    break;

  case 53:
#line 444 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = T_ERROR;
                            SIMB simb = obtTdS((yyvsp[-2].ident));
                            if (simb.tipo == T_ERROR) {yyerror("Estructura no declarado");}
                            else{
                                if (simb.tipo == T_RECORD){
                                        CAMP simb2 = obtTdR(simb.ref, (yyvsp[0].ident));
                                        if (simb2.tipo == T_ERROR){yyerror("Nombre de registro invalido");}
                                        else{
                                                (yyval.exp).tipo = simb2.tipo;
                                        }

                                }
                                else {yyerror("Objeto no de tipo registro"); }  
                            }


                        }
#line 1885 "asin.c" /* yacc.c:1646  */
    break;

  case 54:
#line 461 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp).tipo = (yyvsp[0].exp).tipo;}
#line 1891 "asin.c" /* yacc.c:1646  */
    break;

  case 55:
#line 465 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp).tipo = T_ENTERO;}
#line 1897 "asin.c" /* yacc.c:1646  */
    break;

  case 56:
#line 466 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp).tipo = T_LOGICO;}
#line 1903 "asin.c" /* yacc.c:1646  */
    break;

  case 57:
#line 467 "src/asin.y" /* yacc.c:1646  */
    {(yyval.exp).tipo = T_LOGICO;}
#line 1909 "asin.c" /* yacc.c:1646  */
    break;

  case 58:
#line 471 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) =ASIG;}
#line 1915 "asin.c" /* yacc.c:1646  */
    break;

  case 59:
#line 472 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) =MASASIG;}
#line 1921 "asin.c" /* yacc.c:1646  */
    break;

  case 60:
#line 473 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) =MENOSASIG;}
#line 1927 "asin.c" /* yacc.c:1646  */
    break;

  case 61:
#line 474 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) =PORASIG;}
#line 1933 "asin.c" /* yacc.c:1646  */
    break;

  case 62:
#line 475 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) =DIVASIG;}
#line 1939 "asin.c" /* yacc.c:1646  */
    break;

  case 63:
#line 479 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = AND;}
#line 1945 "asin.c" /* yacc.c:1646  */
    break;

  case 64:
#line 480 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = OR;}
#line 1951 "asin.c" /* yacc.c:1646  */
    break;

  case 65:
#line 484 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = IGU;}
#line 1957 "asin.c" /* yacc.c:1646  */
    break;

  case 66:
#line 485 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = DIF;}
#line 1963 "asin.c" /* yacc.c:1646  */
    break;

  case 67:
#line 489 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = MAYOR;}
#line 1969 "asin.c" /* yacc.c:1646  */
    break;

  case 68:
#line 490 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = MENOR;}
#line 1975 "asin.c" /* yacc.c:1646  */
    break;

  case 69:
#line 491 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = MAYORIG;}
#line 1981 "asin.c" /* yacc.c:1646  */
    break;

  case 70:
#line 492 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = MENORIG;}
#line 1987 "asin.c" /* yacc.c:1646  */
    break;

  case 71:
#line 496 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = MAS_UN;}
#line 1993 "asin.c" /* yacc.c:1646  */
    break;

  case 72:
#line 497 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = MENOS_UN;}
#line 1999 "asin.c" /* yacc.c:1646  */
    break;

  case 73:
#line 501 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = POR;}
#line 2005 "asin.c" /* yacc.c:1646  */
    break;

  case 74:
#line 502 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = DIV;}
#line 2011 "asin.c" /* yacc.c:1646  */
    break;

  case 75:
#line 503 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = MOD;}
#line 2017 "asin.c" /* yacc.c:1646  */
    break;

  case 76:
#line 507 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = MAS_UN;}
#line 2023 "asin.c" /* yacc.c:1646  */
    break;

  case 77:
#line 508 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = MENOS_UN;}
#line 2029 "asin.c" /* yacc.c:1646  */
    break;

  case 78:
#line 509 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = NEG_UN;}
#line 2035 "asin.c" /* yacc.c:1646  */
    break;

  case 79:
#line 513 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = INCRE;}
#line 2041 "asin.c" /* yacc.c:1646  */
    break;

  case 80:
#line 514 "src/asin.y" /* yacc.c:1646  */
    {(yyval.cent) = DECRE;}
#line 2047 "asin.c" /* yacc.c:1646  */
    break;


#line 2051 "asin.c" /* yacc.c:1646  */
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
#line 518 "src/asin.y" /* yacc.c:1906  */

