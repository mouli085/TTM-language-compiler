
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "new.y"


	#include<stdio.h>
	#include "node.c"
	#include<stdlib.h>
	#include<string.h>
	extern char * yytext;
	#include <math.h>
	#define var 180
    #define pi  3.1416
	double temp;
	double dfcheck;
	double swcheck;
	double brkflg;


/* Line 189 of yacc.c  */
#line 90 "new.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     IDENTIFIER = 259,
     STRING = 260,
     LIBNAME = 261,
     INT = 262,
     BREAK = 263,
     CONTINUE = 264,
     DEFINE = 265,
     DOUBLE = 266,
     FLOAT = 267,
     SHORT = 268,
     AUTO = 269,
     ELSE = 270,
     ELIF = 271,
     IF = 272,
     THEN = 273,
     WHILE = 274,
     GOTO = 275,
     RETURN = 276,
     FOR = 277,
     INCLUDE = 278,
     OR = 279,
     SWITCH = 280,
     CASE = 281,
     PRINT = 282,
     PLUS = 283,
     MINUS = 284,
     MULT = 285,
     MOD = 286,
     EQUAL = 287,
     GREATERTHAN = 288,
     LESSTHAN = 289,
     ASSIGN = 290,
     NOTGREATERTHAN = 291,
     NOTLESSTHAN = 292,
     NOTEQUALEQUAL = 293,
     IN = 294,
     OUT = 295,
     COMMENT = 296,
     GREATERTHANEQUAL = 297,
     LESSTHANEQUAL = 298,
     AND = 299,
     VOID = 300,
     CHAR = 301,
     DIV = 302,
     TOPEN = 303,
     TCLOSE = 304,
     FOPEN = 305,
     FCLOSE = 306,
     SOPEN = 307,
     SCLOSE = 308,
     COMMA = 309,
     COLON = 310,
     SEMI = 311,
     HASH = 312,
     BROPEN = 313,
     BRCLOSE = 314,
     INCR = 315,
     DECR = 316,
     DEFAULT = 317,
     POW = 318,
     FACT = 319,
     SINE = 320,
     COS = 321,
     TAN = 322,
     LN = 323,
     IFX = 324
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 16 "new.y"

  double DOB;  
  char *str;



/* Line 214 of yacc.c  */
#line 202 "new.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 214 "new.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   357

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,    13,    14,    24,    26,    28,    30,
      32,    34,    35,    38,    43,    44,    47,    49,    53,    56,
      57,    61,    62,    64,    71,    82,    84,    91,    96,    99,
     101,   104,   107,   110,   127,   139,   141,   142,   146,   147,
     154,   155,   157,   159,   161,   163,   165,   167,   169,   171,
     173,   177,   181,   185,   189,   193,   196,   201,   206,   211,
     216,   220,   224,   228,   232,   236,   240
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    72,    73,    -1,    57,    23,    58,     6,
      59,    72,    -1,    -1,    74,     4,    50,    75,    51,    52,
      78,    76,    53,    -1,     7,    -1,    12,    -1,    11,    -1,
      46,    -1,    45,    -1,    -1,    74,     4,    -1,    75,    54,
      74,     4,    -1,    -1,    21,    88,    -1,     4,    -1,    77,
      54,     4,    -1,    78,    79,    -1,    -1,    78,    74,    77,
      -1,    -1,    88,    -1,    17,    88,    18,    52,    79,    53,
      -1,    17,    88,    18,    52,    79,    53,    15,    52,    79,
      53,    -1,    81,    -1,    25,    82,    52,    84,    83,    53,
      -1,     4,    50,     3,    51,    -1,    27,    80,    -1,    41,
      -1,    40,    88,    -1,    40,     5,    -1,    80,    80,    -1,
      22,    50,     4,    35,     3,    56,     4,    87,     3,    56,
       4,    86,    51,    52,    79,    53,    -1,    19,    50,     4,
      87,     3,    51,    52,    79,     4,    86,    53,    -1,    88,
      -1,    -1,    62,    55,    88,    -1,    -1,    84,    26,     3,
      55,    88,    85,    -1,    -1,     8,    -1,    60,    -1,    61,
      -1,    34,    -1,    33,    -1,    43,    -1,    42,    -1,     3,
      -1,     4,    -1,     4,    35,    88,    -1,    88,    28,    88,
      -1,    88,    29,    88,    -1,    88,    30,    88,    -1,    88,
      47,    88,    -1,    88,    64,    -1,    65,    50,    88,    51,
      -1,    66,    50,    88,    51,    -1,    67,    50,    88,    51,
      -1,    68,    50,    88,    51,    -1,    88,    34,    88,    -1,
      88,    33,    88,    -1,    88,    43,    88,    -1,    88,    42,
      88,    -1,    88,    32,    88,    -1,    50,    88,    51,    -1,
      88,    63,    88,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    56,    57,    60,    92,    93,    94,    95,
      96,    99,   100,   110,   122,   123,   126,   137,   149,   150,
     152,   155,   157,   159,   171,   184,   186,   188,   198,   201,
     205,   206,   207,   209,   280,   354,   357,   358,   361,   362,
     368,   369,   373,   375,   379,   380,   381,   382,   386,   388,
     401,   413,   415,   417,   419,   430,   439,   440,   441,   442,
     443,   445,   447,   449,   451,   453,   455
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "IDENTIFIER", "STRING", "LIBNAME",
  "INT", "BREAK", "CONTINUE", "DEFINE", "DOUBLE", "FLOAT", "SHORT", "AUTO",
  "ELSE", "ELIF", "IF", "THEN", "WHILE", "GOTO", "RETURN", "FOR",
  "INCLUDE", "OR", "SWITCH", "CASE", "PRINT", "PLUS", "MINUS", "MULT",
  "MOD", "EQUAL", "GREATERTHAN", "LESSTHAN", "ASSIGN", "NOTGREATERTHAN",
  "NOTLESSTHAN", "NOTEQUALEQUAL", "IN", "OUT", "COMMENT",
  "GREATERTHANEQUAL", "LESSTHANEQUAL", "AND", "VOID", "CHAR", "DIV",
  "TOPEN", "TCLOSE", "FOPEN", "FCLOSE", "SOPEN", "SCLOSE", "COMMA",
  "COLON", "SEMI", "HASH", "BROPEN", "BRCLOSE", "INCR", "DECR", "DEFAULT",
  "POW", "FACT", "SINE", "COS", "TAN", "LN", "IFX", "$accept", "program",
  "incl", "fmain", "type", "param", "ret", "id", "cstatement", "statement",
  "out", "loop", "chckexp", "default", "cases", "break", "inc", "con",
  "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    74,    74,    74,    74,
      74,    75,    75,    75,    76,    76,    77,    77,    78,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    80,    81,    81,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     6,     0,     9,     1,     1,     1,     1,
       1,     0,     2,     4,     0,     2,     1,     3,     2,     0,
       3,     0,     1,     6,    10,     1,     6,     4,     2,     1,
       2,     2,     2,    16,    11,     1,     0,     3,     0,     6,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     2,     4,     4,     4,     4,
       3,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     0,     1,     6,     8,     7,    10,
       9,     2,     0,     0,     0,     0,    11,     4,     0,     0,
       3,    12,     0,     0,    19,     0,    14,    13,    48,    49,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,     0,     0,    18,    25,    22,     0,     0,    49,
       0,     0,    15,     0,     0,    35,     0,    28,     0,     0,
       0,     0,     0,    16,    20,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    50,     0,     0,
       0,     0,    38,    31,    30,    32,    65,     0,     0,     0,
       0,     0,    51,    52,    53,    64,    61,    60,    63,    62,
      54,    66,    27,    21,    45,    44,    47,    46,     0,     0,
      36,    56,    57,    58,    59,    17,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,    26,     0,     0,
       0,     0,    37,    21,     0,     0,    40,     0,     0,     0,
      41,    39,    24,    42,    43,     0,     0,    34,     0,     0,
       0,    21,     0,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    11,    12,    19,    43,    64,    26,    44,
      85,    45,    54,   121,   110,   141,   145,   108,    46
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -47
static const yytype_int16 yypact[] =
{
     -38,    -1,    25,     3,   -25,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,    52,    55,    13,     7,     3,   -38,    63,   -46,
     -47,   -47,    17,     3,   -47,    68,    43,   -47,   -47,   -26,
      74,    30,    74,    32,    74,    35,   -47,    74,    33,    36,
      37,    40,    81,    38,   -47,   -47,   273,    74,    89,    59,
     130,    95,   273,    96,    50,   273,    48,    35,   153,    74,
      74,    74,    74,   -47,    49,   -47,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,   -47,   273,    56,    65,
     -22,    83,   -47,   -47,   273,    35,   -47,   177,   201,   225,
     249,   121,   -29,   -29,    42,   273,   293,   293,   293,   293,
      42,   273,   -47,    54,   -47,   -47,   -47,   -47,   123,   125,
      -3,   -47,   -47,   -47,   -47,   -47,    76,    79,    75,   132,
      88,    91,   134,    98,   148,    99,    74,   -47,   101,    54,
     -22,    74,   273,    54,   151,   154,   104,   103,   -33,   105,
     -47,   -47,   -47,   -47,   -47,   112,   162,   -47,   -33,   118,
     119,    54,   117,   -47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -47,   -47,   157,   -47,   -10,   -47,   -47,   -47,   -47,    -6,
     140,   -47,   -47,   -47,   -47,   -47,    28,    58,   -30
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      50,    68,    52,    69,    55,    22,    18,    58,    23,    47,
       6,   104,   105,    25,     7,     8,    42,    77,    74,     1,
     106,   107,     4,   119,    48,     5,    84,   143,   144,    87,
      88,    89,    90,    13,    75,    76,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    28,    29,     9,    10,
       6,    28,    49,    83,     7,     8,    14,    28,    29,   120,
      30,    15,    31,    16,    32,    33,    17,    21,    34,    24,
      35,    30,    27,    31,    69,    56,    33,    28,    49,    34,
      51,    35,    53,    59,    36,    63,    60,    61,     9,    10,
      62,    65,    78,    37,    47,    36,   132,   116,    37,    80,
      81,   136,    82,    91,    37,    75,    76,   102,    38,    39,
      40,    41,   140,    38,    39,    40,    41,   103,   109,    38,
      39,    40,    41,   134,    37,   115,   117,   137,   118,   122,
     123,   124,    66,    67,    68,   125,    69,    70,    71,    38,
      39,    40,    41,   126,   127,   152,    72,    73,    79,   128,
     129,    74,   130,   133,   131,   138,   142,   139,    66,    67,
      68,   146,    69,    70,    71,   147,   148,    75,    76,   150,
     153,   151,    72,    73,    20,    57,   149,    74,     0,     0,
       0,    66,    67,    68,     0,    69,    70,    71,   135,     0,
       0,     0,     0,    75,    76,    72,    73,     0,     0,     0,
      74,     0,     0,     0,    86,    66,    67,    68,     0,    69,
      70,    71,     0,     0,     0,     0,    75,    76,     0,    72,
      73,     0,     0,     0,    74,     0,     0,     0,   111,    66,
      67,    68,     0,    69,    70,    71,     0,     0,     0,     0,
      75,    76,     0,    72,    73,     0,     0,     0,    74,     0,
       0,     0,   112,    66,    67,    68,     0,    69,    70,    71,
       0,     0,     0,     0,    75,    76,     0,    72,    73,     0,
       0,     0,    74,     0,     0,     0,   113,    66,    67,    68,
       0,    69,    70,    71,     0,     0,     0,     0,    75,    76,
       0,    72,    73,     0,     0,     0,    74,     0,     0,     0,
     114,    66,    67,    68,     0,    69,    70,    71,     0,     0,
       0,     0,    75,    76,     0,    72,    73,     0,     0,     0,
      74,    66,    67,    68,     0,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,    76,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,    76
};

static const yytype_int16 yycheck[] =
{
      30,    30,    32,    32,    34,    51,    16,    37,    54,    35,
       7,    33,    34,    23,    11,    12,    26,    47,    47,    57,
      42,    43,    23,    26,    50,     0,    56,    60,    61,    59,
      60,    61,    62,    58,    63,    64,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,     3,     4,    45,    46,
       7,     3,     4,     5,    11,    12,     4,     3,     4,    62,
      17,     6,    19,    50,    21,    22,    59,     4,    25,    52,
      27,    17,     4,    19,    32,    40,    22,     3,     4,    25,
      50,    27,    50,    50,    41,     4,    50,    50,    45,    46,
      50,    53,     3,    50,    35,    41,   126,   103,    50,     4,
       4,   131,    52,    54,    50,    63,    64,    51,    65,    66,
      67,    68,     8,    65,    66,    67,    68,    52,    35,    65,
      66,    67,    68,   129,    50,     4,     3,   133,     3,    53,
      51,    56,    28,    29,    30,     3,    32,    33,    34,    65,
      66,    67,    68,    55,    53,   151,    42,    43,    18,    15,
      52,    47,     4,    52,    55,     4,    53,     3,    28,    29,
      30,    56,    32,    33,    34,    53,     4,    63,    64,    51,
      53,    52,    42,    43,    17,    35,   148,    47,    -1,    -1,
      -1,    28,    29,    30,    -1,    32,    33,    34,   130,    -1,
      -1,    -1,    -1,    63,    64,    42,    43,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    28,    29,    30,    -1,    32,
      33,    34,    -1,    -1,    -1,    -1,    63,    64,    -1,    42,
      43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    28,
      29,    30,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,
      63,    64,    -1,    42,    43,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    51,    28,    29,    30,    -1,    32,    33,    34,
      -1,    -1,    -1,    -1,    63,    64,    -1,    42,    43,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    28,    29,    30,
      -1,    32,    33,    34,    -1,    -1,    -1,    -1,    63,    64,
      -1,    42,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    28,    29,    30,    -1,    32,    33,    34,    -1,    -1,
      -1,    -1,    63,    64,    -1,    42,    43,    -1,    -1,    -1,
      47,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    71,    72,    23,     0,     7,    11,    12,    45,
      46,    73,    74,    58,     4,     6,    50,    59,    74,    75,
      72,     4,    51,    54,    52,    74,    78,     4,     3,     4,
      17,    19,    21,    22,    25,    27,    41,    50,    65,    66,
      67,    68,    74,    76,    79,    81,    88,    35,    50,     4,
      88,    50,    88,    50,    82,    88,    40,    80,    88,    50,
      50,    50,    50,     4,    77,    53,    28,    29,    30,    32,
      33,    34,    42,    43,    47,    63,    64,    88,     3,    18,
       4,     4,    52,     5,    88,    80,    51,    88,    88,    88,
      88,    54,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    51,    52,    33,    34,    42,    43,    87,    35,
      84,    51,    51,    51,    51,     4,    79,     3,     3,    26,
      62,    83,    53,    51,    56,     3,    55,    53,    15,    52,
       4,    55,    88,    52,    79,    87,    88,    79,     4,     3,
       8,    85,    53,    60,    61,    86,    56,    53,     4,    86,
      51,    52,    79,    53
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 53 "new.y"
    {printf("program ended");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 56 "new.y"
    {printf("%s is included",(yyvsp[(4) - (6)].str));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 60 "new.y"
    {	
			if(find((yyvsp[(2) - (9)].str)) != 0){
				printf((yyvsp[(2) - (9)].str));
				printf("function name already Declared\n");
			}
			else
				{
				insert((yyvsp[(2) - (9)].str),0,1);
				}
			

			if((yyvsp[(1) - (9)].str)=="VOID"&& isnan((yyvsp[(8) - (9)].DOB))!=1){
				printf("\nCAN NOT RETURN A VALUE\n");
				(yyval.DOB)=NAN;
			}
			else if((yyvsp[(1) - (9)].str)!="VOID"&& isnan((yyvsp[(8) - (9)].DOB))==1){
				printf("\nplease RETURN A VALUE\n");
			}
			else if((yyvsp[(1) - (9)].str)!="VOID"&& isnan((yyvsp[(8) - (9)].DOB))!=1){
				printf("return %.10g\n",(yyvsp[(8) - (9)].DOB));
				(yyval.DOB)=(yyvsp[(8) - (9)].DOB);
			}
			
			if(strcmp((yyvsp[(2) - (9)].str),"ttmMain")==0)
			{
			printf((yyvsp[(2) - (9)].str));
			printf(" compiled\n");
			}
		;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 92 "new.y"
    {(yyval.str)="INT";;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 93 "new.y"
    {(yyval.str)="FLOAT";;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 94 "new.y"
    {(yyval.str)="DOUBLE";;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 95 "new.y"
    {(yyval.str)="CHAR";;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 96 "new.y"
    {(yyval.str)="VOID";;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 100 "new.y"
    { 
				if(find((yyvsp[(2) - (2)].str)) != 0){
				printf((yyvsp[(2) - (2)].str));
				printf(" variable already declared\n");}
				else
					{
					insert((yyvsp[(2) - (2)].str),0,0);
					}
					
				;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 110 "new.y"
    { 
	  			
				if(find((yyvsp[(4) - (4)].str)) != 0){
				printf((yyvsp[(4) - (4)].str));
				printf(" variable already declared\n");}
				else
					{
						insert((yyvsp[(4) - (4)].str),0,0);
					}
				;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 122 "new.y"
    {(yyval.DOB)=NAN;;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 123 "new.y"
    {(yyval.DOB)=(yyvsp[(2) - (2)].DOB); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 126 "new.y"
    { 
	  			
				if(find((yyvsp[(1) - (1)].str)) != 0){
				printf((yyvsp[(1) - (1)].str));
				printf(" variable already declared\n");}
				else
					{
					insert((yyvsp[(1) - (1)].str),0,0);
					}
					
				;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 137 "new.y"
    { 
	  			
				if(find((yyvsp[(3) - (3)].str)) != 0){
				printf((yyvsp[(3) - (3)].str));
				printf(" variable already declared\n");}
				else
					{
					insert((yyvsp[(3) - (3)].str),0,0);
					}
				;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 152 "new.y"
    {printf("\nvalid declaration\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 157 "new.y"
    { printf("\nvalue of expression : %.10g\n", (yyvsp[(1) - (1)].DOB)); (yyval.DOB)= (yyvsp[(1) - (1)].DOB) ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 159 "new.y"
    {
	  			if((yyvsp[(2) - (6)].DOB)){
					printf("\nvalue of expression in IF: %.10g\n",(yyvsp[(5) - (6)].DOB));
					(yyval.DOB)=(yyvsp[(5) - (6)].DOB);
				}

				else{
					printf("condition value zero in IF block\n");
					(yyval.DOB)=0;
				}
				
	  		;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 171 "new.y"
    {
			 	if((yyvsp[(2) - (10)].DOB))
				{
					printf("value of expression in IF: %.10g\n",(yyvsp[(5) - (10)].DOB));
					(yyval.DOB)= (yyvsp[(5) - (10)].DOB);
				}
				else
				{
					printf("value of expression in ELSE: %.10g\n",(yyvsp[(9) - (10)].DOB));
					(yyval.DOB)=(yyvsp[(9) - (10)].DOB);
				}
		  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 186 "new.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 188 "new.y"
    {
		  	if(isfunction((yyvsp[(1) - (4)].str))==0){
		  		printf("%s is not a function\n",(yyvsp[(1) - (4)].str)); 
		  	}
		  	else
		  	{
		  		printf("return value of %s %.10g\n",getvalue((yyvsp[(1) - (4)].str))); 
		  	}
		  ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 198 "new.y"
    {(yyval.DOB)=1;printf("\n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 201 "new.y"
    {printf("\ncomment ignored \n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 205 "new.y"
    {printf("printing expression: %.10g\n",(yyvsp[(2) - (2)].DOB));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 206 "new.y"
    {printf("printing expression: %s\n",(yyvsp[(2) - (2)].str));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 210 "new.y"
    {

      	if(find((yyvsp[(3) - (16)].str)) != 1){
		printf((yyvsp[(3) - (16)].str));
		printf(" variable not declared\n");
		}
		else if(find((yyvsp[(7) - (16)].str)) != 1){
			printf((yyvsp[(7) - (16)].str));
			printf(" variable not declared\n");
		}
		else if(find((yyvsp[(11) - (16)].str)) != 1){
			printf((yyvsp[(11) - (16)].str));
			printf(" variable not declared\n");
		}
		else
		{	if((yyvsp[(12) - (16)].DOB)==55){
				if((yyvsp[(8) - (16)].DOB)==1){
			        printf("\nFOR LOOP:\n");
					for (change((yyvsp[(3) - (16)].str),(yyvsp[(5) - (16)].DOB)) ; getvalue((yyvsp[(7) - (16)].str))<(yyvsp[(9) - (16)].DOB); change((yyvsp[(11) - (16)].str),getvalue((yyvsp[(11) - (16)].str))+1) ){
						printf("expression in for loop : %.10g\n",(yyvsp[(15) - (16)].DOB));
					}
	        	}
		        else if((yyvsp[(8) - (16)].DOB)==2){
			        printf("\nFOR LOOP:\n");
					for (change((yyvsp[(3) - (16)].str),(yyvsp[(5) - (16)].DOB)) ; getvalue((yyvsp[(7) - (16)].str))>(yyvsp[(9) - (16)].DOB); change((yyvsp[(11) - (16)].str),getvalue((yyvsp[(11) - (16)].str))+1) ){
						printf("expression in for loop : %.10g\n",(yyvsp[(15) - (16)].DOB));
					}
		        }
		        else if((yyvsp[(8) - (16)].DOB)==3){
			        printf("\nFOR LOOP:\n");
					for (change((yyvsp[(3) - (16)].str),(yyvsp[(5) - (16)].DOB)) ; getvalue((yyvsp[(7) - (16)].str))<=(yyvsp[(9) - (16)].DOB); change((yyvsp[(11) - (16)].str),getvalue((yyvsp[(11) - (16)].str))+1) ){
						printf("expression in for loop : %.10g\n",(yyvsp[(15) - (16)].DOB));
					}
		        }
		        else if((yyvsp[(8) - (16)].DOB)==4){
			        printf("\nFOR LOOP:\n");
					for (change((yyvsp[(3) - (16)].str),(yyvsp[(5) - (16)].DOB)) ; getvalue((yyvsp[(7) - (16)].str))>=(yyvsp[(9) - (16)].DOB); change((yyvsp[(11) - (16)].str),getvalue((yyvsp[(11) - (16)].str))+1) ){
						printf("expression in for loop : %.10g\n",(yyvsp[(15) - (16)].DOB));
					}
		        }
			}
			else if((yyvsp[(12) - (16)].DOB)==66){
				if((yyvsp[(8) - (16)].DOB)==1){
			        printf("\nFOR LOOP:\n");
					for (change((yyvsp[(3) - (16)].str),(yyvsp[(5) - (16)].DOB)) ; getvalue((yyvsp[(7) - (16)].str))<(yyvsp[(9) - (16)].DOB); change((yyvsp[(11) - (16)].str),getvalue((yyvsp[(11) - (16)].str))-1) ){
						printf("expression in for loop : %.10g\n",(yyvsp[(15) - (16)].DOB));
					}
	        	}
		        else if((yyvsp[(8) - (16)].DOB)==2){
			        printf("\nFOR LOOP:\n");
					for (change((yyvsp[(3) - (16)].str),(yyvsp[(5) - (16)].DOB)) ; getvalue((yyvsp[(7) - (16)].str))>(yyvsp[(9) - (16)].DOB); change((yyvsp[(11) - (16)].str),getvalue((yyvsp[(11) - (16)].str))-1) ){
						printf("expression in for loop : %.10g\n",(yyvsp[(15) - (16)].DOB));
					}
		        }
		        else if((yyvsp[(8) - (16)].DOB)==3){
			        printf("\nFOR LOOP:\n");
					for (change((yyvsp[(3) - (16)].str),(yyvsp[(5) - (16)].DOB)) ; getvalue((yyvsp[(7) - (16)].str))<=(yyvsp[(9) - (16)].DOB); change((yyvsp[(11) - (16)].str),getvalue((yyvsp[(11) - (16)].str))-1) ){
						printf("expression in for loop : %.10g\n",(yyvsp[(15) - (16)].DOB));
					}
		        }
		        else if((yyvsp[(8) - (16)].DOB)==4){
			        printf("\nFOR LOOP:\n");
					for (change((yyvsp[(3) - (16)].str),(yyvsp[(5) - (16)].DOB)) ; getvalue((yyvsp[(7) - (16)].str))>=(yyvsp[(9) - (16)].DOB); change((yyvsp[(11) - (16)].str),getvalue((yyvsp[(11) - (16)].str))-1) ){
						printf("expression in for loop : %.10g\n",(yyvsp[(15) - (16)].DOB));
					}
		        }
			}
			(yyval.DOB)=(yyvsp[(15) - (16)].DOB);
		}
	;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 280 "new.y"
    {
  		if(find((yyvsp[(3) - (11)].str)) != 1){
			printf((yyvsp[(3) - (11)].str));
			printf(" variable not declared\n");
		}
		else if(find((yyvsp[(9) - (11)].str)) != 1){
			printf((yyvsp[(9) - (11)].str));
			printf(" variable not declared\n");
		}
		else
		{	if((yyvsp[(10) - (11)].DOB)==55){
				if((yyvsp[(4) - (11)].DOB) ==1)
				{
					while(getvalue((yyvsp[(3) - (11)].str))<(yyvsp[(5) - (11)].DOB)){
	  					printf("expression in while loop:%.10g\n",(yyvsp[(8) - (11)].DOB));
	  					change((yyvsp[(9) - (11)].str),getvalue((yyvsp[(9) - (11)].str))+1); 
	  				}
  				}
  				else if((yyvsp[(4) - (11)].DOB) ==2)
				{
					while(getvalue((yyvsp[(3) - (11)].str))>(yyvsp[(5) - (11)].DOB)){
	  					printf("expression in while loop:%.10g\n",(yyvsp[(8) - (11)].DOB));
	  					change((yyvsp[(9) - (11)].str),getvalue((yyvsp[(9) - (11)].str))+1);	 
	  				}
  				}
  				else if((yyvsp[(4) - (11)].DOB) ==3)
				{
					while(getvalue((yyvsp[(3) - (11)].str))<=(yyvsp[(5) - (11)].DOB)){
	  					printf("expression in while loop:%.10g\n",(yyvsp[(8) - (11)].DOB));
	  					change((yyvsp[(9) - (11)].str),getvalue((yyvsp[(9) - (11)].str))+1);	  					 
	  				}
  				}
  				else if((yyvsp[(4) - (11)].DOB) ==4)
				{
					while(getvalue((yyvsp[(3) - (11)].str))>=(yyvsp[(5) - (11)].DOB)){
	  					printf("expression in while loop:%.10g\n",(yyvsp[(8) - (11)].DOB));
	  					change((yyvsp[(9) - (11)].str),getvalue((yyvsp[(9) - (11)].str))+1);
	  				}
  				}
			}
			if((yyvsp[(10) - (11)].DOB)==66){
				if((yyvsp[(4) - (11)].DOB) ==1)
				{
					while(getvalue((yyvsp[(3) - (11)].str))<(yyvsp[(5) - (11)].DOB)){
	  					printf("expression in while loop:%.10g\n",(yyvsp[(8) - (11)].DOB));
	  					change((yyvsp[(9) - (11)].str),getvalue((yyvsp[(9) - (11)].str))-1);
	  				}
  				}
  				else if((yyvsp[(4) - (11)].DOB) ==2)
				{
					while(getvalue((yyvsp[(3) - (11)].str))>(yyvsp[(5) - (11)].DOB)){
	  					printf("expression in while loop:%.10g\n",(yyvsp[(8) - (11)].DOB));
	  					change((yyvsp[(9) - (11)].str),getvalue((yyvsp[(9) - (11)].str))-1);
	  				}
  				}
  				else if((yyvsp[(4) - (11)].DOB) ==3)
				{
					while(getvalue((yyvsp[(3) - (11)].str))<=(yyvsp[(5) - (11)].DOB)){
	  					printf("expression in while loop:%.10g\n",(yyvsp[(8) - (11)].DOB));
	  					change((yyvsp[(9) - (11)].str),getvalue((yyvsp[(9) - (11)].str))-1);
	  				}
  				}
  				else if((yyvsp[(4) - (11)].DOB) ==4)
				{
					while(getvalue((yyvsp[(3) - (11)].str))>=(yyvsp[(5) - (11)].DOB)){
	  					printf("expression in while loop:%.10g\n",(yyvsp[(8) - (11)].DOB));
	  					change((yyvsp[(9) - (11)].str),getvalue((yyvsp[(9) - (11)].str))-1);
	  				}
  				}
			}
		}
  	;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 354 "new.y"
    {(yyval.DOB)=(yyvsp[(1) - (1)].DOB);swcheck=(yyvsp[(1) - (1)].DOB); dfcheck=0; brkflg=1 /*printf("\nin %.10g\n",$$);*/;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 358 "new.y"
    {if(dfcheck==0||brkflg==0){printf("value of expression in switch default: %.10g\n",(yyvsp[(3) - (3)].DOB));};}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 362 "new.y"
    {if(swcheck==(yyvsp[(3) - (6)].DOB)||brkflg==0){
		  			printf("value of expression in switch case: %.10g\n",(yyvsp[(5) - (6)].DOB));
		  			dfcheck=1;
		  		};}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 368 "new.y"
    { brkflg=0;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 369 "new.y"
    { brkflg=1;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 373 "new.y"
    { (yyval.DOB)= 55;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 375 "new.y"
    {(yyval.DOB)= 66;;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 379 "new.y"
    {(yyval.DOB) = 1;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 380 "new.y"
    {(yyval.DOB) = 2;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 381 "new.y"
    {(yyval.DOB) = 3;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 382 "new.y"
    {(yyval.DOB) = 4;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 386 "new.y"
    { (yyval.DOB) = (yyvsp[(1) - (1)].DOB); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 388 "new.y"
    {
					//printf($1);
						if(find((yyvsp[(1) - (1)].str)) != 1){
				printf((yyvsp[(1) - (1)].str));
				printf(" variable not declared\n");}
				else
				{
				//printf("\nvariable:");
				//printf($1);
				(yyval.DOB) = getvalue((yyvsp[(1) - (1)].str));

				}
					;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 401 "new.y"
    { 
	  			if(find((yyvsp[(1) - (3)].str)) != 1){
					printf((yyvsp[(1) - (3)].str));
					printf(" variable not declared\n");
				}
				else
				{
					change((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].DOB));
					printf("\nValue of %s: %.10g\n",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].DOB));
				}	
				(yyval.DOB)=getvalue((yyvsp[(1) - (3)].str));				
			;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 413 "new.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) + (yyvsp[(3) - (3)].DOB); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 415 "new.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) - (yyvsp[(3) - (3)].DOB); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 417 "new.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) * (yyvsp[(3) - (3)].DOB); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 419 "new.y"
    {if((yyvsp[(3) - (3)].DOB)) 
					  		{
					     			(yyval.DOB) = (yyvsp[(1) - (3)].DOB) / (yyvsp[(3) - (3)].DOB);
					  		}
				  		else
					  		{
								(yyval.DOB) = 0;
								printf("\ndivision by zero\t");
					  		} 

				    	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 430 "new.y"
    {
						int facto=1 ,i;
						for(i=(yyvsp[(1) - (2)].DOB);i>0;i--)
						{
							facto=facto*i;
						}
						(yyval.DOB)=facto;
						 
					 ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 439 "new.y"
    { (yyval.DOB)=sin((yyvsp[(3) - (4)].DOB) * pi / var); printf(" sin value %.10g\n",(yyval.DOB)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 440 "new.y"
    { (yyval.DOB)=cos((yyvsp[(3) - (4)].DOB) *pi / var); printf(" cos value %.10g\n",(yyval.DOB)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 441 "new.y"
    { (yyval.DOB)=tan((yyvsp[(3) - (4)].DOB) *pi / var); printf(" tan value %.10g\n",(yyval.DOB)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 442 "new.y"
    { (yyval.DOB)=log((yyvsp[(3) - (4)].DOB)); printf(" ln value %.10g\n",(yyval.DOB)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 443 "new.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) < (yyvsp[(3) - (3)].DOB);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 445 "new.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) > (yyvsp[(3) - (3)].DOB);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 447 "new.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) <= (yyvsp[(3) - (3)].DOB);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 449 "new.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) >= (yyvsp[(3) - (3)].DOB);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 451 "new.y"
    { (yyval.DOB) = (yyvsp[(1) - (3)].DOB) == (yyvsp[(3) - (3)].DOB);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 453 "new.y"
    { (yyval.DOB) = (yyvsp[(2) - (3)].DOB);	;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 455 "new.y"
    {(yyval.DOB) =pow((yyvsp[(1) - (3)].DOB),(yyvsp[(3) - (3)].DOB)) ;/* printf("%.10g To the power %.10g value %.10g\n",$1,$3,$$);*/	;}
    break;



/* Line 1455 of yacc.c  */
#line 2251 "new.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 458 "new.y"

int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}
