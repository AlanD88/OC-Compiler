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
#line 1 "parser.y" /* yacc.c:339  */

// $Id: parser.y,v 1.11 2017-10-11 14:27:30-07 - - $
// Dummy parser for scanner project.

#include <cassert>

#include "lyutils.h"
#include "astree.h"


#line 77 "yyparse.cpp" /* yacc.c:339  */

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
   by #include "yyparse.h".  */
#ifndef YY_YY_YYPARSE_H_INCLUDED
# define YY_YY_YYPARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ROOT = 258,
    TOK_VOID = 259,
    TOK_CHAR = 260,
    TOK_INT = 261,
    TOK_STRING = 262,
    TOK_IF = 263,
    TOK_ELSE = 264,
    TOK_WHILE = 265,
    TOK_RETURN = 266,
    TOK_STRUCT = 267,
    TOK_NULL = 268,
    TOK_NEW = 269,
    TOK_ARRAY = 270,
    TOK_EQ = 271,
    TOK_NE = 272,
    TOK_LT = 273,
    TOK_LE = 274,
    TOK_GT = 275,
    TOK_GE = 276,
    TOK_IDENT = 277,
    TOK_INTCON = 278,
    TOK_CHARCON = 279,
    TOK_STRINGCON = 280,
    TOK_BLOCK = 281,
    TOK_CALL = 282,
    TOK_IFELSE = 283,
    TOK_INITDECL = 284,
    TOK_POS = 285,
    TOK_NEG = 286,
    TOK_NEWARRAY = 287,
    TOK_TYPEID = 288,
    TOK_FIELD = 289,
    TOK_ORD = 290,
    TOK_CHR = 291,
    TOK_ROOT = 292,
    TOK_FUNCTION = 293,
    TOK_PARAMLIST = 294,
    TOK_PROTOTYPE = 295,
    TOK_NEWSTRING = 296,
    TOK_INDEX = 297,
    TOK_DECLID = 298,
    TOK_RETURNVOID = 299,
    TOK_VARDECL = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YYPARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 174 "yyparse.cpp" /* yacc.c:358  */

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
#define YYLAST   552

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,    51,     2,     2,
      55,    59,    49,    47,    60,    48,    54,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    57,
       2,    46,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    56,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    64,    65,    66,    67,    68,    69,    72,
      79,    85,    93,    98,   105,   106,   107,   108,   111,   118,
     124,   132,   141,   146,   153,   158,   165,   173,   177,   184,
     185,   186,   187,   188,   189,   192,   200,   207,   212,   222,
     227,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   249,   251,   252,   253,   254,   255,
     256,   259,   265,   272,   280,   286,   293,   298,   305,   309,
     315,   322,   323,   324,   325
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ROOT", "TOK_VOID", "TOK_CHAR",
  "TOK_INT", "TOK_STRING", "TOK_IF", "TOK_ELSE", "TOK_WHILE", "TOK_RETURN",
  "TOK_STRUCT", "TOK_NULL", "TOK_NEW", "TOK_ARRAY", "TOK_EQ", "TOK_NE",
  "TOK_LT", "TOK_LE", "TOK_GT", "TOK_GE", "TOK_IDENT", "TOK_INTCON",
  "TOK_CHARCON", "TOK_STRINGCON", "TOK_BLOCK", "TOK_CALL", "TOK_IFELSE",
  "TOK_INITDECL", "TOK_POS", "TOK_NEG", "TOK_NEWARRAY", "TOK_TYPEID",
  "TOK_FIELD", "TOK_ORD", "TOK_CHR", "TOK_ROOT", "TOK_FUNCTION",
  "TOK_PARAMLIST", "TOK_PROTOTYPE", "TOK_NEWSTRING", "TOK_INDEX",
  "TOK_DECLID", "TOK_RETURNVOID", "TOK_VARDECL", "'='", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "'['", "'.'", "'('", "'}'", "';'", "'{'",
  "')'", "','", "']'", "$accept", "start", "program", "structdef",
  "struct2", "fielddecl", "basetype", "function", "funcparams",
  "identdecl", "block", "blockbody", "statement", "vardecl", "while",
  "ifelse", "return", "expr", "allocator", "call", "callexprs", "variable",
  "constant", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,    61,    43,    45,    42,
      47,    37,    33,    91,    46,    40,   125,    59,   123,    41,
      44,    93
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -18

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -70,     3,    84,   -70,   -35,   -70,   -70,   -70,   -17,   -13,
     266,    24,   -70,    21,    -3,   -70,   -70,   -70,   422,   422,
     422,   422,   190,   -70,     4,     8,   -70,   -37,   -70,   137,
     -70,   -70,   -70,   -70,   -70,   432,   -70,   -70,   -23,   -70,
     -70,   -70,   -70,   422,   422,     7,   -70,   444,    -7,    26,
      28,    33,   203,    -9,    -9,    -9,   308,    47,   -70,   -70,
     -70,    44,    19,    31,   -70,   422,    -2,   -10,   -70,   -70,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   422,    80,   -70,   -70,   422,   322,   366,   -70,
     -70,   422,    46,   422,   -70,   498,   -70,   -70,    81,   -70,
     -70,   486,     6,   -70,    22,    25,    64,    64,    64,    64,
      64,    64,   498,     5,     5,    -9,    -9,    -9,   247,   -70,
     498,   190,   190,   380,   -70,   256,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   101,   -70,   -70,   -70,   190,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     1,     0,    14,    15,    16,     0,     0,
       0,     0,    74,     0,    68,    71,    72,    73,     0,     0,
       0,     0,     0,     3,     0,     0,     4,     0,    29,     0,
       5,    30,    31,    32,    33,     0,    56,    57,     0,    59,
      60,     6,     7,     0,     0,    68,    40,     0,     0,    16,
      17,     0,     0,    53,    54,    55,     0,     0,    28,    17,
       9,     0,     0,     0,    24,     0,     0,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    65,     0,     0,     0,    39,
      11,     0,     0,     0,    64,    66,    58,    10,     0,    12,
      25,     0,     0,    22,     0,     0,    41,    42,    43,    44,
      45,    46,    51,    47,    48,    49,    50,    52,     0,    70,
      67,     0,     0,     0,    61,     0,    13,    35,    21,    20,
      19,    18,    23,    69,    37,    36,    62,    63,     0,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,    -1,
     -69,   -70,   -22,   -70,   -70,   -70,   -70,    -4,   -70,   -70,
     -70,   -70,   -70
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    23,    24,    61,    25,    26,    67,    57,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    27,     5,     3,     6,     7,    47,    69,     5,    65,
       6,     7,   -17,    51,    53,    54,    55,    56,    66,   -17,
      59,    41,    42,    63,    62,     5,    59,     6,    49,     5,
      64,     6,     7,   129,    98,   131,    85,    86,    43,    87,
      88,    99,    44,    50,    82,    83,    48,    59,    95,   104,
     105,    90,    52,   100,    79,    80,    81,   102,    82,    83,
      60,   101,    52,   128,    22,   103,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   130,
      22,    91,   120,    92,    -2,     4,    93,   123,     5,   125,
       6,     7,     8,    65,     9,    10,    11,    12,    13,   134,
     135,    97,   119,   126,   132,   124,    14,    15,    16,    17,
     138,    77,    78,    79,    80,    81,   139,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,    19,     0,     0,     0,    20,     0,     0,    21,
       0,     5,    22,     6,     7,     8,     0,     9,    10,     0,
      12,    13,     0,     0,     0,     0,     0,     0,     0,    14,
      15,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    19,     0,     0,     0,    20,
       0,     0,    21,    68,     5,    22,     6,     7,     8,     0,
       9,    10,     0,    12,    13,     0,     0,     0,     0,     0,
       0,     0,    14,    15,    16,    17,    12,    13,     0,     0,
       0,     0,     0,     0,     0,    45,    15,    16,    17,     0,
       0,     0,     0,     0,     0,     0,     0,    18,    19,     0,
       0,     0,    20,     0,     0,    21,     0,     0,    22,     0,
      18,    19,     0,     0,     0,    20,     0,     0,    21,     0,
       0,     0,    94,    70,    71,    72,    73,    74,    75,     0,
       0,     0,    70,    71,    72,    73,    74,    75,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,    45,    15,
      16,    17,     0,    76,    77,    78,    79,    80,    81,     0,
      82,    83,    76,    77,    78,    79,    80,    81,   133,    82,
      83,     0,     0,    18,    19,     0,     0,   137,    20,     0,
       0,    21,     0,    46,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,    77,    78,    79,    80,    81,
       0,    82,    83,     0,     0,     0,     0,    96,    76,    77,
      78,    79,    80,    81,     0,    82,    83,     0,     0,     0,
       0,   121,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,     0,    82,
      83,     0,     0,     0,     0,   122,    76,    77,    78,    79,
      80,    81,     0,    82,    83,    12,    13,     0,     0,   136,
       0,     0,     0,     0,    45,    15,    16,    17,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,    18,
      19,     0,     0,     0,    20,     0,     0,    21,    76,    77,
      78,    79,    80,    81,     0,    82,    83,     0,     0,    84,
      76,    77,    78,    79,    80,    81,     0,    82,    83,     0,
       0,    89,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,     0,    82,
      83,     0,     0,   127,    76,    77,    78,    79,    80,    81,
       0,    82,    83
};

static const yytype_int16 yycheck[] =
{
      22,     2,     4,     0,     6,     7,    10,    29,     4,    46,
       6,     7,    15,    13,    18,    19,    20,    21,    55,    22,
      22,    56,    57,    15,    24,     4,    22,     6,     7,     4,
      22,     6,     7,   102,    15,   104,    59,    60,    55,    43,
      44,    22,    55,    22,    53,    54,    22,    22,    52,    59,
      60,    58,    55,    22,    49,    50,    51,    59,    53,    54,
      56,    65,    55,    57,    58,    66,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    57,
      58,    55,    86,    55,     0,     1,    53,    91,     4,    93,
       6,     7,     8,    46,    10,    11,    12,    13,    14,   121,
     122,    57,    22,    22,   105,    59,    22,    23,    24,    25,
       9,    47,    48,    49,    50,    51,   138,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    52,    -1,    -1,    55,
      -1,     4,    58,     6,     7,     8,    -1,    10,    11,    -1,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    52,
      -1,    -1,    55,    56,     4,    58,     6,     7,     8,    -1,
      10,    11,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    -1,
      47,    48,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    59,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    46,    47,    48,    49,    50,    51,    61,    53,
      54,    -1,    -1,    47,    48,    -1,    -1,    61,    52,    -1,
      -1,    55,    -1,    57,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    -1,    -1,    -1,    -1,    59,    46,    47,
      48,    49,    50,    51,    -1,    53,    54,    -1,    -1,    -1,
      -1,    59,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,    -1,    -1,    -1,    -1,    59,    46,    47,    48,    49,
      50,    51,    -1,    53,    54,    13,    14,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    52,    -1,    -1,    55,    46,    47,
      48,    49,    50,    51,    -1,    53,    54,    -1,    -1,    57,
      46,    47,    48,    49,    50,    51,    -1,    53,    54,    -1,
      -1,    57,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,    -1,    -1,    57,    46,    47,    48,    49,    50,    51,
      -1,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,    64,     0,     1,     4,     6,     7,     8,    10,
      11,    12,    13,    14,    22,    23,    24,    25,    47,    48,
      52,    55,    58,    65,    66,    68,    69,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    56,    57,    55,    55,    22,    57,    79,    22,     7,
      22,    68,    55,    79,    79,    79,    79,    71,    74,    22,
      56,    67,    68,    15,    22,    46,    55,    70,    56,    74,
      16,    17,    18,    19,    20,    21,    46,    47,    48,    49,
      50,    51,    53,    54,    57,    59,    60,    79,    79,    57,
      58,    55,    55,    53,    59,    79,    59,    57,    15,    22,
      22,    79,    59,    71,    59,    60,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    22,
      79,    59,    59,    79,    59,    79,    22,    57,    57,    72,
      57,    72,    71,    61,    74,    74,    59,    61,     9,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    64,    64,    64,    65,
      66,    66,    67,    67,    68,    68,    68,    68,    69,    69,
      69,    69,    70,    70,    71,    71,    72,    73,    73,    74,
      74,    74,    74,    74,    74,    75,    76,    77,    77,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      83,    84,    84,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     3,     0,     2,
       3,     3,     2,     3,     1,     1,     1,     1,     4,     4,
       4,     4,     2,     3,     2,     3,     2,     2,     2,     1,
       1,     1,     1,     1,     2,     4,     5,     5,     7,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     1,     1,     3,     1,
       1,     4,     5,     5,     3,     2,     3,     3,     1,     4,
       3,     1,     1,     1,     1
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
  switch (yytype)
    {
          case 3: /* ROOT  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 849 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 4: /* TOK_VOID  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 855 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 5: /* TOK_CHAR  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 861 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 6: /* TOK_INT  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 867 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 7: /* TOK_STRING  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 873 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 8: /* TOK_IF  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 879 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 9: /* TOK_ELSE  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 885 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 10: /* TOK_WHILE  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 891 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 11: /* TOK_RETURN  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 897 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 12: /* TOK_STRUCT  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 903 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 13: /* TOK_NULL  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 909 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 14: /* TOK_NEW  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 915 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 15: /* TOK_ARRAY  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 921 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 16: /* TOK_EQ  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 927 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 17: /* TOK_NE  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 933 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 18: /* TOK_LT  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 939 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 19: /* TOK_LE  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 945 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 20: /* TOK_GT  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 951 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 21: /* TOK_GE  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 957 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 22: /* TOK_IDENT  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 963 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 23: /* TOK_INTCON  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 969 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 24: /* TOK_CHARCON  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 975 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 25: /* TOK_STRINGCON  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 981 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 26: /* TOK_BLOCK  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 987 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 27: /* TOK_CALL  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 993 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 28: /* TOK_IFELSE  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 999 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 29: /* TOK_INITDECL  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1005 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 30: /* TOK_POS  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1011 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 31: /* TOK_NEG  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1017 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 32: /* TOK_NEWARRAY  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1023 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 33: /* TOK_TYPEID  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1029 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 34: /* TOK_FIELD  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1035 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 35: /* TOK_ORD  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1041 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 36: /* TOK_CHR  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1047 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 37: /* TOK_ROOT  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1053 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 38: /* TOK_FUNCTION  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1059 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 39: /* TOK_PARAMLIST  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1065 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 40: /* TOK_PROTOTYPE  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1071 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 41: /* TOK_NEWSTRING  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1077 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 42: /* TOK_INDEX  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1083 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 43: /* TOK_DECLID  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1089 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 44: /* TOK_RETURNVOID  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1095 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 45: /* TOK_VARDECL  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1101 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 46: /* '='  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1107 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 47: /* '+'  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1113 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 48: /* '-'  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1119 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 49: /* '*'  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1125 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 50: /* '/'  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1131 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 51: /* '%'  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1137 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 52: /* '!'  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1143 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 53: /* '['  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1149 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 54: /* '.'  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1155 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 55: /* '('  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1161 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 56: /* '}'  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1167 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 57: /* ';'  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1173 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 58: /* '{'  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1179 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 59: /* ')'  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1185 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 60: /* ','  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1191 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 61: /* ']'  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1197 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 63: /* start  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1203 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 64: /* program  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1209 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 65: /* structdef  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1215 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 66: /* struct2  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1221 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 67: /* fielddecl  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1227 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 68: /* basetype  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1233 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 69: /* function  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1239 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 70: /* funcparams  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1245 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 71: /* identdecl  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1251 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 72: /* block  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1257 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 73: /* blockbody  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1263 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 74: /* statement  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1269 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 75: /* vardecl  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1275 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 76: /* while  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1281 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 77: /* ifelse  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1287 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 78: /* return  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1293 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 79: /* expr  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1299 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 80: /* allocator  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1305 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 81: /* call  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1311 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 82: /* callexprs  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1317 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 83: /* variable  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1323 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 84: /* constant  */
#line 21 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1329 "yyparse.cpp" /* yacc.c:684  */
        break;


      default:
        break;
    }
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
  switch (yytype)
    {
          case 3: /* ROOT  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1675 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOK_VOID  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1681 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOK_CHAR  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1687 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOK_INT  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1693 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 7: /* TOK_STRING  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1699 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 8: /* TOK_IF  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1705 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 9: /* TOK_ELSE  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1711 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 10: /* TOK_WHILE  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1717 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 11: /* TOK_RETURN  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1723 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 12: /* TOK_STRUCT  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1729 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 13: /* TOK_NULL  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1735 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 14: /* TOK_NEW  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1741 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 15: /* TOK_ARRAY  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1747 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 16: /* TOK_EQ  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1753 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 17: /* TOK_NE  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1759 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 18: /* TOK_LT  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1765 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 19: /* TOK_LE  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1771 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 20: /* TOK_GT  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1777 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 21: /* TOK_GE  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1783 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 22: /* TOK_IDENT  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1789 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 23: /* TOK_INTCON  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1795 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 24: /* TOK_CHARCON  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1801 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 25: /* TOK_STRINGCON  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1807 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 26: /* TOK_BLOCK  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1813 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 27: /* TOK_CALL  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1819 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 28: /* TOK_IFELSE  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1825 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 29: /* TOK_INITDECL  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1831 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 30: /* TOK_POS  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1837 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 31: /* TOK_NEG  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1843 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 32: /* TOK_NEWARRAY  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1849 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 33: /* TOK_TYPEID  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1855 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 34: /* TOK_FIELD  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1861 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 35: /* TOK_ORD  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1867 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 36: /* TOK_CHR  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1873 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 37: /* TOK_ROOT  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1879 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 38: /* TOK_FUNCTION  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1885 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 39: /* TOK_PARAMLIST  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1891 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 40: /* TOK_PROTOTYPE  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1897 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 41: /* TOK_NEWSTRING  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1903 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 42: /* TOK_INDEX  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1909 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 43: /* TOK_DECLID  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1915 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 44: /* TOK_RETURNVOID  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1921 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 45: /* TOK_VARDECL  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1927 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 46: /* '='  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1933 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 47: /* '+'  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1939 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 48: /* '-'  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1945 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 49: /* '*'  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1951 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 50: /* '/'  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1957 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 51: /* '%'  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1963 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 52: /* '!'  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1969 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 53: /* '['  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1975 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 54: /* '.'  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1981 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 55: /* '('  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1987 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 56: /* '}'  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1993 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 57: /* ';'  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1999 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 58: /* '{'  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2005 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 59: /* ')'  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2011 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 60: /* ','  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2017 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 61: /* ']'  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2023 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 63: /* start  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2029 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 64: /* program  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2035 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 65: /* structdef  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2041 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 66: /* struct2  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2047 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 67: /* fielddecl  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2053 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 68: /* basetype  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2059 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 69: /* function  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2065 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 70: /* funcparams  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2071 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 71: /* identdecl  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2077 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 72: /* block  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2083 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 73: /* blockbody  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2089 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 74: /* statement  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2095 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 75: /* vardecl  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2101 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 76: /* while  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2107 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 77: /* ifelse  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2113 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 78: /* return  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2119 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 79: /* expr  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2125 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 80: /* allocator  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2131 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 81: /* call  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2137 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 82: /* callexprs  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2143 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 83: /* variable  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2149 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 84: /* constant  */
#line 20 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2155 "yyparse.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
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

/* User initialization code.  */
#line 23 "parser.y" /* yacc.c:1429  */
{
   parser::root = new astree (ROOT, {0, 0, 0}, "<<ROOT>>");
}

#line 2245 "yyparse.cpp" /* yacc.c:1429  */
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
#line 61 "parser.y" /* yacc.c:1646  */
    { (yyval) = parser::root = (yyvsp[0]); }
#line 2427 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 64 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2433 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 65 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2439 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 66 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2445 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 67 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); destroy((yyvsp[0]));}
#line 2451 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 68 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); destroy((yyvsp[0]));}
#line 2457 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 69 "parser.y" /* yacc.c:1646  */
    {(yyval) = parser::root; }
#line 2463 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 73 "parser.y" /* yacc.c:1646  */
    { 
                    (yyval) = (yyvsp[-1]); 
                    destroy((yyvsp[0]));
                }
#line 2472 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 80 "parser.y" /* yacc.c:1646  */
    { 
                    (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); 
                    destroy((yyvsp[0]));
                    
                }
#line 2482 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 86 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-1])->symbol = TOK_TYPEID; 
                    (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); 
                    destroy((yyvsp[0]));
                }
#line 2492 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 94 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[0])->symbol = TOK_FIELD;
                    (yyval) = (yyvsp[-1])->adopt((yyvsp[0]));
                }
#line 2501 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 99 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[0])->symbol = TOK_FIELD;
                    (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0]));
                }
#line 2510 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 105 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2516 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 106 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2522 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 107 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2528 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 108 "parser.y" /* yacc.c:1646  */
    { (yyvsp[0])->symbol = TOK_TYPEID; (yyval) = (yyvsp[0]); }
#line 2534 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 112 "parser.y" /* yacc.c:1646  */
    {
                    (yyval) = new astree(TOK_FUNCTION, (yyvsp[-3])->lloc, "");
                    (yyval) = (yyval)->adopt((yyvsp[-3]), (yyvsp[-2]));
                    (yyval) = (yyval)->adopt((yyvsp[0]));
                    destroy((yyvsp[-1]));
                }
#line 2545 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 119 "parser.y" /* yacc.c:1646  */
    {
                    (yyval) = new astree(TOK_PROTOTYPE, (yyvsp[-3])->lloc, "");
                    (yyval) = (yyval)->adopt((yyvsp[-3]), (yyvsp[-2]));
                    destroy((yyvsp[-1]), (yyvsp[0]));
                }
#line 2555 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 125 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-2])->symbol = TOK_PARAMLIST;
                    (yyval) = new astree(TOK_FUNCTION, (yyvsp[-3])->lloc, "");
                    (yyval) = (yyval)->adopt((yyvsp[-3]), (yyvsp[-2]));
                    (yyval) = (yyval)->adopt((yyvsp[0]));
                    destroy((yyvsp[-1]));
                }
#line 2567 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 133 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-2])->symbol = TOK_PARAMLIST;
                    (yyval) = new astree(TOK_PROTOTYPE, (yyvsp[-3])->lloc, "");
                    (yyval) = (yyval)->adopt((yyvsp[-3]), (yyvsp[-2]));
                    destroy((yyvsp[-1]), (yyvsp[0]));
                }
#line 2578 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 142 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-1])->symbol = TOK_PARAMLIST;
                    (yyval) = (yyvsp[-1])->adopt((yyvsp[0]));
                }
#line 2587 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 147 "parser.y" /* yacc.c:1646  */
    {
                    (yyval) = (yyvsp[-2])->adopt((yyvsp[0]));
                    destroy((yyvsp[-1]));
                }
#line 2596 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 154 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[0])->symbol = TOK_DECLID;
                    (yyval) = (yyvsp[-1])->adopt((yyvsp[0]));
                }
#line 2605 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 159 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[0])->symbol = TOK_DECLID;
                    (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0]));
                }
#line 2614 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 166 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-1])->symbol = TOK_BLOCK;
                    (yyval) = (yyvsp[-1]);
                    destroy((yyvsp[0]));
                }
#line 2624 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 174 "parser.y" /* yacc.c:1646  */
    {
                    (yyval) = (yyvsp[-1])->adopt((yyvsp[0]));
                }
#line 2632 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 178 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-1])->symbol = TOK_BLOCK;
                    (yyval) = (yyvsp[-1])->adopt((yyvsp[0]));
                }
#line 2641 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 184 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2647 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 185 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2653 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2659 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 187 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2665 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 188 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2671 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); destroy((yyvsp[0])); }
#line 2677 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 193 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-2])->symbol = TOK_VARDECL;
                    (yyval) = (yyvsp[-2])->adopt((yyvsp[-3]), (yyvsp[-1]));
                    destroy((yyvsp[0]));
                }
#line 2687 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 201 "parser.y" /* yacc.c:1646  */
    {
                    (yyval) = (yyvsp[-4])->adopt((yyvsp[-2]), (yyvsp[0]));
                    destroy((yyvsp[-3]), (yyvsp[-1]));
                }
#line 2696 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 208 "parser.y" /* yacc.c:1646  */
    {
                    (yyval) = (yyvsp[-4])->adopt((yyvsp[-2]), (yyvsp[0]));
                    destroy((yyvsp[-3]), (yyvsp[-1]));
                }
#line 2705 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 213 "parser.y" /* yacc.c:1646  */
    {
                    (yyval) = (yyvsp[-6])->adopt((yyvsp[-4]), (yyvsp[-2]));
                    (yyvsp[0])->symbol = TOK_IFELSE;
                    (yyval) = (yyvsp[-6])->adopt((yyvsp[0]));
                    destroy((yyvsp[-5]), (yyvsp[-3]));
                    destroy((yyvsp[-1]));
                }
#line 2717 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 223 "parser.y" /* yacc.c:1646  */
    {
                    (yyval) = (yyvsp[-2])->adopt((yyvsp[-1]));
                    destroy((yyvsp[0]));
                }
#line 2726 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 228 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-1])->symbol = TOK_RETURNVOID;
                    (yyval) = (yyvsp[-1]);
                    destroy((yyvsp[0]));
                }
#line 2736 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 235 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2742 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 236 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2748 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 237 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2754 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 238 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2760 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 239 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2766 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 240 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2772 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 241 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2778 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 242 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2784 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2790 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 244 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2796 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 245 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2802 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 246 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2808 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 248 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym((yyvsp[0]), TOK_POS); }
#line 2814 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym((yyvsp[0]), TOK_NEG); }
#line 2820 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2826 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2832 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 253 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2838 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); destroy((yyvsp[-2]), (yyvsp[0])); }
#line 2844 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2850 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2856 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 260 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-2])->symbol = TOK_TYPEID;
                    (yyval) = (yyvsp[-3])->adopt((yyvsp[-2]));
                    destroy((yyvsp[-1]), (yyvsp[0]));
                }
#line 2866 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 266 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-4])->symbol = TOK_NEWSTRING;
                    (yyval) = (yyvsp[-4])->adopt((yyvsp[-1]));
                    destroy((yyvsp[-2]), (yyvsp[0]));
                    destroy((yyvsp[-3]));
                }
#line 2877 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 273 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-4])->symbol = TOK_NEWARRAY;
                    (yyval) = (yyvsp[-4])->adopt((yyvsp[-3]), (yyvsp[-1]));
                    destroy((yyvsp[-2]), (yyvsp[0]));
                }
#line 2887 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 281 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-1])->symbol = TOK_CALL;
                    (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]));
                    destroy((yyvsp[0]));
                }
#line 2897 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 287 "parser.y" /* yacc.c:1646  */
    {
                    (yyval) = (yyvsp[-1]);
                    destroy((yyvsp[0]));
                }
#line 2906 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 294 "parser.y" /* yacc.c:1646  */
    {
                    (yyval) = (yyvsp[-2])->adopt((yyvsp[0]));
                    destroy((yyvsp[-1]));
                }
#line 2915 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 299 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-1])->symbol = TOK_CALL;
                    (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0]));
                }
#line 2924 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 306 "parser.y" /* yacc.c:1646  */
    {
                    (yyval) = (yyvsp[0]);
                }
#line 2932 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 310 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-2])->symbol = TOK_INDEX;
                    (yyval) = (yyvsp[-2])->adopt((yyvsp[-3]), (yyvsp[-1]));
                    destroy((yyvsp[0]));
                }
#line 2942 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 316 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[0])->symbol = TOK_FIELD;
                    (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0]));
                }
#line 2951 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 322 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2957 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 323 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2963 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 324 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2969 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2975 "yyparse.cpp" /* yacc.c:1646  */
    break;


#line 2979 "yyparse.cpp" /* yacc.c:1646  */
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
#line 328 "parser.y" /* yacc.c:1906  */





const char *parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}


bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}

/*
static void* yycalloc (size_t size) {
   void* result = calloc (1, size);
   assert (result != nullptr);
   return result;
}
*/

