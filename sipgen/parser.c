/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_API = 258,
     TK_AUTOPYNAME = 259,
     TK_DEFDOCSTRING = 260,
     TK_DEFENCODING = 261,
     TK_PLUGIN = 262,
     TK_DOCSTRING = 263,
     TK_DOC = 264,
     TK_EXPORTEDDOC = 265,
     TK_EXTRACT = 266,
     TK_MAKEFILE = 267,
     TK_ACCESSCODE = 268,
     TK_GETCODE = 269,
     TK_SETCODE = 270,
     TK_PREINITCODE = 271,
     TK_INITCODE = 272,
     TK_POSTINITCODE = 273,
     TK_UNITCODE = 274,
     TK_UNITPOSTINCLUDECODE = 275,
     TK_MODCODE = 276,
     TK_TYPECODE = 277,
     TK_PREPYCODE = 278,
     TK_COPYING = 279,
     TK_MAPPEDTYPE = 280,
     TK_CODELINE = 281,
     TK_IF = 282,
     TK_END = 283,
     TK_NAME_VALUE = 284,
     TK_PATH_VALUE = 285,
     TK_STRING_VALUE = 286,
     TK_VIRTUALCATCHERCODE = 287,
     TK_TRAVERSECODE = 288,
     TK_CLEARCODE = 289,
     TK_GETBUFFERCODE = 290,
     TK_RELEASEBUFFERCODE = 291,
     TK_READBUFFERCODE = 292,
     TK_WRITEBUFFERCODE = 293,
     TK_SEGCOUNTCODE = 294,
     TK_CHARBUFFERCODE = 295,
     TK_PICKLECODE = 296,
     TK_METHODCODE = 297,
     TK_FROMTYPE = 298,
     TK_TOTYPE = 299,
     TK_TOSUBCLASS = 300,
     TK_INCLUDE = 301,
     TK_OPTINCLUDE = 302,
     TK_IMPORT = 303,
     TK_EXPHEADERCODE = 304,
     TK_MODHEADERCODE = 305,
     TK_TYPEHEADERCODE = 306,
     TK_MODULE = 307,
     TK_CMODULE = 308,
     TK_CONSMODULE = 309,
     TK_COMPOMODULE = 310,
     TK_CLASS = 311,
     TK_STRUCT = 312,
     TK_PUBLIC = 313,
     TK_PROTECTED = 314,
     TK_PRIVATE = 315,
     TK_SIGNALS = 316,
     TK_SIGNAL_METHOD = 317,
     TK_SLOTS = 318,
     TK_SLOT_METHOD = 319,
     TK_BOOL = 320,
     TK_SHORT = 321,
     TK_INT = 322,
     TK_LONG = 323,
     TK_FLOAT = 324,
     TK_DOUBLE = 325,
     TK_CHAR = 326,
     TK_WCHAR_T = 327,
     TK_VOID = 328,
     TK_PYOBJECT = 329,
     TK_PYTUPLE = 330,
     TK_PYLIST = 331,
     TK_PYDICT = 332,
     TK_PYCALLABLE = 333,
     TK_PYSLICE = 334,
     TK_PYTYPE = 335,
     TK_VIRTUAL = 336,
     TK_ENUM = 337,
     TK_SIGNED = 338,
     TK_UNSIGNED = 339,
     TK_SCOPE = 340,
     TK_LOGICAL_OR = 341,
     TK_CONST = 342,
     TK_STATIC = 343,
     TK_SIPSIGNAL = 344,
     TK_SIPSLOT = 345,
     TK_SIPANYSLOT = 346,
     TK_SIPRXCON = 347,
     TK_SIPRXDIS = 348,
     TK_SIPSLOTCON = 349,
     TK_SIPSLOTDIS = 350,
     TK_SIPSSIZET = 351,
     TK_NUMBER_VALUE = 352,
     TK_REAL_VALUE = 353,
     TK_TYPEDEF = 354,
     TK_NAMESPACE = 355,
     TK_TIMELINE = 356,
     TK_PLATFORMS = 357,
     TK_FEATURE = 358,
     TK_LICENSE = 359,
     TK_QCHAR_VALUE = 360,
     TK_TRUE_VALUE = 361,
     TK_FALSE_VALUE = 362,
     TK_NULL_VALUE = 363,
     TK_OPERATOR = 364,
     TK_THROW = 365,
     TK_QOBJECT = 366,
     TK_EXCEPTION = 367,
     TK_RAISECODE = 368,
     TK_EXPLICIT = 369,
     TK_TEMPLATE = 370,
     TK_ELLIPSIS = 371,
     TK_DEFMETATYPE = 372,
     TK_DEFSUPERTYPE = 373,
     TK_PROPERTY = 374,
     TK_FORMAT = 375,
     TK_GET = 376,
     TK_ID = 377,
     TK_KWARGS = 378,
     TK_LANGUAGE = 379,
     TK_LICENSEE = 380,
     TK_NAME = 381,
     TK_OPTIONAL = 382,
     TK_ORDER = 383,
     TK_REMOVELEADING = 384,
     TK_SET = 385,
     TK_SIGNATURE = 386,
     TK_TIMESTAMP = 387,
     TK_TYPE = 388,
     TK_USEARGNAMES = 389,
     TK_VERSION = 390
   };
#endif
/* Tokens.  */
#define TK_API 258
#define TK_AUTOPYNAME 259
#define TK_DEFDOCSTRING 260
#define TK_DEFENCODING 261
#define TK_PLUGIN 262
#define TK_DOCSTRING 263
#define TK_DOC 264
#define TK_EXPORTEDDOC 265
#define TK_EXTRACT 266
#define TK_MAKEFILE 267
#define TK_ACCESSCODE 268
#define TK_GETCODE 269
#define TK_SETCODE 270
#define TK_PREINITCODE 271
#define TK_INITCODE 272
#define TK_POSTINITCODE 273
#define TK_UNITCODE 274
#define TK_UNITPOSTINCLUDECODE 275
#define TK_MODCODE 276
#define TK_TYPECODE 277
#define TK_PREPYCODE 278
#define TK_COPYING 279
#define TK_MAPPEDTYPE 280
#define TK_CODELINE 281
#define TK_IF 282
#define TK_END 283
#define TK_NAME_VALUE 284
#define TK_PATH_VALUE 285
#define TK_STRING_VALUE 286
#define TK_VIRTUALCATCHERCODE 287
#define TK_TRAVERSECODE 288
#define TK_CLEARCODE 289
#define TK_GETBUFFERCODE 290
#define TK_RELEASEBUFFERCODE 291
#define TK_READBUFFERCODE 292
#define TK_WRITEBUFFERCODE 293
#define TK_SEGCOUNTCODE 294
#define TK_CHARBUFFERCODE 295
#define TK_PICKLECODE 296
#define TK_METHODCODE 297
#define TK_FROMTYPE 298
#define TK_TOTYPE 299
#define TK_TOSUBCLASS 300
#define TK_INCLUDE 301
#define TK_OPTINCLUDE 302
#define TK_IMPORT 303
#define TK_EXPHEADERCODE 304
#define TK_MODHEADERCODE 305
#define TK_TYPEHEADERCODE 306
#define TK_MODULE 307
#define TK_CMODULE 308
#define TK_CONSMODULE 309
#define TK_COMPOMODULE 310
#define TK_CLASS 311
#define TK_STRUCT 312
#define TK_PUBLIC 313
#define TK_PROTECTED 314
#define TK_PRIVATE 315
#define TK_SIGNALS 316
#define TK_SIGNAL_METHOD 317
#define TK_SLOTS 318
#define TK_SLOT_METHOD 319
#define TK_BOOL 320
#define TK_SHORT 321
#define TK_INT 322
#define TK_LONG 323
#define TK_FLOAT 324
#define TK_DOUBLE 325
#define TK_CHAR 326
#define TK_WCHAR_T 327
#define TK_VOID 328
#define TK_PYOBJECT 329
#define TK_PYTUPLE 330
#define TK_PYLIST 331
#define TK_PYDICT 332
#define TK_PYCALLABLE 333
#define TK_PYSLICE 334
#define TK_PYTYPE 335
#define TK_VIRTUAL 336
#define TK_ENUM 337
#define TK_SIGNED 338
#define TK_UNSIGNED 339
#define TK_SCOPE 340
#define TK_LOGICAL_OR 341
#define TK_CONST 342
#define TK_STATIC 343
#define TK_SIPSIGNAL 344
#define TK_SIPSLOT 345
#define TK_SIPANYSLOT 346
#define TK_SIPRXCON 347
#define TK_SIPRXDIS 348
#define TK_SIPSLOTCON 349
#define TK_SIPSLOTDIS 350
#define TK_SIPSSIZET 351
#define TK_NUMBER_VALUE 352
#define TK_REAL_VALUE 353
#define TK_TYPEDEF 354
#define TK_NAMESPACE 355
#define TK_TIMELINE 356
#define TK_PLATFORMS 357
#define TK_FEATURE 358
#define TK_LICENSE 359
#define TK_QCHAR_VALUE 360
#define TK_TRUE_VALUE 361
#define TK_FALSE_VALUE 362
#define TK_NULL_VALUE 363
#define TK_OPERATOR 364
#define TK_THROW 365
#define TK_QOBJECT 366
#define TK_EXCEPTION 367
#define TK_RAISECODE 368
#define TK_EXPLICIT 369
#define TK_TEMPLATE 370
#define TK_ELLIPSIS 371
#define TK_DEFMETATYPE 372
#define TK_DEFSUPERTYPE 373
#define TK_PROPERTY 374
#define TK_FORMAT 375
#define TK_GET 376
#define TK_ID 377
#define TK_KWARGS 378
#define TK_LANGUAGE 379
#define TK_LICENSEE 380
#define TK_NAME 381
#define TK_OPTIONAL 382
#define TK_ORDER 383
#define TK_REMOVELEADING 384
#define TK_SET 385
#define TK_SIGNATURE 386
#define TK_TIMESTAMP 387
#define TK_TYPE 388
#define TK_USEARGNAMES 389
#define TK_VERSION 390




/* Copy the first part of user declarations.  */
#line 19 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "sip.h"


#define MAX_NESTED_IF       10
#define MAX_NESTED_SCOPE    10

#define inMainModule()      (currentSpec->module == currentModule || currentModule->container != NULL)


static sipSpec *currentSpec;            /* The current spec being parsed. */
static stringList *neededQualifiers;    /* The list of required qualifiers. */
static stringList *excludedQualifiers;  /* The list of excluded qualifiers. */
static moduleDef *currentModule;        /* The current module being parsed. */
static mappedTypeDef *currentMappedType;    /* The current mapped type. */
static enumDef *currentEnum;            /* The current enum being parsed. */
static int sectionFlags;                /* The current section flags. */
static int currentOverIsVirt;           /* Set if the overload is virtual. */
static int currentCtorIsExplicit;       /* Set if the ctor is explicit. */
static int currentIsStatic;             /* Set if the current is static. */
static int currentIsSignal;             /* Set if the current is Q_SIGNAL. */
static int currentIsSlot;               /* Set if the current is Q_SLOT. */
static int currentIsTemplate;           /* Set if the current is a template. */
static char *previousFile;              /* The file just parsed. */
static parserContext currentContext;    /* The current context. */
static int skipStackPtr;                /* The skip stack pointer. */
static int skipStack[MAX_NESTED_IF];    /* Stack of skip flags. */
static classDef *scopeStack[MAX_NESTED_SCOPE];  /* The scope stack. */
static int sectFlagsStack[MAX_NESTED_SCOPE];    /* The section flags stack. */
static int currentScopeIdx;             /* The scope stack index. */
static int currentTimelineOrder;        /* The current timeline order. */
static classList *currentSupers;        /* The current super-class list. */
static KwArgs defaultKwArgs;            /* The default keyword arguments support. */
static int makeProtPublic;              /* Treat protected items as public. */
static int parsingCSignature;           /* An explicit C/C++ signature is being parsed. */


static const char *getPythonName(moduleDef *mod, optFlags *optflgs,
        const char *cname);
static classDef *findClass(sipSpec *pt, ifaceFileType iftype,
        apiVersionRangeDef *api_range, scopedNameDef *fqname);
static classDef *findClassWithInterface(sipSpec *pt, ifaceFileDef *iff);
static classDef *newClass(sipSpec *pt, ifaceFileType iftype,
        apiVersionRangeDef *api_range, scopedNameDef *snd);
static void finishClass(sipSpec *, moduleDef *, classDef *, optFlags *);
static exceptionDef *findException(sipSpec *pt, scopedNameDef *fqname, int new);
static mappedTypeDef *newMappedType(sipSpec *,argDef *, optFlags *);
static enumDef *newEnum(sipSpec *pt, moduleDef *mod, mappedTypeDef *mt_scope,
        char *name, optFlags *of, int flags);
static void instantiateClassTemplate(sipSpec *pt, moduleDef *mod, classDef *scope, scopedNameDef *fqname, classTmplDef *tcd, templateDef *td);
static void newTypedef(sipSpec *, moduleDef *, char *, argDef *, optFlags *);
static void newVar(sipSpec *pt, moduleDef *mod, char *name, int isstatic,
        argDef *type, optFlags *of, codeBlock *acode, codeBlock *gcode,
        codeBlock *scode, int section);
static void newCtor(moduleDef *, char *, int, signatureDef *, optFlags *,
        codeBlock *, throwArgs *, signatureDef *, int, codeBlock *);
static void newFunction(sipSpec *, moduleDef *, classDef *, mappedTypeDef *,
        int, int, int, int, int, char *, signatureDef *, int, int, optFlags *,
        codeBlock *, codeBlock *, throwArgs *, signatureDef *, codeBlock *);
static optFlag *findOptFlag(optFlags *flgs, const char *name);
static optFlag *getOptFlag(optFlags *flgs, const char *name, flagType ft);
static memberDef *findFunction(sipSpec *, moduleDef *, classDef *,
        mappedTypeDef *, const char *, int, int, int);
static void checkAttributes(sipSpec *, moduleDef *, classDef *,
        mappedTypeDef *, const char *, int);
static void newModule(FILE *fp, const char *filename);
static moduleDef *allocModule();
static void parseFile(FILE *fp, const char *name, moduleDef *prevmod,
        int optional);
static void handleEOF(void);
static void handleEOM(void);
static qualDef *findQualifier(const char *name);
static const char *getInt(const char *cp, int *ip);
static scopedNameDef *text2scopedName(ifaceFileDef *scope, char *text);
static scopedNameDef *scopeScopedName(ifaceFileDef *scope,
        scopedNameDef *name);
static void pushScope(classDef *);
static void popScope(void);
static classDef *currentScope(void);
static void newQualifier(moduleDef *, int, int, const char *, qualType);
static qualDef *allocQualifier(moduleDef *, int, int, const char *, qualType);
static void newImport(const char *filename);
static int timePeriod(const char *lname, const char *uname);
static int platOrFeature(char *,int);
static int isNeeded(qualDef *);
static int notSkipping(void);
static void getHooks(optFlags *,char **,char **);
static int getTransfer(optFlags *optflgs);
static int getReleaseGIL(optFlags *optflgs);
static int getHoldGIL(optFlags *optflgs);
static int getDeprecated(optFlags *optflgs);
static int getAllowNone(optFlags *optflgs);
static const char *getDocType(optFlags *optflgs);
static const char *getDocValue(optFlags *optflgs);
static void templateSignature(signatureDef *sd, int result, classTmplDef *tcd, templateDef *td, classDef *ncd);
static void templateType(argDef *ad, classTmplDef *tcd, templateDef *td, classDef *ncd);
static int search_back(const char *end, const char *start, const char *target);
static char *type2string(argDef *ad);
static char *scopedNameToString(scopedNameDef *name);
static void addUsedFromCode(sipSpec *pt, ifaceFileList **used, const char *sname);
static int sameName(scopedNameDef *snd, const char *sname);
static int stringFind(stringList *sl, const char *s);
static void setModuleName(sipSpec *pt, moduleDef *mod, const char *fullname);
static int foundInScope(scopedNameDef *fq_name, scopedNameDef *rel_name);
static void defineClass(scopedNameDef *snd, classList *supers, optFlags *of);
static classDef *completeClass(scopedNameDef *snd, optFlags *of, int has_def);
static memberDef *instantiateTemplateMethods(memberDef *tmd, moduleDef *mod);
static void instantiateTemplateEnums(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void instantiateTemplateVars(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void instantiateTemplateTypedefs(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd);
static overDef *instantiateTemplateOverloads(sipSpec *pt, overDef *tod,
        memberDef *tmethods, memberDef *methods, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void resolveAnyTypedef(sipSpec *pt, argDef *ad);
static void addTypedef(sipSpec *pt, typedefDef *tdd);
static void addVariable(sipSpec *pt, varDef *vd);
static void applyTypeFlags(moduleDef *mod, argDef *ad, optFlags *flags);
static Format convertFormat(const char *format);
static argType convertEncoding(const char *encoding);
static apiVersionRangeDef *getAPIRange(optFlags *optflgs);
static apiVersionRangeDef *convertAPIRange(moduleDef *mod, nameDef *name,
        int from, int to);
static char *convertFeaturedString(char *fs);
static scopedNameDef *text2scopePart(char *text);
static KwArgs keywordArgs(moduleDef *mod, optFlags *optflgs, signatureDef *sd,
        int need_name);
static char *strip(char *s);
static int isEnabledFeature(const char *name);
static void addProperty(sipSpec *pt, moduleDef *mod, classDef *cd,
        const char *name, const char *get, const char *set,
        codeBlock *docstring);
static moduleDef *configureModule(sipSpec *pt, moduleDef *module,
        const char *filename, const char *name, int version, int c_module,
        KwArgs kwargs, int use_arg_names, codeBlock *docstring);
static void addAutoPyName(moduleDef *mod, const char *remove_leading);
static KwArgs convertKwArgs(const char *kwargs);
static void checkAnnos(optFlags *annos, const char *valid[]);
static void checkNoAnnos(optFlags *annos, const char *msg);
static void appendCodeBlock(codeBlockList **headp, codeBlock *cb);
static void handleKeepReference(optFlags *optflgs, argDef *ad, moduleDef *mod);


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 171 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
{
    char            qchar;
    char            *text;
    long            number;
    double          real;
    argDef          memArg;
    signatureDef    signature;
    signatureDef    *optsignature;
    throwArgs       *throwlist;
    codeBlock       *codeb;
    valueDef        value;
    valueDef        *valp;
    optFlags        optflags;
    optFlag         flag;
    scopedNameDef   *scpvalp;
    fcallDef        fcall;
    int             boolean;
    exceptionDef    exceptionbase;
    classDef        *klass;
    apiCfg          api;
    autoPyNameCfg   autopyname;
    compModuleCfg   compmodule;
    consModuleCfg   consmodule;
    defDocstringCfg defdocstring;
    defEncodingCfg  defencoding;
    defMetatypeCfg  defmetatype;
    defSupertypeCfg defsupertype;
    exceptionCfg    exception;
    docstringCfg    docstring;
    extractCfg      extract;
    featureCfg      feature;
    licenseCfg      license;
    importCfg       import;
    includeCfg      include;
    moduleCfg       module;
    pluginCfg       plugin;
    propertyCfg     property;
    variableCfg     variable;
}
/* Line 193 of yacc.c.  */
#line 558 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 571 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1541

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  227
/* YYNRULES -- Number of rules.  */
#define YYNRULES  531
/* YYNRULES -- Number of states.  */
#define YYNSTATES  929

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   390

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   143,     2,     2,     2,   156,   148,     2,
     136,   137,   146,   145,   138,   144,     2,   147,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   153,   142,
     151,   139,   152,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   154,     2,   155,   157,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   140,   149,   141,   150,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
     100,   102,   105,   107,   111,   113,   117,   121,   124,   126,
     130,   132,   136,   140,   143,   145,   149,   151,   155,   159,
     162,   165,   169,   171,   175,   179,   183,   189,   190,   194,
     199,   201,   204,   206,   208,   210,   212,   215,   216,   222,
     223,   230,   235,   237,   240,   242,   244,   246,   248,   251,
     254,   256,   258,   272,   273,   279,   280,   284,   286,   289,
     290,   296,   298,   301,   303,   306,   308,   312,   314,   318,
     322,   323,   329,   331,   334,   336,   341,   343,   346,   350,
     355,   357,   361,   363,   367,   368,   370,   374,   376,   380,
     384,   388,   392,   396,   399,   401,   405,   407,   411,   415,
     418,   420,   424,   426,   430,   434,   438,   440,   444,   446,
     450,   454,   455,   460,   462,   465,   467,   469,   471,   475,
     477,   481,   483,   487,   491,   492,   497,   499,   502,   504,
     506,   508,   512,   516,   519,   523,   525,   529,   533,   537,
     541,   545,   549,   550,   555,   557,   560,   562,   564,   566,
     568,   570,   572,   573,   575,   578,   580,   584,   586,   590,
     594,   598,   601,   604,   606,   610,   612,   616,   620,   621,
     624,   625,   628,   629,   632,   635,   638,   641,   644,   647,
     650,   653,   656,   659,   662,   665,   668,   671,   674,   677,
     680,   683,   686,   689,   692,   695,   698,   701,   704,   708,
     710,   714,   718,   722,   723,   725,   729,   731,   735,   739,
     740,   742,   746,   748,   752,   754,   758,   762,   766,   771,
     774,   776,   779,   780,   789,   790,   792,   793,   795,   796,
     798,   800,   803,   805,   807,   812,   813,   815,   816,   819,
     820,   823,   825,   829,   831,   833,   835,   837,   839,   841,
     842,   844,   846,   848,   850,   852,   854,   857,   859,   863,
     865,   867,   869,   871,   876,   878,   880,   882,   884,   886,
     888,   889,   891,   895,   901,   913,   914,   915,   924,   925,
     929,   934,   935,   936,   945,   946,   949,   951,   955,   957,
     958,   962,   964,   967,   969,   971,   973,   975,   977,   979,
     981,   983,   985,   987,   989,   991,   993,   995,   997,   999,
    1001,  1003,  1005,  1007,  1009,  1011,  1013,  1015,  1018,  1021,
    1025,  1029,  1033,  1036,  1040,  1044,  1046,  1050,  1054,  1058,
    1062,  1063,  1068,  1070,  1073,  1075,  1077,  1079,  1080,  1082,
    1094,  1095,  1099,  1101,  1112,  1113,  1114,  1121,  1122,  1123,
    1131,  1132,  1134,  1149,  1157,  1172,  1186,  1188,  1190,  1192,
    1194,  1196,  1198,  1200,  1202,  1205,  1208,  1211,  1214,  1217,
    1220,  1223,  1226,  1229,  1232,  1236,  1240,  1242,  1245,  1248,
    1250,  1253,  1256,  1259,  1261,  1264,  1265,  1267,  1268,  1271,
    1272,  1276,  1278,  1282,  1284,  1288,  1290,  1296,  1298,  1300,
    1301,  1304,  1305,  1308,  1310,  1311,  1313,  1317,  1322,  1327,
    1332,  1336,  1340,  1347,  1354,  1358,  1361,  1362,  1366,  1367,
    1371,  1373,  1374,  1378,  1380,  1382,  1384,  1385,  1389,  1391,
    1400,  1401,  1405,  1407,  1410,  1412,  1414,  1417,  1420,  1423,
    1428,  1432,  1436,  1437,  1439,  1440,  1443,  1445,  1450,  1453,
    1456,  1458,  1460,  1463,  1465,  1467,  1470,  1473,  1477,  1479,
    1481,  1483,  1486,  1489,  1491,  1493,  1495,  1497,  1499,  1501,
    1503,  1505,  1507,  1509,  1511,  1513,  1515,  1519,  1520,  1525,
    1526,  1528
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     159,     0,    -1,   160,    -1,   159,   160,    -1,    -1,   161,
     162,    -1,   240,    -1,   226,    -1,   233,    -1,   172,    -1,
     261,    -1,   249,    -1,   253,    -1,   254,    -1,   176,    -1,
     206,    -1,   198,    -1,   202,    -1,   214,    -1,   164,    -1,
     168,    -1,   218,    -1,   222,    -1,   262,    -1,   263,    -1,
     274,    -1,   276,    -1,   277,    -1,   278,    -1,   279,    -1,
     280,    -1,   281,    -1,   282,    -1,   283,    -1,   293,    -1,
     297,    -1,   186,    -1,   188,    -1,   163,    -1,   210,    -1,
     213,    -1,   194,    -1,   320,    -1,   326,    -1,   323,    -1,
     180,    -1,   319,    -1,   300,    -1,   352,    -1,   373,    -1,
     264,    -1,     5,   165,    -1,    31,    -1,   136,   166,   137,
      -1,   167,    -1,   166,   138,   167,    -1,   126,   139,    31,
      -1,     6,   169,    -1,    31,    -1,   136,   170,   137,    -1,
     171,    -1,   170,   138,   171,    -1,   126,   139,    31,    -1,
       7,   173,    -1,    29,    -1,   136,   174,   137,    -1,   175,
      -1,   174,   138,   175,    -1,   126,   139,    29,    -1,     3,
     177,    -1,    29,    97,    -1,   136,   178,   137,    -1,   179,
      -1,   178,   138,   179,    -1,   126,   139,    29,    -1,   135,
     139,    97,    -1,   112,   314,   181,   356,   182,    -1,    -1,
     136,   314,   137,    -1,   140,   183,   141,   142,    -1,   184,
      -1,   183,   184,    -1,   210,    -1,   213,    -1,   185,    -1,
     264,    -1,   113,   298,    -1,    -1,    25,   381,   356,   187,
     190,    -1,    -1,   325,    25,   381,   356,   189,   190,    -1,
     140,   191,   141,   142,    -1,   192,    -1,   191,   192,    -1,
     210,    -1,   213,    -1,   264,    -1,   275,    -1,    43,   298,
      -1,    44,   298,    -1,   300,    -1,   193,    -1,    88,   377,
      29,   136,   362,   137,   354,   383,   356,   349,   142,   292,
     360,    -1,    -1,   100,    29,   195,   196,   142,    -1,    -1,
     140,   197,   141,    -1,   163,    -1,   197,   163,    -1,    -1,
     102,   199,   140,   200,   141,    -1,   201,    -1,   200,   201,
      -1,    29,    -1,   103,   203,    -1,    29,    -1,   136,   204,
     137,    -1,   205,    -1,   204,   138,   205,    -1,   126,   139,
      29,    -1,    -1,   101,   207,   140,   208,   141,    -1,   209,
      -1,   208,   209,    -1,    29,    -1,    27,   136,   212,   137,
      -1,    29,    -1,   143,    29,    -1,   211,    86,    29,    -1,
     211,    86,   143,    29,    -1,   211,    -1,   303,   144,   303,
      -1,    28,    -1,   104,   215,   356,    -1,    -1,    31,    -1,
     136,   216,   137,    -1,   217,    -1,   216,   138,   217,    -1,
     133,   139,    31,    -1,   125,   139,    31,    -1,   131,   139,
      31,    -1,   132,   139,    31,    -1,   117,   219,    -1,   247,
      -1,   136,   220,   137,    -1,   221,    -1,   220,   138,   221,
      -1,   126,   139,   247,    -1,   118,   223,    -1,   247,    -1,
     136,   224,   137,    -1,   225,    -1,   224,   138,   225,    -1,
     126,   139,   247,    -1,    54,   227,   230,    -1,   247,    -1,
     136,   228,   137,    -1,   229,    -1,   228,   138,   229,    -1,
     126,   139,   247,    -1,    -1,   140,   231,   141,   142,    -1,
     232,    -1,   231,   232,    -1,   210,    -1,   213,    -1,   288,
      -1,    55,   234,   237,    -1,   247,    -1,   136,   235,   137,
      -1,   236,    -1,   235,   138,   236,    -1,   126,   139,   247,
      -1,    -1,   140,   238,   141,   142,    -1,   239,    -1,   238,
     239,    -1,   210,    -1,   213,    -1,   288,    -1,    52,   241,
     244,    -1,    53,   247,   248,    -1,   247,   248,    -1,   136,
     242,   137,    -1,   243,    -1,   242,   138,   243,    -1,   123,
     139,    31,    -1,   124,   139,    31,    -1,   126,   139,   247,
      -1,   134,   139,   316,    -1,   135,   139,    97,    -1,    -1,
     140,   245,   141,   142,    -1,   246,    -1,   245,   246,    -1,
     210,    -1,   213,    -1,   284,    -1,   288,    -1,    29,    -1,
      30,    -1,    -1,    97,    -1,    46,   250,    -1,    30,    -1,
     136,   251,   137,    -1,   252,    -1,   251,   138,   252,    -1,
     126,   139,    30,    -1,   127,   139,   316,    -1,    47,    30,
      -1,    48,   255,    -1,    30,    -1,   136,   256,   137,    -1,
     257,    -1,   256,   138,   257,    -1,   126,   139,    30,    -1,
      -1,    13,   298,    -1,    -1,    14,   298,    -1,    -1,    15,
     298,    -1,    24,   298,    -1,    49,   298,    -1,    50,   298,
      -1,    51,   298,    -1,    33,   298,    -1,    34,   298,    -1,
      35,   298,    -1,    36,   298,    -1,    37,   298,    -1,    38,
     298,    -1,    39,   298,    -1,    40,   298,    -1,    41,   298,
      -1,    21,   298,    -1,    22,   298,    -1,    16,   298,    -1,
      17,   298,    -1,    18,   298,    -1,    19,   298,    -1,    20,
     298,    -1,    23,   298,    -1,     9,   298,    -1,    10,   298,
      -1,     4,   285,    -1,   136,   286,   137,    -1,   287,    -1,
     286,   138,   287,    -1,   129,   139,    31,    -1,     8,   289,
     298,    -1,    -1,    31,    -1,   136,   290,   137,    -1,   291,
      -1,   290,   138,   291,    -1,   120,   139,    31,    -1,    -1,
     288,    -1,    11,   294,   298,    -1,    29,    -1,   136,   295,
     137,    -1,   296,    -1,   295,   138,   296,    -1,   122,   139,
      29,    -1,   128,   139,    97,    -1,    12,    30,   302,   298,
      -1,   299,    28,    -1,    26,    -1,   299,    26,    -1,    -1,
      82,   303,   356,   301,   140,   304,   141,   142,    -1,    -1,
      30,    -1,    -1,    29,    -1,    -1,   305,    -1,   306,    -1,
     305,   306,    -1,   210,    -1,   213,    -1,    29,   308,   356,
     307,    -1,    -1,   138,    -1,    -1,   139,   313,    -1,    -1,
     139,   310,    -1,   313,    -1,   310,   311,   313,    -1,   144,
      -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,   149,
      -1,    -1,   143,    -1,   150,    -1,   144,    -1,   145,    -1,
     146,    -1,   148,    -1,   312,   317,    -1,   315,    -1,   314,
      85,   315,    -1,    29,    -1,   106,    -1,   107,    -1,   314,
      -1,   381,   136,   318,   137,    -1,    98,    -1,    97,    -1,
     316,    -1,   108,    -1,    31,    -1,   105,    -1,    -1,   310,
      -1,   318,   138,   310,    -1,    99,   377,    29,   356,   142,
      -1,    99,   377,   136,   380,    29,   137,   136,   382,   137,
     356,   142,    -1,    -1,    -1,    57,   314,   321,   329,   356,
     322,   332,   142,    -1,    -1,   325,   324,   326,    -1,   115,
     151,   382,   152,    -1,    -1,    -1,    56,   314,   327,   329,
     356,   328,   332,   142,    -1,    -1,   153,   330,    -1,   331,
      -1,   330,   138,   331,    -1,   314,    -1,    -1,   140,   333,
     141,    -1,   334,    -1,   333,   334,    -1,   210,    -1,   213,
      -1,   194,    -1,   320,    -1,   326,    -1,   180,    -1,   319,
      -1,   300,    -1,   335,    -1,   288,    -1,   275,    -1,   264,
      -1,   265,    -1,   266,    -1,   267,    -1,   268,    -1,   269,
      -1,   270,    -1,   271,    -1,   272,    -1,   273,    -1,   344,
      -1,   343,    -1,   365,    -1,    45,   298,    -1,    44,   298,
      -1,    58,   342,   153,    -1,    59,   342,   153,    -1,    60,
     342,   153,    -1,    61,   153,    -1,   119,   336,   339,    -1,
     136,   337,   137,    -1,   338,    -1,   337,   138,   338,    -1,
     121,   139,    29,    -1,   126,   139,    29,    -1,   130,   139,
      29,    -1,    -1,   140,   340,   141,   142,    -1,   341,    -1,
     340,   341,    -1,   210,    -1,   213,    -1,   288,    -1,    -1,
      63,    -1,   351,   150,    29,   136,   137,   383,   355,   356,
     142,   360,   361,    -1,    -1,   114,   345,   346,    -1,   346,
      -1,    29,   136,   362,   137,   383,   356,   347,   142,   292,
     360,    -1,    -1,    -1,   154,   348,   136,   362,   137,   155,
      -1,    -1,    -1,   154,   350,   377,   136,   362,   137,   155,
      -1,    -1,    81,    -1,   377,    29,   136,   362,   137,   354,
     383,   355,   356,   349,   142,   292,   360,   361,    -1,   377,
     109,   139,   136,   377,   137,   142,    -1,   377,   109,   353,
     136,   362,   137,   354,   383,   355,   356,   349,   142,   360,
     361,    -1,   109,   377,   136,   362,   137,   354,   383,   355,
     356,   349,   142,   360,   361,    -1,   145,    -1,   144,    -1,
     146,    -1,   147,    -1,   156,    -1,   148,    -1,   149,    -1,
     157,    -1,   151,   151,    -1,   152,   152,    -1,   145,   139,
      -1,   144,   139,    -1,   146,   139,    -1,   147,   139,    -1,
     156,   139,    -1,   148,   139,    -1,   149,   139,    -1,   157,
     139,    -1,   151,   151,   139,    -1,   152,   152,   139,    -1,
     150,    -1,   136,   137,    -1,   154,   155,    -1,   151,    -1,
     151,   139,    -1,   139,   139,    -1,   143,   139,    -1,   152,
      -1,   152,   139,    -1,    -1,    87,    -1,    -1,   139,    97,
      -1,    -1,   147,   357,   147,    -1,   358,    -1,   357,   138,
     358,    -1,    29,    -1,    29,   139,   359,    -1,   247,    -1,
      29,   153,   248,   144,   248,    -1,    31,    -1,    97,    -1,
      -1,    42,   298,    -1,    -1,    32,   298,    -1,   363,    -1,
      -1,   364,    -1,   363,   138,   364,    -1,    89,   303,   356,
     309,    -1,    90,   303,   356,   309,    -1,    91,   303,   356,
     309,    -1,    92,   303,   356,    -1,    93,   303,   356,    -1,
      94,   136,   362,   137,   303,   356,    -1,    95,   136,   362,
     137,   303,   356,    -1,   111,   303,   356,    -1,   378,   309,
      -1,    -1,    62,   366,   368,    -1,    -1,    64,   367,   368,
      -1,   368,    -1,    -1,    88,   369,   370,    -1,   370,    -1,
     371,    -1,   373,    -1,    -1,    81,   372,   352,    -1,   352,
      -1,   377,    29,   356,   374,   142,   258,   259,   260,    -1,
      -1,   140,   375,   141,    -1,   376,    -1,   375,   376,    -1,
     210,    -1,   213,    -1,    13,   298,    -1,    14,   298,    -1,
      15,   298,    -1,    87,   381,   380,   379,    -1,   381,   380,
     379,    -1,   377,   303,   356,    -1,    -1,   148,    -1,    -1,
     380,   146,    -1,   314,    -1,   314,   151,   382,   152,    -1,
      57,   314,    -1,    84,    66,    -1,    66,    -1,    84,    -1,
      84,    67,    -1,    67,    -1,    68,    -1,    84,    68,    -1,
      68,    68,    -1,    84,    68,    68,    -1,    69,    -1,    70,
      -1,    65,    -1,    83,    71,    -1,    84,    71,    -1,    71,
      -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,    96,
      -1,   116,    -1,   377,    -1,   382,   138,   377,    -1,    -1,
     110,   136,   384,   137,    -1,    -1,   314,    -1,   384,   138,
     314,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   500,   500,   501,   504,   504,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   582,   588,   593,   598,   599,   609,   616,   625,   630,
     635,   636,   646,   653,   661,   666,   671,   672,   682,   689,
     715,   723,   728,   729,   740,   746,   754,   804,   808,   882,
     887,   888,   899,   902,   905,   917,   931,   936,   936,   955,
     955,  1014,  1028,  1029,  1032,  1033,  1034,  1038,  1042,  1051,
    1060,  1061,  1064,  1078,  1078,  1115,  1116,  1119,  1120,  1123,
    1123,  1152,  1153,  1156,  1161,  1168,  1173,  1178,  1179,  1189,
    1196,  1196,  1222,  1223,  1226,  1232,  1245,  1248,  1251,  1254,
    1259,  1260,  1265,  1271,  1308,  1316,  1322,  1327,  1328,  1341,
    1349,  1357,  1365,  1375,  1386,  1391,  1396,  1397,  1407,  1414,
    1425,  1430,  1435,  1436,  1446,  1453,  1471,  1476,  1481,  1482,
    1492,  1499,  1503,  1508,  1509,  1519,  1522,  1525,  1539,  1557,
    1562,  1567,  1568,  1578,  1585,  1589,  1594,  1595,  1605,  1608,
    1611,  1625,  1635,  1645,  1657,  1662,  1663,  1677,  1686,  1701,
    1710,  1719,  1733,  1737,  1742,  1743,  1753,  1756,  1759,  1762,
    1776,  1777,  1793,  1796,  1799,  1808,  1814,  1819,  1820,  1831,
    1837,  1845,  1853,  1859,  1864,  1869,  1870,  1880,  1887,  1890,
    1895,  1898,  1903,  1906,  1911,  1917,  1923,  1929,  1934,  1939,
    1944,  1949,  1954,  1959,  1964,  1969,  1974,  1979,  1985,  1990,
    1996,  2002,  2008,  2014,  2020,  2025,  2031,  2037,  2043,  2048,
    2049,  2059,  2066,  2146,  2149,  2154,  2159,  2160,  2170,  2177,
    2180,  2183,  2192,  2198,  2203,  2204,  2215,  2221,  2232,  2237,
    2240,  2241,  2252,  2252,  2271,  2274,  2279,  2282,  2287,  2288,
    2291,  2292,  2295,  2296,  2297,  2333,  2334,  2337,  2338,  2341,
    2344,  2349,  2350,  2368,  2371,  2374,  2377,  2380,  2383,  2388,
    2391,  2394,  2397,  2400,  2403,  2406,  2411,  2425,  2426,  2434,
    2439,  2442,  2447,  2456,  2466,  2470,  2474,  2478,  2482,  2486,
    2492,  2497,  2503,  2521,  2538,  2573,  2579,  2573,  2612,  2612,
    2638,  2643,  2649,  2643,  2679,  2680,  2683,  2684,  2687,  2726,
    2729,  2734,  2735,  2738,  2739,  2740,  2741,  2742,  2743,  2744,
    2745,  2746,  2747,  2751,  2755,  2759,  2770,  2781,  2792,  2803,
    2814,  2825,  2836,  2847,  2858,  2859,  2860,  2861,  2872,  2883,
    2890,  2897,  2904,  2913,  2926,  2931,  2932,  2944,  2951,  2958,
    2967,  2971,  2976,  2977,  2987,  2990,  2993,  3007,  3010,  3015,
    3077,  3077,  3078,  3081,  3124,  3127,  3127,  3138,  3141,  3141,
    3153,  3156,  3161,  3179,  3199,  3235,  3316,  3317,  3318,  3319,
    3320,  3321,  3322,  3323,  3324,  3325,  3326,  3327,  3328,  3329,
    3330,  3331,  3332,  3333,  3334,  3335,  3336,  3337,  3338,  3339,
    3340,  3341,  3342,  3343,  3344,  3347,  3350,  3355,  3358,  3366,
    3369,  3375,  3379,  3391,  3395,  3401,  3405,  3428,  3432,  3438,
    3441,  3446,  3449,  3454,  3502,  3507,  3513,  3540,  3551,  3562,
    3573,  3591,  3601,  3617,  3633,  3641,  3648,  3648,  3649,  3649,
    3650,  3654,  3654,  3655,  3659,  3660,  3664,  3664,  3665,  3668,
    3720,  3726,  3731,  3732,  3744,  3747,  3750,  3765,  3780,  3797,
    3802,  3816,  3909,  3912,  3920,  3923,  3928,  3936,  3947,  3962,
    3966,  3970,  3974,  3978,  3982,  3986,  3990,  3994,  3998,  4002,
    4006,  4010,  4014,  4018,  4022,  4026,  4030,  4034,  4038,  4042,
    4046,  4050,  4054,  4058,  4062,  4068,  4074,  4090,  4093,  4101,
    4107,  4114
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_API", "TK_AUTOPYNAME",
  "TK_DEFDOCSTRING", "TK_DEFENCODING", "TK_PLUGIN", "TK_DOCSTRING",
  "TK_DOC", "TK_EXPORTEDDOC", "TK_EXTRACT", "TK_MAKEFILE", "TK_ACCESSCODE",
  "TK_GETCODE", "TK_SETCODE", "TK_PREINITCODE", "TK_INITCODE",
  "TK_POSTINITCODE", "TK_UNITCODE", "TK_UNITPOSTINCLUDECODE", "TK_MODCODE",
  "TK_TYPECODE", "TK_PREPYCODE", "TK_COPYING", "TK_MAPPEDTYPE",
  "TK_CODELINE", "TK_IF", "TK_END", "TK_NAME_VALUE", "TK_PATH_VALUE",
  "TK_STRING_VALUE", "TK_VIRTUALCATCHERCODE", "TK_TRAVERSECODE",
  "TK_CLEARCODE", "TK_GETBUFFERCODE", "TK_RELEASEBUFFERCODE",
  "TK_READBUFFERCODE", "TK_WRITEBUFFERCODE", "TK_SEGCOUNTCODE",
  "TK_CHARBUFFERCODE", "TK_PICKLECODE", "TK_METHODCODE", "TK_FROMTYPE",
  "TK_TOTYPE", "TK_TOSUBCLASS", "TK_INCLUDE", "TK_OPTINCLUDE", "TK_IMPORT",
  "TK_EXPHEADERCODE", "TK_MODHEADERCODE", "TK_TYPEHEADERCODE", "TK_MODULE",
  "TK_CMODULE", "TK_CONSMODULE", "TK_COMPOMODULE", "TK_CLASS", "TK_STRUCT",
  "TK_PUBLIC", "TK_PROTECTED", "TK_PRIVATE", "TK_SIGNALS",
  "TK_SIGNAL_METHOD", "TK_SLOTS", "TK_SLOT_METHOD", "TK_BOOL", "TK_SHORT",
  "TK_INT", "TK_LONG", "TK_FLOAT", "TK_DOUBLE", "TK_CHAR", "TK_WCHAR_T",
  "TK_VOID", "TK_PYOBJECT", "TK_PYTUPLE", "TK_PYLIST", "TK_PYDICT",
  "TK_PYCALLABLE", "TK_PYSLICE", "TK_PYTYPE", "TK_VIRTUAL", "TK_ENUM",
  "TK_SIGNED", "TK_UNSIGNED", "TK_SCOPE", "TK_LOGICAL_OR", "TK_CONST",
  "TK_STATIC", "TK_SIPSIGNAL", "TK_SIPSLOT", "TK_SIPANYSLOT",
  "TK_SIPRXCON", "TK_SIPRXDIS", "TK_SIPSLOTCON", "TK_SIPSLOTDIS",
  "TK_SIPSSIZET", "TK_NUMBER_VALUE", "TK_REAL_VALUE", "TK_TYPEDEF",
  "TK_NAMESPACE", "TK_TIMELINE", "TK_PLATFORMS", "TK_FEATURE",
  "TK_LICENSE", "TK_QCHAR_VALUE", "TK_TRUE_VALUE", "TK_FALSE_VALUE",
  "TK_NULL_VALUE", "TK_OPERATOR", "TK_THROW", "TK_QOBJECT", "TK_EXCEPTION",
  "TK_RAISECODE", "TK_EXPLICIT", "TK_TEMPLATE", "TK_ELLIPSIS",
  "TK_DEFMETATYPE", "TK_DEFSUPERTYPE", "TK_PROPERTY", "TK_FORMAT",
  "TK_GET", "TK_ID", "TK_KWARGS", "TK_LANGUAGE", "TK_LICENSEE", "TK_NAME",
  "TK_OPTIONAL", "TK_ORDER", "TK_REMOVELEADING", "TK_SET", "TK_SIGNATURE",
  "TK_TIMESTAMP", "TK_TYPE", "TK_USEARGNAMES", "TK_VERSION", "'('", "')'",
  "','", "'='", "'{'", "'}'", "';'", "'!'", "'-'", "'+'", "'*'", "'/'",
  "'&'", "'|'", "'~'", "'<'", "'>'", "':'", "'['", "']'", "'%'", "'^'",
  "$accept", "specification", "statement", "@1", "modstatement",
  "nsstatement", "defdocstring", "defdocstring_args",
  "defdocstring_arg_list", "defdocstring_arg", "defencoding",
  "defencoding_args", "defencoding_arg_list", "defencoding_arg", "plugin",
  "plugin_args", "plugin_arg_list", "plugin_arg", "api", "api_args",
  "api_arg_list", "api_arg", "exception", "baseexception",
  "exception_body", "exception_body_directives",
  "exception_body_directive", "raisecode", "mappedtype", "@2",
  "mappedtypetmpl", "@3", "mtdefinition", "mtbody", "mtline", "mtfunction",
  "namespace", "@4", "optnsbody", "nsbody", "platforms", "@5",
  "platformlist", "platform", "feature", "feature_args",
  "feature_arg_list", "feature_arg", "timeline", "@6", "qualifierlist",
  "qualifiername", "ifstart", "oredqualifiers", "qualifiers", "ifend",
  "license", "license_args", "license_arg_list", "license_arg",
  "defmetatype", "defmetatype_args", "defmetatype_arg_list",
  "defmetatype_arg", "defsupertype", "defsupertype_args",
  "defsupertype_arg_list", "defsupertype_arg", "consmodule",
  "consmodule_args", "consmodule_arg_list", "consmodule_arg",
  "consmodule_body", "consmodule_body_directives",
  "consmodule_body_directive", "compmodule", "compmodule_args",
  "compmodule_arg_list", "compmodule_arg", "compmodule_body",
  "compmodule_body_directives", "compmodule_body_directive", "module",
  "module_args", "module_arg_list", "module_arg", "module_body",
  "module_body_directives", "module_body_directive", "dottedname",
  "optnumber", "include", "include_args", "include_arg_list",
  "include_arg", "optinclude", "import", "import_args", "import_arg_list",
  "import_arg", "optaccesscode", "optgetcode", "optsetcode", "copying",
  "exphdrcode", "modhdrcode", "typehdrcode", "travcode", "clearcode",
  "getbufcode", "releasebufcode", "readbufcode", "writebufcode",
  "segcountcode", "charbufcode", "picklecode", "modcode", "typecode",
  "preinitcode", "initcode", "postinitcode", "unitcode", "unitpostinccode",
  "prepycode", "doc", "exporteddoc", "autopyname", "autopyname_args",
  "autopyname_arg_list", "autopyname_arg", "docstring", "docstring_args",
  "docstring_arg_list", "docstring_arg", "optdocstring", "extract",
  "extract_args", "extract_arg_list", "extract_arg", "makefile",
  "codeblock", "codelines", "enum", "@7", "optfilename", "optname",
  "optenumbody", "enumbody", "enumline", "optcomma", "optenumassign",
  "optassign", "expr", "binop", "optunop", "value", "scopedname",
  "scopepart", "bool_value", "simplevalue", "exprlist", "typedef",
  "struct", "@8", "@9", "classtmpl", "@10", "template", "class", "@11",
  "@12", "superclasses", "superlist", "superclass", "optclassbody",
  "classbody", "classline", "property", "property_args",
  "property_arg_list", "property_arg", "property_body",
  "property_body_directives", "property_body_directive", "optslot", "dtor",
  "ctor", "@13", "simplector", "optctorsig", "@14", "optsig", "@15",
  "optvirtual", "function", "operatorname", "optconst", "optabstract",
  "optflags", "flaglist", "flag", "flagvalue", "methodcode",
  "virtualcatchercode", "arglist", "rawarglist", "argvalue", "varmember",
  "@16", "@17", "simple_varmem", "@18", "varmem", "member", "@19",
  "variable", "variable_body", "variable_body_directives",
  "variable_body_directive", "cpptype", "argtype", "optref", "deref",
  "basetype", "cpptypelist", "optexceptions", "exceptionlist", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,    40,    41,    44,    61,
     123,   125,    59,    33,    45,    43,    42,    47,    38,   124,
     126,    60,    62,    58,    91,    93,    37,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   158,   159,   159,   161,   160,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   164,   165,   165,   166,   166,   167,   168,   169,   169,
     170,   170,   171,   172,   173,   173,   174,   174,   175,   176,
     177,   177,   178,   178,   179,   179,   180,   181,   181,   182,
     183,   183,   184,   184,   184,   184,   185,   187,   186,   189,
     188,   190,   191,   191,   192,   192,   192,   192,   192,   192,
     192,   192,   193,   195,   194,   196,   196,   197,   197,   199,
     198,   200,   200,   201,   202,   203,   203,   204,   204,   205,
     207,   206,   208,   208,   209,   210,   211,   211,   211,   211,
     212,   212,   213,   214,   215,   215,   215,   216,   216,   217,
     217,   217,   217,   218,   219,   219,   220,   220,   221,   222,
     223,   223,   224,   224,   225,   226,   227,   227,   228,   228,
     229,   230,   230,   231,   231,   232,   232,   232,   233,   234,
     234,   235,   235,   236,   237,   237,   238,   238,   239,   239,
     239,   240,   240,   241,   241,   242,   242,   243,   243,   243,
     243,   243,   244,   244,   245,   245,   246,   246,   246,   246,
     247,   247,   248,   248,   249,   250,   250,   251,   251,   252,
     252,   253,   254,   255,   255,   256,   256,   257,   258,   258,
     259,   259,   260,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     286,   287,   288,   289,   289,   289,   290,   290,   291,   292,
     292,   293,   294,   294,   295,   295,   296,   296,   297,   298,
     299,   299,   301,   300,   302,   302,   303,   303,   304,   304,
     305,   305,   306,   306,   306,   307,   307,   308,   308,   309,
     309,   310,   310,   311,   311,   311,   311,   311,   311,   312,
     312,   312,   312,   312,   312,   312,   313,   314,   314,   315,
     316,   316,   317,   317,   317,   317,   317,   317,   317,   317,
     318,   318,   318,   319,   319,   321,   322,   320,   324,   323,
     325,   327,   328,   326,   329,   329,   330,   330,   331,   332,
     332,   333,   333,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   335,   336,   337,   337,   338,   338,   338,
     339,   339,   340,   340,   341,   341,   341,   342,   342,   343,
     345,   344,   344,   346,   347,   348,   347,   349,   350,   349,
     351,   351,   352,   352,   352,   352,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   354,   354,   355,   355,   356,
     356,   357,   357,   358,   358,   359,   359,   359,   359,   360,
     360,   361,   361,   362,   363,   363,   363,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   366,   365,   367,   365,
     365,   369,   368,   368,   370,   370,   372,   371,   371,   373,
     374,   374,   375,   375,   376,   376,   376,   376,   376,   377,
     377,   378,   379,   379,   380,   380,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   382,   382,   383,   383,   384,
     384,   384
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     3,     1,     3,     3,     2,     1,     3,
       1,     3,     3,     2,     1,     3,     1,     3,     3,     2,
       2,     3,     1,     3,     3,     3,     5,     0,     3,     4,
       1,     2,     1,     1,     1,     1,     2,     0,     5,     0,
       6,     4,     1,     2,     1,     1,     1,     1,     2,     2,
       1,     1,    13,     0,     5,     0,     3,     1,     2,     0,
       5,     1,     2,     1,     2,     1,     3,     1,     3,     3,
       0,     5,     1,     2,     1,     4,     1,     2,     3,     4,
       1,     3,     1,     3,     0,     1,     3,     1,     3,     3,
       3,     3,     3,     2,     1,     3,     1,     3,     3,     2,
       1,     3,     1,     3,     3,     3,     1,     3,     1,     3,
       3,     0,     4,     1,     2,     1,     1,     1,     3,     1,
       3,     1,     3,     3,     0,     4,     1,     2,     1,     1,
       1,     3,     3,     2,     3,     1,     3,     3,     3,     3,
       3,     3,     0,     4,     1,     2,     1,     1,     1,     1,
       1,     1,     0,     1,     2,     1,     3,     1,     3,     3,
       3,     2,     2,     1,     3,     1,     3,     3,     0,     2,
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     1,
       3,     3,     3,     0,     1,     3,     1,     3,     3,     0,
       1,     3,     1,     3,     1,     3,     3,     3,     4,     2,
       1,     2,     0,     8,     0,     1,     0,     1,     0,     1,
       1,     2,     1,     1,     4,     0,     1,     0,     2,     0,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     1,
       1,     1,     1,     4,     1,     1,     1,     1,     1,     1,
       0,     1,     3,     5,    11,     0,     0,     8,     0,     3,
       4,     0,     0,     8,     0,     2,     1,     3,     1,     0,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     3,     2,     3,     3,     1,     3,     3,     3,     3,
       0,     4,     1,     2,     1,     1,     1,     0,     1,    11,
       0,     3,     1,    10,     0,     0,     6,     0,     0,     7,
       0,     1,    14,     7,    14,    13,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     1,     2,     2,     1,
       2,     2,     2,     1,     2,     0,     1,     0,     2,     0,
       3,     1,     3,     1,     3,     1,     5,     1,     1,     0,
       2,     0,     2,     1,     0,     1,     3,     4,     4,     4,
       3,     3,     6,     6,     3,     2,     0,     3,     0,     3,
       1,     0,     3,     1,     1,     1,     0,     3,     1,     8,
       0,     3,     1,     2,     1,     1,     2,     2,     2,     4,
       3,     3,     0,     1,     0,     2,     1,     4,     2,     2,
       1,     1,     2,     1,     1,     2,     2,     3,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     4,     0,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     4,     2,     0,     1,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,   309,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   510,   500,
     503,   504,   508,   509,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   276,     0,   501,     0,   523,     0,
       0,   120,   109,     0,   134,     0,     0,     0,   524,     0,
       0,     5,    38,    19,    20,     9,    14,    45,    36,    37,
      41,    16,    17,    15,    39,    40,    18,    21,    22,     7,
       8,     6,    11,    12,    13,    10,    23,    24,    50,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      47,   496,   307,    46,    42,    44,   328,    43,    48,    49,
       0,   494,     0,     0,    69,    52,     0,    51,    58,     0,
      57,    64,     0,    63,   270,   245,     0,   246,   262,     0,
       0,   274,   239,   240,   241,   242,   243,   237,   244,   224,
       0,   439,   276,   205,     0,   204,   211,   213,     0,   212,
     225,   226,   227,   200,   201,     0,   192,   202,   202,     0,
     161,   156,     0,   174,   169,   331,   325,   506,   277,   439,
     511,   499,   502,   505,   512,   494,     0,   103,     0,     0,
     115,     0,   114,   135,     0,   439,     0,    77,     0,     0,
     143,   144,     0,   149,   150,     0,     0,     0,     0,   439,
       0,   492,    70,     0,     0,     0,    72,     0,     0,    54,
       0,     0,    60,     0,     0,    66,   271,   269,     0,     0,
       0,   264,   261,   275,     0,   498,     0,    87,   126,     0,
     130,     0,     0,     0,     0,     0,   207,     0,     0,   215,
       0,     0,     0,     0,     0,     0,   185,     0,   181,   203,
     183,   182,     0,     0,   158,     0,   155,     0,     0,   171,
       0,   168,   334,   334,   272,   507,   492,   439,   494,   105,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
     137,   133,   454,     0,   439,   525,     0,     0,     0,   146,
       0,     0,   152,   308,     0,   439,   329,   454,   480,     0,
       0,     0,   407,   406,   408,   409,   411,   412,   426,   429,
     433,     0,   410,   413,     0,   495,   493,   490,     0,     0,
      71,     0,     0,    53,     0,     0,    59,     0,     0,    65,
       0,     0,     0,   263,     0,   268,   443,     0,   441,     0,
     127,     0,   125,   276,     0,     0,   206,     0,     0,   214,
       0,     0,     0,     0,     0,     0,   184,     0,     0,   253,
     196,   197,     0,   194,   198,   199,     0,   157,     0,   165,
     166,     0,   163,   167,     0,   170,     0,   178,   179,     0,
     176,   180,     0,   439,   439,     0,   489,     0,     0,     0,
       0,   124,     0,   122,   113,     0,   111,     0,   116,     0,
       0,     0,     0,     0,   136,     0,   276,   276,   276,   276,
     276,     0,     0,   276,     0,   453,   455,   276,   289,     0,
       0,     0,   330,     0,   145,     0,     0,   151,     0,   497,
      89,     0,     0,     0,   427,     0,   431,   432,   417,   416,
     418,   419,   421,   422,   430,   414,   434,   415,   428,   420,
     423,   454,    74,    75,    73,    56,    55,    62,    61,    68,
      67,   266,   267,   265,     0,     0,   440,     0,    88,   128,
       0,   131,   209,   310,   311,   210,   208,   217,   216,   187,
     188,   189,   190,   191,   186,     0,   247,   254,     0,     0,
       0,   195,   160,   159,     0,   164,   173,   172,     0,   177,
     338,   335,   336,   332,   326,   278,   323,     0,   107,     0,
     328,   104,   121,   123,   110,   112,   119,   118,   140,   141,
     142,   139,   138,   439,   439,   439,   439,   439,   454,   454,
     439,   435,     0,   439,   299,   465,    78,     0,    76,   526,
     148,   147,   154,   153,     0,   435,     0,     0,     0,   484,
     485,     0,   482,   218,     0,   424,   425,     0,   200,   447,
     448,   445,   444,   442,     0,     0,     0,     0,     0,    92,
     101,    94,    95,    96,    97,   100,   129,     0,     0,   249,
       0,     0,   256,   252,   193,   162,   175,     0,   339,   339,
     287,   282,   283,     0,   279,   280,     0,   106,   108,   289,
     289,   289,   460,   461,     0,     0,   464,   436,   527,   456,
     491,   300,   302,   303,   304,   305,   301,   290,     0,   291,
       0,     0,    80,    84,    82,    83,    85,    90,   527,   486,
     487,   488,   481,   483,     0,   220,     0,   435,   202,   238,
      98,    99,     0,     0,    93,     0,   248,     0,     0,   255,
       0,   337,   400,     0,     0,   299,   439,     0,   281,     0,
     457,   458,   459,   276,   276,     0,   437,   293,   294,   295,
     296,   297,   298,   299,   318,   315,   314,   319,   317,   312,
     316,   306,     0,    86,     0,    81,   437,   219,     0,   222,
     403,   527,     0,     0,    91,   251,   250,   258,   257,   309,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   387,   387,   387,     0,   466,   468,   476,   471,   390,
       0,   348,   345,   343,   344,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   353,   352,   350,   349,   346,
     347,   400,   341,   351,   365,   364,   392,     0,   478,   366,
     470,   473,   474,   475,   333,   327,   288,   285,   273,     0,
     439,   439,   529,     0,   439,   292,   299,    79,   439,   221,
       0,   479,   437,   202,   454,   454,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   368,   367,   388,     0,     0,
       0,   372,     0,     0,     0,     0,     0,     0,   380,   340,
     342,     0,   286,   284,   439,   462,   463,   530,     0,   438,
     397,   321,     0,   397,   223,   439,   446,     0,     0,   369,
     370,   371,   476,   467,   469,   477,     0,   472,     0,   391,
       0,     0,     0,     0,   375,     0,   373,     0,     0,   528,
       0,   398,     0,   313,   299,     0,   397,   435,   527,     0,
       0,     0,     0,   374,     0,   384,   385,   386,     0,   382,
       0,   324,   531,     0,   449,   322,   259,     0,   527,   439,
     377,   378,   379,   376,     0,   383,   527,     0,     0,   451,
     260,   449,   449,   439,   394,   381,   437,   454,   450,     0,
     405,   451,   451,   397,   395,     0,   439,     0,   452,   402,
     404,     0,     0,   259,     0,     0,   259,   454,   449,   449,
     399,   449,     0,   393,   451,   102,     0,   389,   396
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    71,    72,    73,   127,   218,   219,
      74,   130,   221,   222,    75,   133,   224,   225,    76,   124,
     215,   216,    77,   294,   548,   631,   632,   633,    78,   349,
      79,   554,   478,   578,   579,   580,    80,   279,   400,   519,
      81,   189,   405,   406,    82,   192,   283,   284,    83,   188,
     402,   403,    84,   240,   241,    85,    86,   195,   289,   290,
      87,   200,   298,   299,    88,   203,   301,   302,    89,   170,
     263,   264,   266,   381,   382,    90,   173,   268,   269,   271,
     389,   390,    91,   166,   255,   256,   258,   372,   373,   167,
     260,    92,   155,   245,   246,    93,    94,   159,   248,   249,
     645,   699,   781,    95,    96,    97,    98,   736,   737,   738,
     739,   740,   741,   742,   743,   744,    99,   584,   100,   101,
     102,   103,   104,   105,   106,   107,   374,   496,   588,   589,
     890,   499,   591,   592,   891,   108,   140,   230,   231,   109,
     135,   136,   110,   395,   234,   179,   603,   604,   605,   813,
     666,   545,   627,   683,   628,   629,   111,   112,   485,   691,
     822,   113,   114,   273,   599,   115,   208,   520,   117,   272,
     598,   393,   511,   512,   663,   751,   752,   753,   808,   843,
     844,   846,   868,   869,   798,   754,   755,   806,   756,   905,
     912,   852,   873,   757,   758,   324,   618,   774,   237,   347,
     348,   572,   889,   900,   424,   425,   426,   759,   802,   803,
     760,   805,   761,   762,   804,   763,   443,   561,   562,   427,
     428,   327,   211,   121,   296,   676,   818
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -690
static const yytype_int16 yypact[] =
{
    -690,   126,  -690,   897,  -690,  -690,    29,    16,    70,    35,
     110,   110,    53,   125,   110,   110,   110,   110,   110,   110,
     110,   110,  1425,    24,  -690,  -690,    55,   136,    66,   110,
     110,   110,    32,   289,    50,    64,   210,   210,  -690,  -690,
    -690,   116,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,   222,   184,   215,  1425,  -690,  1390,
     231,  -690,  -690,    57,    72,  1390,   210,   133,  -690,    79,
      81,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,    39,  -690,  -690,  -690,  -690,   268,  -690,  -690,  -690,
      68,  -690,   214,    -7,  -690,  -690,   199,  -690,  -690,   235,
    -690,  -690,   242,  -690,  -690,  -690,   245,  -690,  -690,    94,
     110,   336,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
     210,   189,    26,  -690,   118,  -690,  -690,  -690,   249,  -690,
    -690,  -690,  -690,  -690,  -690,   154,   246,   283,   283,   262,
     253,  -690,   274,   286,  -690,   357,    30,  -690,  -690,   189,
    -690,  -690,  -690,   382,  -690,  -690,    69,  -690,   312,   313,
    -690,   329,  -690,  -690,   207,   189,   320,   113,  1390,   331,
    -690,  -690,   332,  -690,  -690,   210,  1390,  1425,   403,   101,
     208,   166,  -690,   321,   322,   192,  -690,   323,   212,  -690,
     325,   240,  -690,   326,   254,  -690,  -690,  -690,   327,   328,
     258,  -690,  -690,  -690,   110,   357,   434,  -690,   330,   439,
     383,   333,   334,   337,   338,   261,  -690,   340,   273,  -690,
     341,   342,   344,   345,   346,   275,  -690,   119,  -690,  -690,
    -690,  -690,   348,   277,  -690,   238,  -690,   350,   279,  -690,
     238,  -690,   319,   319,  -690,  -690,   166,   189,  -690,   335,
     444,   461,   352,   282,  -690,   354,   355,   356,   358,   285,
    -690,  -690,  1175,   210,   189,  -690,    75,   361,   287,  -690,
     362,   290,  -690,  -690,    82,   189,  -690,  1175,   363,   359,
     155,   365,   366,   367,   368,   369,   370,   372,  -690,    99,
      11,   360,   373,   374,   378,  -690,  -690,  -690,   487,   421,
    -690,    -7,   488,  -690,   199,   489,  -690,   235,   493,  -690,
     242,   494,   428,  -690,    94,  -690,   387,   120,  -690,   388,
    -690,    27,  -690,   222,   497,   324,  -690,   118,   500,  -690,
     249,   501,   502,   289,   324,   437,  -690,   154,   395,    74,
    -690,  -690,    38,  -690,  -690,  -690,   289,  -690,   262,  -690,
    -690,    40,  -690,  -690,   289,  -690,   274,  -690,  -690,    42,
    -690,  -690,   210,   189,   189,   396,  -690,   393,    15,  1119,
     397,  -690,     8,  -690,  -690,    31,  -690,   508,  -690,   329,
     509,   511,   513,   517,  -690,   207,   222,   222,   222,   222,
     222,   407,   413,   222,   414,   412,  -690,   222,   416,    36,
     417,  1390,  -690,   289,  -690,   331,   289,  -690,   332,  -690,
    -690,   415,   248,   419,  -690,  1390,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,   420,  -690,   423,  -690,  -690,
    -690,  1175,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,   195,   434,  -690,   213,  -690,  -690,
     527,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,   429,  -690,  -690,   446,   110,
     425,  -690,  -690,  -690,   426,  -690,  -690,  -690,   431,  -690,
     357,   432,  -690,  -690,  -690,   306,  -690,   457,  -690,   960,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,   189,   189,   189,   189,   189,  1175,  1175,
     189,   484,  1175,   189,   239,  -690,  -690,   105,  -690,  -690,
    -690,  -690,  -690,  -690,   388,   484,   110,   110,   110,  -690,
    -690,    62,  -690,   561,   460,  -690,  -690,   464,   445,  -690,
    -690,  -690,  -690,  -690,   110,   110,   110,  1390,    56,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,   463,   296,  -690,
     466,   299,  -690,  -690,  -690,  -690,  -690,   210,   436,   436,
     470,  -690,  -690,   471,   306,  -690,   477,  -690,  -690,   416,
     416,   416,  -690,  -690,   479,   485,  -690,  -690,   514,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,   259,  1232,  -690,
     110,    44,  -690,  -690,  -690,  -690,  -690,  -690,   514,  -690,
    -690,  -690,  -690,  -690,   110,   609,   483,   484,   283,  -690,
    -690,  -690,   597,   490,  -690,   598,  -690,   429,   599,  -690,
     446,  -690,  1055,   492,   495,   239,   189,   498,  -690,  1390,
    -690,  -690,  -690,   222,   222,   499,   503,  -690,  -690,  -690,
    -690,  -690,  -690,   239,  -690,  -690,  -690,  -690,  -690,     7,
    -690,  -690,   507,  -690,   504,  -690,   503,  -690,   110,   621,
    -690,   514,   505,   515,  -690,  -690,  -690,  -690,  -690,   516,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   576,   576,   576,   491,  -690,  -690,   506,  -690,  -690,
     518,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,   782,  -690,  -690,  -690,  -690,  -690,   519,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,   510,  -690,   301,
     189,   189,   210,   548,   189,  -690,   178,  -690,   189,  -690,
     110,  -690,   503,   283,  1175,  1175,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,   520,   521,
     522,  -690,   512,   512,  1337,  1284,   618,   183,   523,  -690,
    -690,   624,  -690,  -690,   189,  -690,  -690,   357,   303,  -690,
     524,   259,   307,   524,  -690,   189,  -690,   525,   528,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,    83,  -690,   516,  -690,
     529,   531,   532,   309,  -690,   238,  -690,   530,   534,  -690,
     210,  -690,   535,  -690,   239,   537,   524,   484,   514,   536,
     626,   628,   629,  -690,   183,  -690,  -690,  -690,    46,  -690,
     543,  -690,   357,  1390,   617,   259,   656,   539,   514,   189,
    -690,  -690,  -690,  -690,   540,  -690,   514,   547,   110,   652,
    -690,   617,   617,   189,   538,  -690,   503,  1175,  -690,   110,
    -690,   652,   652,   524,  -690,   544,   189,   551,  -690,  -690,
    -690,   549,   553,   656,   552,   541,   656,  1175,   617,   617,
    -690,   617,   556,  -690,   652,  -690,   542,  -690,  -690
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -690,  -690,   684,  -690,  -690,  -366,  -690,  -690,  -690,   364,
    -690,  -690,  -690,   353,  -690,  -690,  -690,   371,  -690,  -690,
    -690,   379,  -571,  -690,  -690,  -690,    85,  -690,  -690,  -690,
    -690,  -690,   141,  -690,   134,  -690,  -556,  -690,  -690,  -690,
    -690,  -690,  -690,   308,  -690,  -690,  -690,   305,  -690,  -690,
    -690,   315,  -241,  -690,  -690,  -230,  -690,  -690,  -690,   304,
    -690,  -690,  -690,   288,  -690,  -690,  -690,   280,  -690,  -690,
    -690,   343,  -690,  -690,   339,  -690,  -690,  -690,   347,  -690,
    -690,   349,  -690,  -690,  -690,   376,  -690,  -690,   380,    18,
    -166,  -690,  -690,  -690,   375,  -690,  -690,  -690,  -690,   377,
    -690,  -690,  -690,  -690,  -690,  -690,  -443,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -544,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,    65,
    -227,  -690,  -690,    67,  -611,  -690,  -690,  -690,   381,  -690,
     -11,  -690,  -441,  -690,  -690,  -120,  -690,  -690,   122,  -690,
    -690,  -268,  -660,  -690,  -690,  -501,   -25,   526,  -338,  -690,
    -690,  -542,  -540,  -690,  -690,  -690,  -690,   721,  -191,  -690,
    -690,   455,  -690,   137,   131,  -690,   -16,  -690,  -690,  -690,
    -128,  -690,  -690,  -129,  -377,  -690,  -690,  -690,   -66,  -690,
    -690,  -689,  -690,  -690,    10,  -690,  -530,  -668,  -164,  -690,
     266,  -690,  -649,  -670,  -286,  -690,   202,  -690,  -690,  -690,
    -354,  -690,   -60,  -690,  -690,    19,  -690,  -690,   185,    -2,
    -690,   472,  -104,    -8,  -183,  -599,  -690
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -499
static const yytype_int16 yytable[] =
{
     137,   120,   261,   142,   143,   144,   145,   146,   147,   148,
     149,   175,   176,   118,   151,   274,   370,   306,   160,   161,
     162,   441,   119,   304,   379,   638,   492,   371,   778,   387,
     375,   291,   242,   518,   583,   380,   585,   401,   383,   696,
     388,   197,   368,   391,   517,   308,   369,   125,   369,   185,
     369,   168,   171,   174,   369,   238,   479,   186,   122,  -498,
     404,   163,   164,   196,   131,    23,    24,    23,    24,    23,
      24,    23,    24,    23,    24,   556,   557,   558,   574,   163,
     164,   276,   138,    23,    24,   153,   190,   201,   204,    23,
      24,   731,   205,   163,   164,    31,   157,   209,   277,   575,
     576,   128,   782,   193,   636,   497,   732,    31,   163,   164,
     163,   164,   859,   397,   825,   205,   821,   701,   745,   213,
     748,   205,   749,   368,   205,   235,     4,   369,   214,   232,
     430,   370,    23,    24,   855,   583,   134,   585,    54,  -498,
     379,   440,   371,  -496,   577,   375,    23,    24,   387,   522,
     456,   380,   126,   608,   383,   141,    31,   630,   206,   388,
     152,   325,   391,   457,   766,   123,   156,   877,   165,   239,
     480,   132,   524,   546,   398,   567,  -498,   210,  -498,   500,
     731,   504,   775,   508,   177,   694,   169,   884,   636,   139,
     206,   154,   210,   191,   875,   732,   295,   653,   205,   305,
     172,   559,   158,   642,   295,   278,   129,   745,   194,   748,
     498,   749,   560,   431,   911,   199,   228,   202,   630,   735,
     431,   747,   229,   345,   568,   164,   569,   432,   906,   513,
     514,   909,   910,   481,   439,   574,   581,   307,   454,    25,
      23,    24,   901,   902,   243,   244,   369,   582,   236,   293,
     455,   178,   614,   615,   927,   180,   575,   576,   475,   879,
     187,   556,   557,   558,    31,    23,    24,   476,   429,   923,
     924,   226,   925,   227,   601,    23,    24,   250,   251,   893,
     252,   181,   182,   183,   198,   602,   184,   896,   253,   254,
     690,   445,   570,   207,   446,    54,   533,   534,   535,   536,
     537,   577,   918,   540,   840,   921,   634,   543,   735,   841,
     747,   212,   325,   842,   326,  -320,  -320,   635,   163,   164,
     559,   621,   622,   623,   624,   217,   625,   878,   626,   330,
     331,   560,   285,    23,    24,   600,   236,   581,   286,   287,
     288,   670,   671,   672,   309,   799,   800,   310,   582,   333,
     334,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   220,   321,   601,   322,   323,   233,   510,   223,   609,
     610,   611,   612,   613,   602,   247,   616,   336,   337,   620,
     259,   491,   621,   622,   623,   624,   257,   625,   262,   626,
     634,   339,   340,   265,   502,   343,   344,   120,   356,   357,
     267,   635,   506,   677,   678,   679,   680,   681,   682,   118,
     359,   360,   366,   367,   377,   378,   385,   386,   119,   408,
     409,   733,   414,   415,   434,   435,   270,   437,   438,   549,
     483,   484,   734,   656,   657,   746,   659,   660,   814,   431,
     849,   850,   205,   564,   853,   854,   863,   864,   833,   834,
     275,   550,   280,   281,   552,   282,   292,   297,   300,    36,
     328,   329,   332,   346,   335,   338,   341,   342,   350,   351,
     352,   750,   392,   401,  -277,   399,   354,   355,   353,   358,
     361,   362,   702,   363,   364,   365,   769,   376,   593,   384,
     404,   407,   571,   410,   411,   412,   444,   413,   827,   828,
     433,   436,   767,   442,   447,   448,   449,   450,   451,   452,
     733,   453,   459,   460,   461,   458,   462,   120,   463,   465,
     467,   734,   469,   471,   746,   472,   474,   482,   477,   118,
     487,   495,   489,   490,   493,   516,   515,   526,   119,   521,
     528,    25,   529,   538,   530,   639,   640,   641,   531,   539,
     542,   541,   555,   770,   771,   544,   586,   547,   587,   565,
     750,   563,   566,   649,   650,   651,   590,   594,   595,   150,
     597,   617,   510,   596,   644,   652,   662,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   832,   606,    55,    56,   646,   648,    57,
     728,   647,   655,   689,   865,   658,   815,   816,    58,   665,
     820,   907,   667,   669,   823,   866,   673,   826,   867,   693,
     692,    65,   674,   698,   675,   700,   703,   865,    68,   705,
     707,   922,   704,   697,   764,   772,   780,   765,   866,   797,
     768,   867,   773,   776,   801,   819,   777,   838,   812,   783,
     848,   784,   785,   847,   807,   880,  -401,   881,   882,   888,
     120,   856,   857,   845,   369,   858,   870,   295,   860,   811,
     861,   862,   307,   829,   830,   831,   871,   874,   851,   876,
     886,   892,   895,   897,   899,     5,   913,   779,   915,   917,
     468,   916,   904,   926,   919,   637,   920,   928,   466,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     464,   470,   654,   525,   527,   894,   695,   523,   553,   532,
     505,   503,   706,   551,   116,   473,   668,   708,   394,   903,
     664,   303,   486,   507,   661,   810,   883,   488,   509,   885,
     839,   573,   914,   494,   619,   837,   643,   817,   396,   120,
       0,     0,   501,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   824,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,   120,   836,   120,   574,     0,     0,     0,     0,    23,
      24,   709,     0,     0,   835,   710,   711,   712,   713,   714,
     715,   716,   717,   718,     0,   872,   719,   720,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,    36,    37,
     721,   722,   723,   724,   725,     0,   726,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   727,    54,    55,    56,     0,     0,    57,
     728,   887,     0,     0,     0,     0,     0,   898,    58,     0,
       0,    59,    60,     0,     0,     0,     0,     0,   908,     0,
       0,    65,     0,     0,    66,     0,   729,     0,    68,     0,
       6,   730,     7,     8,     9,     0,    10,    11,    12,    13,
       0,     0,     0,    14,    15,    16,    17,    18,    19,     0,
      20,    21,    22,   809,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,    54,
      55,    56,     0,     0,    57,     0,     0,    23,    24,    25,
       0,     0,     0,    58,     0,     0,    59,    60,    61,    62,
      63,    64,     0,     0,     0,     0,    65,     0,     0,    66,
       0,    31,    67,    68,    69,    70,    36,    37,     0,     0,
       0,     0,     0,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,    54,    55,    56,     0,     0,    57,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,     0,    59,
      60,     0,     0,   369,     0,     0,     0,     0,     0,    65,
       0,     0,    66,     0,     0,    67,    68,   574,     0,     0,
       0,     0,    23,    24,   709,     0,     0,     0,   710,   711,
     712,   713,   714,   715,   716,   717,   718,     0,     0,   719,
     720,   607,     0,     0,     0,     0,    31,     0,     0,     0,
       0,    36,    37,   721,   722,   723,   724,   725,     0,   726,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   727,    54,    55,    56,
       0,     0,    57,   728,     0,     0,    23,    24,    25,     0,
       0,    58,     0,     0,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,    66,     0,   729,
      31,    68,     0,     0,   730,    36,    37,     0,     0,     0,
       0,     0,     0,     0,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,    54,    55,    56,    25,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
       0,    66,   150,     0,    67,    68,     0,     0,     0,     0,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,    55,    56,
       0,    25,    57,   684,   416,   417,   418,   419,   420,   421,
     422,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   423,     0,     0,   150,
       0,    68,     0,     0,     0,     0,     0,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    25,     0,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,   685,
     686,     0,     0,     0,     0,     0,     0,   687,   483,   484,
     688,   150,     0,     0,     0,     0,     0,     0,    68,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   832,    25,    55,    56,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,   150,     0,     0,     0,     0,     0,
      68,     0,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,    25,
      55,    56,     0,     0,    57,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,   150,     0,     0,
       0,     0,     0,    68,    25,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,    55,    56,     0,     0,    57,     0,     0,
       0,     0,   150,     0,     0,     0,    58,     0,     0,     0,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    68,     0,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68
};

static const yytype_int16 yycheck[] =
{
      11,     3,   168,    14,    15,    16,    17,    18,    19,    20,
      21,    36,    37,     3,    22,   179,   257,   208,    29,    30,
      31,   307,     3,   206,   265,   555,   364,   257,   696,   270,
     257,   195,   152,   399,   477,   265,   477,    29,   265,   638,
     270,    66,     4,   270,    29,   209,     8,    31,     8,    57,
       8,    33,    34,    35,     8,    29,    29,    59,    29,    29,
      29,    29,    30,    65,    29,    27,    28,    27,    28,    27,
      28,    27,    28,    27,    28,    13,    14,    15,    22,    29,
      30,   185,    29,    27,    28,    30,    29,    69,    70,    27,
      28,   662,    85,    29,    30,    51,    30,    29,    29,    43,
      44,    31,   701,    31,   547,    31,   662,    51,    29,    30,
      29,    30,    29,   277,   782,    85,   776,   647,   662,   126,
     662,    85,   662,     4,    85,   150,     0,     8,   135,   140,
     294,   372,    27,    28,   823,   578,    26,   578,    82,   109,
     381,   305,   372,   136,    88,   372,    27,    28,   389,   141,
     139,   381,   136,   519,   381,    30,    51,   113,   151,   389,
     136,   146,   389,   152,   665,   136,    30,   856,   136,   143,
     143,   136,   141,   137,   278,   461,   146,   109,   148,   141,
     751,   141,   683,   141,    68,   141,   136,   141,   631,   136,
     151,   136,   109,   136,   854,   751,   198,   141,    85,   207,
     136,   442,   136,   141,   206,   136,   136,   751,   136,   751,
     136,   751,   442,   138,   903,   136,   122,   136,   113,   662,
     138,   662,   128,   234,    29,    30,    31,   152,   896,   393,
     394,   901,   902,   353,   152,    22,   477,   136,   139,    29,
      27,    28,   891,   892,   126,   127,     8,   477,   147,   136,
     151,    29,   538,   539,   924,    71,    43,    44,   138,   858,
      29,    13,    14,    15,    51,    27,    28,   147,   293,   918,
     919,    26,   921,    28,   515,    27,    28,   123,   124,   878,
     126,    66,    67,    68,   151,   515,    71,   886,   134,   135,
     628,   136,    97,    25,   139,    82,   416,   417,   418,   419,
     420,    88,   913,   423,   121,   916,   547,   427,   751,   126,
     751,    97,   146,   130,   148,   137,   138,   547,    29,    30,
     561,   143,   144,   145,   146,   126,   148,   857,   150,   137,
     138,   561,   125,    27,    28,    29,   147,   578,   131,   132,
     133,   609,   610,   611,   136,   722,   723,   139,   578,   137,
     138,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   126,   154,   604,   156,   157,    30,   392,   126,   533,
     534,   535,   536,   537,   604,   126,   540,   137,   138,   543,
      97,   363,   143,   144,   145,   146,   140,   148,   126,   150,
     631,   137,   138,   140,   376,   137,   138,   399,   137,   138,
     126,   631,   384,   144,   145,   146,   147,   148,   149,   399,
     137,   138,   137,   138,   137,   138,   137,   138,   399,   137,
     138,   662,   137,   138,   137,   138,   140,   137,   138,   431,
     106,   107,   662,   137,   138,   662,   137,   138,   137,   138,
     137,   138,    85,   445,   137,   138,   137,   138,   802,   803,
      68,   433,   140,   140,   436,   126,   136,   126,   126,    56,
     139,   139,   139,    29,   139,   139,   139,   139,    29,    86,
     137,   662,   153,    29,   144,   140,   139,   139,   144,   139,
     139,   139,   648,   139,   139,   139,   669,   139,   499,   139,
      29,   139,   474,   139,   139,   139,   137,   139,   784,   785,
     139,   139,   666,   140,   139,   139,   139,   139,   139,   139,
     751,   139,   139,   139,   136,   155,    29,   519,    97,    31,
      31,   751,    29,    29,   751,    97,   139,    30,   140,   519,
      30,   136,    31,    31,    97,   142,   140,    29,   519,   142,
      31,    29,    31,   136,    31,   556,   557,   558,    31,   136,
     138,   137,   137,   673,   674,   139,    29,   140,   129,   139,
     751,   142,   139,   574,   575,   576,   120,   142,   142,    57,
     138,    87,   597,   142,    13,   577,   140,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,   137,    83,    84,   137,   153,    87,
      88,   137,   139,   628,   845,   139,   770,   771,    96,   139,
     774,   897,   141,   136,   778,   845,   137,   783,   845,   630,
     628,   109,   137,    14,   110,   142,    29,   868,   116,    31,
      31,   917,   142,   644,   142,   136,    15,   142,   868,    63,
     142,   868,   139,   136,   153,    97,   142,    29,   138,   144,
     814,   136,   136,    29,   136,    29,   150,    29,    29,    42,
     662,   825,   137,   140,     8,   137,   136,   669,   139,   150,
     139,   139,   136,   153,   153,   153,   142,   142,   154,   142,
     137,   142,   142,   136,    32,     1,   142,   698,   137,   136,
     337,   142,   154,   137,   142,   554,   155,   155,   334,   710,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     331,   340,   578,   405,   409,   879,   631,   402,   438,   415,
     381,   378,   657,   435,     3,   344,   604,   660,   273,   893,
     599,   205,   357,   386,   597,   751,   864,   360,   389,   868,
     806,   475,   906,   367,   542,   805,   561,   772,   276,   751,
      -1,    -1,   372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   780,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     802,   803,   804,   805,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,   804,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,   850,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    -1,    87,
      88,   873,    -1,    -1,    -1,    -1,    -1,   888,    96,    -1,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,   899,    -1,
      -1,   109,    -1,    -1,   112,    -1,   114,    -1,   116,    -1,
       3,   119,     5,     6,     7,    -1,     9,    10,    11,    12,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,   141,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    96,    -1,    -1,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,   109,    -1,    -1,   112,
      -1,    51,   115,   116,   117,   118,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
     100,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,   112,    -1,    -1,   115,   116,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    44,
      45,   141,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,    87,    88,    -1,    -1,    27,    28,    29,    -1,
      -1,    96,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,   114,
      51,   116,    -1,    -1,   119,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    83,    84,    29,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,   112,    57,    -1,   115,   116,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    84,
      -1,    29,    87,    31,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    57,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    29,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
     108,    57,    -1,    -1,    -1,    -1,    -1,    -1,   116,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    29,    83,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    57,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    29,
      83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    57,    -1,    -1,
      -1,    -1,    -1,   116,    29,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,   116,    -1,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   159,   160,   161,     0,   160,     3,     5,     6,     7,
       9,    10,    11,    12,    16,    17,    18,    19,    20,    21,
      23,    24,    25,    27,    28,    29,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    82,    83,    84,    87,    96,    99,
     100,   101,   102,   103,   104,   109,   112,   115,   116,   117,
     118,   162,   163,   164,   168,   172,   176,   180,   186,   188,
     194,   198,   202,   206,   210,   213,   214,   218,   222,   226,
     233,   240,   249,   253,   254,   261,   262,   263,   264,   274,
     276,   277,   278,   279,   280,   281,   282,   283,   293,   297,
     300,   314,   315,   319,   320,   323,   325,   326,   352,   373,
     377,   381,    29,   136,   177,    31,   136,   165,    31,   136,
     169,    29,   136,   173,    26,   298,   299,   298,    29,   136,
     294,    30,   298,   298,   298,   298,   298,   298,   298,   298,
      57,   381,   136,    30,   136,   250,    30,    30,   136,   255,
     298,   298,   298,    29,    30,   136,   241,   247,   247,   136,
     227,   247,   136,   234,   247,   314,   314,    68,    29,   303,
      71,    66,    67,    68,    71,   381,   377,    29,   207,   199,
      29,   136,   203,    31,   136,   215,   377,   314,   151,   136,
     219,   247,   136,   223,   247,    85,   151,    25,   324,    29,
     109,   380,    97,   126,   135,   178,   179,   126,   166,   167,
     126,   170,   171,   126,   174,   175,    26,    28,   122,   128,
     295,   296,   298,    30,   302,   314,   147,   356,    29,   143,
     211,   212,   303,   126,   127,   251,   252,   126,   256,   257,
     123,   124,   126,   134,   135,   242,   243,   140,   244,    97,
     248,   248,   126,   228,   229,   140,   230,   126,   235,   236,
     140,   237,   327,   321,   356,    68,   380,    29,   136,   195,
     140,   140,   126,   204,   205,   125,   131,   132,   133,   216,
     217,   356,   136,   136,   181,   377,   382,   126,   220,   221,
     126,   224,   225,   315,   382,   381,   326,   136,   356,   136,
     139,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   154,   156,   157,   353,   146,   148,   379,   139,   139,
     137,   138,   139,   137,   138,   139,   137,   138,   139,   137,
     138,   139,   139,   137,   138,   298,    29,   357,   358,   187,
      29,    86,   137,   144,   139,   139,   137,   138,   139,   137,
     138,   139,   139,   139,   139,   139,   137,   138,     4,     8,
     210,   213,   245,   246,   284,   288,   139,   137,   138,   210,
     213,   231,   232,   288,   139,   137,   138,   210,   213,   238,
     239,   288,   153,   329,   329,   301,   379,   356,   380,   140,
     196,    29,   208,   209,    29,   200,   201,   139,   137,   138,
     139,   139,   139,   139,   137,   138,    89,    90,    91,    92,
      93,    94,    95,   111,   362,   363,   364,   377,   378,   314,
     356,   138,   152,   139,   137,   138,   139,   137,   138,   152,
     356,   362,   140,   374,   137,   136,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   151,   139,   152,   155,   139,
     139,   136,    29,    97,   179,    31,   167,    31,   171,    29,
     175,    29,    97,   296,   139,   138,   147,   140,   190,    29,
     143,   303,    30,   106,   107,   316,   252,    30,   257,    31,
      31,   247,   316,    97,   243,   136,   285,    31,   136,   289,
     141,   246,   247,   229,   141,   232,   247,   236,   141,   239,
     314,   330,   331,   356,   356,   140,   142,    29,   163,   197,
     325,   142,   141,   209,   141,   201,    29,   205,    31,    31,
      31,    31,   217,   303,   303,   303,   303,   303,   136,   136,
     303,   137,   138,   303,   139,   309,   137,   140,   182,   377,
     247,   221,   247,   225,   189,   137,    13,    14,    15,   210,
     213,   375,   376,   142,   377,   139,   139,   362,    29,    31,
      97,   247,   359,   358,    22,    43,    44,    88,   191,   192,
     193,   210,   213,   264,   275,   300,    29,   129,   286,   287,
     120,   290,   291,   298,   142,   142,   142,   138,   328,   322,
      29,   210,   213,   304,   305,   306,   137,   141,   163,   356,
     356,   356,   356,   356,   362,   362,   356,    87,   354,   364,
     356,   143,   144,   145,   146,   148,   150,   310,   312,   313,
     113,   183,   184,   185,   210,   213,   264,   190,   354,   298,
     298,   298,   141,   376,    13,   258,   137,   137,   153,   298,
     298,   298,   377,   141,   192,   139,   137,   138,   139,   137,
     138,   331,   140,   332,   332,   139,   308,   141,   306,   136,
     309,   309,   309,   137,   137,   110,   383,   144,   145,   146,
     147,   148,   149,   311,    31,    97,    98,   105,   108,   314,
     316,   317,   381,   298,   141,   184,   383,   298,    14,   259,
     142,   354,   248,    29,   142,    31,   287,    31,   291,    29,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    44,
      45,    58,    59,    60,    61,    62,    64,    81,    88,   114,
     119,   180,   194,   210,   213,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   275,   288,   300,   319,   320,
     326,   333,   334,   335,   343,   344,   346,   351,   352,   365,
     368,   370,   371,   373,   142,   142,   313,   356,   142,   382,
     303,   303,   136,   139,   355,   313,   136,   142,   355,   298,
      15,   260,   383,   144,   136,   136,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,    63,   342,   342,
     342,   153,   366,   367,   372,   369,   345,   136,   336,   141,
     334,   150,   138,   307,   137,   356,   356,   314,   384,    97,
     356,   310,   318,   356,   298,   355,   248,   362,   362,   153,
     153,   153,    81,   368,   368,   352,   377,   370,    29,   346,
     121,   126,   130,   337,   338,   140,   339,    29,   356,   137,
     138,   154,   349,   137,   138,   349,   356,   137,   137,    29,
     139,   139,   139,   137,   138,   210,   213,   288,   340,   341,
     136,   142,   314,   350,   142,   310,   142,   349,   354,   383,
      29,    29,    29,   338,   141,   341,   137,   377,    42,   360,
     288,   292,   142,   383,   356,   142,   383,   136,   298,    32,
     361,   360,   360,   356,   154,   347,   355,   362,   298,   361,
     361,   349,   348,   142,   356,   137,   142,   136,   292,   142,
     155,   292,   362,   360,   360,   360,   137,   361,   155
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 4:
#line 504 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /*
             * We don't do these in parserEOF() because the parser is reading
             * ahead and that would be too early.
             */

            if (previousFile != NULL)
            {
                handleEOF();

                if (currentContext.prevmod != NULL)
                    handleEOM();

                free(previousFile);
                previousFile = NULL;
            }
    }
    break;

  case 50:
#line 569 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope == NULL)
                    yyerror("%TypeHeaderCode can only be used in a namespace, class or mapped type");

                appendCodeBlock(&scope->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 51:
#line 582 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                currentModule->defdocstring = convertFormat((yyvsp[(2) - (2)].defdocstring).name);
        }
    break;

  case 52:
#line 588 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.defdocstring).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 53:
#line 593 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.defdocstring) = (yyvsp[(2) - (3)].defdocstring);
        }
    break;

  case 55:
#line 599 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.defdocstring) = (yyvsp[(1) - (3)].defdocstring);

            switch ((yyvsp[(3) - (3)].defdocstring).token)
            {
            case TK_NAME: (yyval.defdocstring).name = (yyvsp[(3) - (3)].defdocstring).name; break;
            }
        }
    break;

  case 56:
#line 609 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.defdocstring).token = TK_NAME;

            (yyval.defdocstring).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 57:
#line 616 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if ((currentModule->encoding = convertEncoding((yyvsp[(2) - (2)].defencoding).name)) == no_type)
                    yyerror("The %DefaultEncoding name must be one of \"ASCII\", \"Latin-1\", \"UTF-8\" or \"None\"");
            }
        }
    break;

  case 58:
#line 625 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.defencoding).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 59:
#line 630 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.defencoding) = (yyvsp[(2) - (3)].defencoding);
        }
    break;

  case 61:
#line 636 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.defencoding) = (yyvsp[(1) - (3)].defencoding);

            switch ((yyvsp[(3) - (3)].defencoding).token)
            {
            case TK_NAME: (yyval.defencoding).name = (yyvsp[(3) - (3)].defencoding).name; break;
            }
        }
    break;

  case 62:
#line 646 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.defencoding).token = TK_NAME;

            (yyval.defencoding).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 63:
#line 653 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* Note that %Plugin is internal in SIP v4. */

            if (notSkipping())
                appendString(&currentSpec->plugins, (yyvsp[(2) - (2)].plugin).name);
        }
    break;

  case 64:
#line 661 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.plugin).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 65:
#line 666 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.plugin) = (yyvsp[(2) - (3)].plugin);
        }
    break;

  case 67:
#line 672 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.plugin) = (yyvsp[(1) - (3)].plugin);

            switch ((yyvsp[(3) - (3)].plugin).token)
            {
            case TK_NAME: (yyval.plugin).name = (yyvsp[(3) - (3)].plugin).name; break;
            }
        }
    break;

  case 68:
#line 682 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.plugin).token = TK_NAME;

            (yyval.plugin).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 69:
#line 689 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                apiVersionRangeDef *avd;

                if (findAPI(currentSpec, (yyvsp[(2) - (2)].api).name) != NULL)
                    yyerror("The API name in the %API directive has already been defined");

                if ((yyvsp[(2) - (2)].api).version < 1)
                    yyerror("The version number in the %API directive must be greater than or equal to 1");

                avd = sipMalloc(sizeof (apiVersionRangeDef));

                avd->api_name = cacheName(currentSpec, (yyvsp[(2) - (2)].api).name);
                avd->from = (yyvsp[(2) - (2)].api).version;
                avd->to = -1;

                avd->next = currentModule->api_versions;
                currentModule->api_versions = avd;

                if (inMainModule())
                    setIsUsedName(avd->api_name);
            }
        }
    break;

  case 70:
#line 715 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            deprecated("%API name and version number should be specified using the 'name' and 'version' arguments");

            (yyval.api).name = (yyvsp[(1) - (2)].text);
            (yyval.api).version = (yyvsp[(2) - (2)].number);
        }
    break;

  case 71:
#line 723 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.api) = (yyvsp[(2) - (3)].api);
        }
    break;

  case 73:
#line 729 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.api) = (yyvsp[(1) - (3)].api);

            switch ((yyvsp[(3) - (3)].api).token)
            {
            case TK_NAME: (yyval.api).name = (yyvsp[(3) - (3)].api).name; break;
            case TK_VERSION: (yyval.api).version = (yyvsp[(3) - (3)].api).version; break;
            }
        }
    break;

  case 74:
#line 740 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.api).token = TK_NAME;

            (yyval.api).name = (yyvsp[(3) - (3)].text);
            (yyval.api).version = 0;
        }
    break;

  case 75:
#line 746 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.api).token = TK_VERSION;

            (yyval.api).name = NULL;
            (yyval.api).version = (yyvsp[(3) - (3)].number);
        }
    break;

  case 76:
#line 754 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                static const char *annos[] = {
                    "Default",
                    "PyName",
                    NULL
                };

                exceptionDef *xd;
                const char *pyname;

                checkAnnos(&(yyvsp[(4) - (5)].optflags), annos);

                if (currentSpec->genc)
                    yyerror("%Exception not allowed in a C module");

                if ((yyvsp[(5) - (5)].exception).raise_code == NULL)
                    yyerror("%Exception must have a %RaiseCode sub-directive");

                pyname = getPythonName(currentModule, &(yyvsp[(4) - (5)].optflags), scopedNameTail((yyvsp[(2) - (5)].scpvalp)));

                checkAttributes(currentSpec, currentModule, NULL, NULL,
                        pyname, FALSE);

                xd = findException(currentSpec, (yyvsp[(2) - (5)].scpvalp), TRUE);

                if (xd->cd != NULL)
                    yyerror("%Exception name has already been seen as a class name - it must be defined before being used");

                if (xd->iff->module != NULL)
                    yyerror("The %Exception has already been defined");

                /* Complete the definition. */
                xd->iff->module = currentModule;
                appendCodeBlock(&xd->iff->hdrcode, (yyvsp[(5) - (5)].exception).type_header_code);
                xd->pyname = pyname;
                xd->bibase = (yyvsp[(3) - (5)].exceptionbase).bibase;
                xd->base = (yyvsp[(3) - (5)].exceptionbase).base;
                appendCodeBlock(&xd->raisecode, (yyvsp[(5) - (5)].exception).raise_code);

                if (getOptFlag(&(yyvsp[(4) - (5)].optflags), "Default", bool_flag) != NULL)
                    currentModule->defexception = xd;

                if (xd->bibase != NULL || xd->base != NULL)
                    xd->exceptionnr = currentModule->nrexceptions++;
            }
        }
    break;

  case 77:
#line 804 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.exceptionbase).bibase = NULL;
            (yyval.exceptionbase).base = NULL;
        }
    break;

  case 78:
#line 808 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            exceptionDef *xd;

            (yyval.exceptionbase).bibase = NULL;
            (yyval.exceptionbase).base = NULL;

            /* See if it is a defined exception. */
            for (xd = currentSpec->exceptions; xd != NULL; xd = xd->next)
                if (compareScopedNames(xd->iff->fqcname, (yyvsp[(2) - (3)].scpvalp)) == 0)
                {
                    (yyval.exceptionbase).base = xd;
                    break;
                }

            if (xd == NULL && (yyvsp[(2) - (3)].scpvalp)->next == NULL && strncmp((yyvsp[(2) - (3)].scpvalp)->name, "SIP_", 4) == 0)
            {
                /* See if it is a builtin exception. */

                static char *builtins[] = {
                    "Exception",
                    "StopIteration",
                    "StandardError",
                    "ArithmeticError",
                    "LookupError",
                    "AssertionError",
                    "AttributeError",
                    "EOFError",
                    "FloatingPointError",
                    "EnvironmentError",
                    "IOError",
                    "OSError",
                    "ImportError",
                    "IndexError",
                    "KeyError",
                    "KeyboardInterrupt",
                    "MemoryError",
                    "NameError",
                    "OverflowError",
                    "RuntimeError",
                    "NotImplementedError",
                    "SyntaxError",
                    "IndentationError",
                    "TabError",
                    "ReferenceError",
                    "SystemError",
                    "SystemExit",
                    "TypeError",
                    "UnboundLocalError",
                    "UnicodeError",
                    "UnicodeEncodeError",
                    "UnicodeDecodeError",
                    "UnicodeTranslateError",
                    "ValueError",
                    "ZeroDivisionError",
                    "WindowsError",
                    "VMSError",
                    NULL
                };

                char **cp;

                for (cp = builtins; *cp != NULL; ++cp)
                    if (strcmp((yyvsp[(2) - (3)].scpvalp)->name + 4, *cp) == 0)
                    {
                        (yyval.exceptionbase).bibase = *cp;
                        break;
                    }
            }

            if ((yyval.exceptionbase).bibase == NULL && (yyval.exceptionbase).base == NULL)
                yyerror("Unknown exception base type");
        }
    break;

  case 79:
#line 882 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.exception) = (yyvsp[(2) - (4)].exception);
        }
    break;

  case 81:
#line 888 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.exception) = (yyvsp[(1) - (2)].exception);

            switch ((yyvsp[(2) - (2)].exception).token)
            {
            case TK_RAISECODE: (yyval.exception).raise_code = (yyvsp[(2) - (2)].exception).raise_code; break;
            case TK_TYPEHEADERCODE: (yyval.exception).type_header_code = (yyvsp[(2) - (2)].exception).type_header_code; break;
            }
        }
    break;

  case 82:
#line 899 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.exception).token = TK_IF;
        }
    break;

  case 83:
#line 902 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.exception).token = TK_END;
        }
    break;

  case 84:
#line 905 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.exception).token = TK_RAISECODE;
                (yyval.exception).raise_code = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.exception).token = 0;
                (yyval.exception).raise_code = NULL;
            }
        }
    break;

  case 85:
#line 917 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.exception).token = TK_TYPEHEADERCODE;
                (yyval.exception).type_header_code = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.exception).token = 0;
                (yyval.exception).type_header_code = NULL;
            }
        }
    break;

  case 86:
#line 931 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 87:
#line 936 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                static const char *annos[] = {
                    "AllowNone",
                    "API",
                    "DocType",
                    "NoRelease",
                    "PyName",
                    NULL
                };

                checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

                currentMappedType = newMappedType(currentSpec, &(yyvsp[(2) - (3)].memArg), &(yyvsp[(3) - (3)].optflags));
            }
        }
    break;

  case 89:
#line 955 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                static const char *annos[] = {
                    "DocType",
                    NULL
                };

                int a;
                mappedTypeTmplDef *mtt;
                ifaceFileDef *iff;

                checkAnnos(&(yyvsp[(4) - (4)].optflags), annos);

                if (currentSpec->genc)
                    yyerror("%MappedType templates not allowed in a C module");

                /*
                 * Check the template arguments are basic types or simple
                 * names.
                 */
                for (a = 0; a < (yyvsp[(1) - (4)].signature).nrArgs; ++a)
                {
                    argDef *ad = &(yyvsp[(1) - (4)].signature).args[a];

                    if (ad->atype == defined_type && ad->u.snd->next != NULL)
                        yyerror("%MappedType template arguments must be simple names");
                }

                if ((yyvsp[(3) - (4)].memArg).atype != template_type)
                    yyerror("%MappedType template must map a template type");

                /* Check a template hasn't already been provided. */
                for (mtt = currentSpec->mappedtypetemplates; mtt != NULL; mtt = mtt->next)
                    if (compareScopedNames(mtt->mt->type.u.td->fqname, (yyvsp[(3) - (4)].memArg).u.td->fqname) == 0 && sameTemplateSignature(&mtt->mt->type.u.td->types, &(yyvsp[(3) - (4)].memArg).u.td->types, TRUE))
                        yyerror("%MappedType template for this type has already been defined");

                (yyvsp[(3) - (4)].memArg).nrderefs = 0;
                (yyvsp[(3) - (4)].memArg).argflags = 0;

                mtt = sipMalloc(sizeof (mappedTypeTmplDef));

                mtt->sig = (yyvsp[(1) - (4)].signature);
                mtt->mt = allocMappedType(currentSpec, &(yyvsp[(3) - (4)].memArg));
                mtt->mt->doctype = getDocType(&(yyvsp[(4) - (4)].optflags));
                mtt->next = currentSpec->mappedtypetemplates;

                currentSpec->mappedtypetemplates = mtt;

                currentMappedType = mtt->mt;

                /* Create a dummy interface file. */
                iff = sipMalloc(sizeof (ifaceFileDef));
                iff->hdrcode = NULL;
                mtt->mt->iff = iff;
            }
        }
    break;

  case 91:
#line 1014 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convfromcode == NULL)
                    yyerror("%MappedType must have a %ConvertFromTypeCode directive");

                if (currentMappedType->convtocode == NULL)
                    yyerror("%MappedType must have a %ConvertToTypeCode directive");

                currentMappedType = NULL;
            }
        }
    break;

  case 96:
#line 1034 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentMappedType->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 97:
#line 1038 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentMappedType->typecode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 98:
#line 1042 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convfromcode != NULL)
                    yyerror("%MappedType has more than one %ConvertFromTypeCode directive");

                appendCodeBlock(&currentMappedType->convfromcode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 99:
#line 1051 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convtocode != NULL)
                    yyerror("%MappedType has more than one %ConvertToTypeCode directive");

                appendCodeBlock(&currentMappedType->convtocode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 102:
#line 1064 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                applyTypeFlags(currentModule, &(yyvsp[(2) - (13)].memArg), &(yyvsp[(9) - (13)].optflags));

                (yyvsp[(5) - (13)].signature).result = (yyvsp[(2) - (13)].memArg);

                newFunction(currentSpec, currentModule, NULL,
                        currentMappedType, 0, TRUE, FALSE, FALSE, FALSE, (yyvsp[(3) - (13)].text),
                        &(yyvsp[(5) - (13)].signature), (yyvsp[(7) - (13)].number), FALSE, &(yyvsp[(9) - (13)].optflags), (yyvsp[(13) - (13)].codeb), NULL, (yyvsp[(8) - (13)].throwlist), (yyvsp[(10) - (13)].optsignature), (yyvsp[(12) - (13)].codeb));
            }
        }
    break;

  case 103:
#line 1078 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("namespace definition not allowed in a C module");

            if (notSkipping())
            {
                classDef *ns, *c_scope;
                ifaceFileDef *scope;

                if ((c_scope = currentScope()) != NULL)
                    scope = c_scope->iff;
                else
                    scope = NULL;

                ns = newClass(currentSpec, namespace_iface, NULL,
                        text2scopedName(scope, (yyvsp[(2) - (2)].text)));

                pushScope(ns);

                sectionFlags = 0;
            }
        }
    break;

  case 104:
#line 1099 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (inMainModule())
                {
                    classDef *ns = currentScope();

                    setIsUsedName(ns->iff->name);
                    setIsUsedName(ns->pyname);
                }

                popScope();
            }
        }
    break;

  case 109:
#line 1123 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                qualDef *qd;

                for (qd = currentModule->qualifiers; qd != NULL; qd = qd->next)
                    if (qd->qtype == platform_qualifier)
                        yyerror("%Platforms has already been defined for this module");
            }
        }
    break;

  case 110:
#line 1133 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                qualDef *qd;
                int nrneeded;

                /* Check that exactly one platform in the set was requested. */
                nrneeded = 0;

                for (qd = currentModule->qualifiers; qd != NULL; qd = qd->next)
                    if (qd->qtype == platform_qualifier && isNeeded(qd))
                        ++nrneeded;

                if (nrneeded > 1)
                    yyerror("No more than one of these %Platforms must be specified with the -t flag");
            }
        }
    break;

  case 113:
#line 1156 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            newQualifier(currentModule,-1,-1,(yyvsp[(1) - (1)].text),platform_qualifier);
        }
    break;

  case 114:
#line 1161 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                newQualifier(currentModule, -1, -1, (yyvsp[(2) - (2)].feature).name,
                        feature_qualifier);
        }
    break;

  case 115:
#line 1168 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.feature).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 116:
#line 1173 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.feature) = (yyvsp[(2) - (3)].feature);
        }
    break;

  case 118:
#line 1179 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.feature) = (yyvsp[(1) - (3)].feature);

            switch ((yyvsp[(3) - (3)].feature).token)
            {
            case TK_NAME: (yyval.feature).name = (yyvsp[(3) - (3)].feature).name; break;
            }
        }
    break;

  case 119:
#line 1189 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.feature).token = TK_NAME;

            (yyval.feature).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 120:
#line 1196 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            currentTimelineOrder = 0;
        }
    break;

  case 121:
#line 1199 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                qualDef *qd;
                int nrneeded;

                /*
                 * Check that exactly one time slot in the set was requested.
                 */
                nrneeded = 0;

                for (qd = currentModule->qualifiers; qd != NULL; qd = qd->next)
                    if (qd->qtype == time_qualifier && isNeeded(qd))
                        ++nrneeded;

                if (nrneeded > 1)
                    yyerror("At most one of this %Timeline must be specified with the -t flag");

                currentModule->nrtimelines++;
            }
        }
    break;

  case 124:
#line 1226 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            newQualifier(currentModule, currentModule->nrtimelines,
                    currentTimelineOrder++, (yyvsp[(1) - (1)].text), time_qualifier);
        }
    break;

  case 125:
#line 1232 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (skipStackPtr >= MAX_NESTED_IF)
                yyerror("Internal error: increase the value of MAX_NESTED_IF");

            /* Nested %Ifs are implicit logical ands. */

            if (skipStackPtr > 0)
                (yyvsp[(3) - (4)].boolean) = ((yyvsp[(3) - (4)].boolean) && skipStack[skipStackPtr - 1]);

            skipStack[skipStackPtr++] = (yyvsp[(3) - (4)].boolean);
        }
    break;

  case 126:
#line 1245 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.boolean) = platOrFeature((yyvsp[(1) - (1)].text),FALSE);
        }
    break;

  case 127:
#line 1248 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.boolean) = platOrFeature((yyvsp[(2) - (2)].text),TRUE);
        }
    break;

  case 128:
#line 1251 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.boolean) = (platOrFeature((yyvsp[(3) - (3)].text),FALSE) || (yyvsp[(1) - (3)].boolean));
        }
    break;

  case 129:
#line 1254 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.boolean) = (platOrFeature((yyvsp[(4) - (4)].text),TRUE) || (yyvsp[(1) - (4)].boolean));
        }
    break;

  case 131:
#line 1260 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.boolean) = timePeriod((yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        }
    break;

  case 132:
#line 1265 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (skipStackPtr-- <= 0)
                yyerror("Too many %End directives");
        }
    break;

  case 133:
#line 1271 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            optFlag *of;

            if ((yyvsp[(3) - (3)].optflags).nrFlags != 0)
                deprecated("%License annotations are deprecated, use arguments instead");

            if ((yyvsp[(2) - (3)].license).type == NULL)
                if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "Type", string_flag)) != NULL)
                    (yyvsp[(2) - (3)].license).type = of->fvalue.sval;

            if ((yyvsp[(2) - (3)].license).licensee == NULL)
                if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "Licensee", string_flag)) != NULL)
                    (yyvsp[(2) - (3)].license).licensee = of->fvalue.sval;

            if ((yyvsp[(2) - (3)].license).signature == NULL)
                if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "Signature", string_flag)) != NULL)
                    (yyvsp[(2) - (3)].license).signature = of->fvalue.sval;

            if ((yyvsp[(2) - (3)].license).timestamp == NULL)
                if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "Timestamp", string_flag)) != NULL)
                    (yyvsp[(2) - (3)].license).timestamp = of->fvalue.sval;

            if ((yyvsp[(2) - (3)].license).type == NULL)
                yyerror("%License must have a 'type' argument");

            if (notSkipping())
            {
                currentModule->license = sipMalloc(sizeof (licenseDef));

                currentModule->license->type = (yyvsp[(2) - (3)].license).type;
                currentModule->license->licensee = (yyvsp[(2) - (3)].license).licensee;
                currentModule->license->sig = (yyvsp[(2) - (3)].license).signature;
                currentModule->license->timestamp = (yyvsp[(2) - (3)].license).timestamp;
            }
        }
    break;

  case 134:
#line 1308 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.license).type = NULL;
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 135:
#line 1316 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.license).type = (yyvsp[(1) - (1)].text);
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 136:
#line 1322 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.license) = (yyvsp[(2) - (3)].license);
        }
    break;

  case 138:
#line 1328 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.license) = (yyvsp[(1) - (3)].license);

            switch ((yyvsp[(3) - (3)].license).token)
            {
            case TK_TYPE: (yyval.license).type = (yyvsp[(3) - (3)].license).type; break;
            case TK_LICENSEE: (yyval.license).licensee = (yyvsp[(3) - (3)].license).licensee; break;
            case TK_SIGNATURE: (yyval.license).signature = (yyvsp[(3) - (3)].license).signature; break;
            case TK_TIMESTAMP: (yyval.license).timestamp = (yyvsp[(3) - (3)].license).timestamp; break;
            }
        }
    break;

  case 139:
#line 1341 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.license).token = TK_NAME;

            (yyval.license).type = (yyvsp[(3) - (3)].text);
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 140:
#line 1349 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.license).token = TK_LICENSEE;

            (yyval.license).type = NULL;
            (yyval.license).licensee = (yyvsp[(3) - (3)].text);
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 141:
#line 1357 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.license).token = TK_SIGNATURE;

            (yyval.license).type = NULL;
            (yyval.license).licensee = NULL;
            (yyval.license).signature = (yyvsp[(3) - (3)].text);
            (yyval.license).timestamp = NULL;
        }
    break;

  case 142:
#line 1365 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.license).token = TK_TIMESTAMP;

            (yyval.license).type = NULL;
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = (yyvsp[(3) - (3)].text);
        }
    break;

  case 143:
#line 1375 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (currentModule->defmetatype != NULL)
                    yyerror("%DefaultMetatype has already been defined for this module");

                currentModule->defmetatype = cacheName(currentSpec, (yyvsp[(2) - (2)].defmetatype).name);
            }
        }
    break;

  case 144:
#line 1386 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.defmetatype).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 145:
#line 1391 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.defmetatype) = (yyvsp[(2) - (3)].defmetatype);
        }
    break;

  case 147:
#line 1397 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.defmetatype) = (yyvsp[(1) - (3)].defmetatype);

            switch ((yyvsp[(3) - (3)].defmetatype).token)
            {
            case TK_NAME: (yyval.defmetatype).name = (yyvsp[(3) - (3)].defmetatype).name; break;
            }
        }
    break;

  case 148:
#line 1407 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.defmetatype).token = TK_NAME;

            (yyval.defmetatype).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 149:
#line 1414 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (currentModule->defsupertype != NULL)
                    yyerror("%DefaultSupertype has already been defined for this module");

                currentModule->defsupertype = cacheName(currentSpec, (yyvsp[(2) - (2)].defsupertype).name);
            }
        }
    break;

  case 150:
#line 1425 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.defsupertype).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 151:
#line 1430 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.defsupertype) = (yyvsp[(2) - (3)].defsupertype);
        }
    break;

  case 153:
#line 1436 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.defsupertype) = (yyvsp[(1) - (3)].defsupertype);

            switch ((yyvsp[(3) - (3)].defsupertype).token)
            {
            case TK_NAME: (yyval.defsupertype).name = (yyvsp[(3) - (3)].defsupertype).name; break;
            }
        }
    break;

  case 154:
#line 1446 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.defsupertype).token = TK_NAME;

            (yyval.defsupertype).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 155:
#line 1453 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                /* Make sure this is the first mention of a module. */
                if (currentSpec->module != currentModule)
                    yyerror("A %ConsolidatedModule cannot be %Imported");

                if (currentModule->fullname != NULL)
                    yyerror("%ConsolidatedModule must appear before any %Module or %CModule directive");

                setModuleName(currentSpec, currentModule, (yyvsp[(2) - (3)].consmodule).name);
                appendCodeBlock(&currentModule->docstring, (yyvsp[(3) - (3)].consmodule).docstring);

                setIsConsolidated(currentModule);
            }
        }
    break;

  case 156:
#line 1471 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.consmodule).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 157:
#line 1476 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.consmodule) = (yyvsp[(2) - (3)].consmodule);
        }
    break;

  case 159:
#line 1482 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.consmodule) = (yyvsp[(1) - (3)].consmodule);

            switch ((yyvsp[(3) - (3)].consmodule).token)
            {
            case TK_NAME: (yyval.consmodule).name = (yyvsp[(3) - (3)].consmodule).name; break;
            }
        }
    break;

  case 160:
#line 1492 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.consmodule).token = TK_NAME;

            (yyval.consmodule).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 161:
#line 1499 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.consmodule).token = 0;
            (yyval.consmodule).docstring = NULL;
        }
    break;

  case 162:
#line 1503 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.consmodule) = (yyvsp[(2) - (4)].consmodule);
        }
    break;

  case 164:
#line 1509 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.consmodule) = (yyvsp[(1) - (2)].consmodule);

            switch ((yyvsp[(2) - (2)].consmodule).token)
            {
            case TK_DOCSTRING: (yyval.consmodule).docstring = (yyvsp[(2) - (2)].consmodule).docstring; break;
            }
        }
    break;

  case 165:
#line 1519 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.consmodule).token = TK_IF;
        }
    break;

  case 166:
#line 1522 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.consmodule).token = TK_END;
        }
    break;

  case 167:
#line 1525 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.consmodule).token = TK_DOCSTRING;
                (yyval.consmodule).docstring = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.consmodule).token = 0;
                (yyval.consmodule).docstring = NULL;
            }
        }
    break;

  case 168:
#line 1539 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                /* Make sure this is the first mention of a module. */
                if (currentSpec->module != currentModule)
                    yyerror("A %CompositeModule cannot be %Imported");

                if (currentModule->fullname != NULL)
                    yyerror("%CompositeModule must appear before any %Module directive");

                setModuleName(currentSpec, currentModule, (yyvsp[(2) - (3)].compmodule).name);
                appendCodeBlock(&currentModule->docstring, (yyvsp[(3) - (3)].compmodule).docstring);

                setIsComposite(currentModule);
            }
        }
    break;

  case 169:
#line 1557 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.compmodule).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 170:
#line 1562 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(2) - (3)].compmodule);
        }
    break;

  case 172:
#line 1568 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(1) - (3)].compmodule);

            switch ((yyvsp[(3) - (3)].compmodule).token)
            {
            case TK_NAME: (yyval.compmodule).name = (yyvsp[(3) - (3)].compmodule).name; break;
            }
        }
    break;

  case 173:
#line 1578 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.compmodule).token = TK_NAME;

            (yyval.compmodule).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 174:
#line 1585 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.compmodule).token = 0;
            (yyval.compmodule).docstring = NULL;
        }
    break;

  case 175:
#line 1589 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(2) - (4)].compmodule);
        }
    break;

  case 177:
#line 1595 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(1) - (2)].compmodule);

            switch ((yyvsp[(2) - (2)].compmodule).token)
            {
            case TK_DOCSTRING: (yyval.compmodule).docstring = (yyvsp[(2) - (2)].compmodule).docstring; break;
            }
        }
    break;

  case 178:
#line 1605 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.compmodule).token = TK_IF;
        }
    break;

  case 179:
#line 1608 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.compmodule).token = TK_END;
        }
    break;

  case 180:
#line 1611 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.compmodule).token = TK_DOCSTRING;
                (yyval.compmodule).docstring = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.compmodule).token = 0;
                (yyval.compmodule).docstring = NULL;
            }
        }
    break;

  case 181:
#line 1625 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if ((yyvsp[(2) - (3)].module).name == NULL)
                yyerror("%Module must have a 'name' argument");

            if (notSkipping())
                currentModule = configureModule(currentSpec, currentModule,
                        currentContext.filename, (yyvsp[(2) - (3)].module).name, (yyvsp[(2) - (3)].module).version,
                        (yyvsp[(2) - (3)].module).c_module, (yyvsp[(2) - (3)].module).kwargs, (yyvsp[(2) - (3)].module).use_arg_names,
                        (yyvsp[(3) - (3)].module).docstring);
        }
    break;

  case 182:
#line 1635 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            deprecated("%CModule is deprecated, use %Module and the 'language' argument instead");

            if (notSkipping())
                currentModule = configureModule(currentSpec, currentModule,
                        currentContext.filename, (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].number), TRUE, defaultKwArgs,
                        FALSE, NULL);
        }
    break;

  case 183:
#line 1645 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            if ((yyvsp[(2) - (2)].number) >= 0)
                deprecated("%Module version number should be specified using the 'version' argument");

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = (yyvsp[(1) - (2)].text);
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).version = (yyvsp[(2) - (2)].number);
        }
    break;

  case 184:
#line 1657 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.module) = (yyvsp[(2) - (3)].module);
        }
    break;

  case 186:
#line 1663 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.module) = (yyvsp[(1) - (3)].module);

            switch ((yyvsp[(3) - (3)].module).token)
            {
            case TK_KWARGS: (yyval.module).kwargs = (yyvsp[(3) - (3)].module).kwargs; break;
            case TK_LANGUAGE: (yyval.module).c_module = (yyvsp[(3) - (3)].module).c_module; break;
            case TK_NAME: (yyval.module).name = (yyvsp[(3) - (3)].module).name; break;
            case TK_USEARGNAMES: (yyval.module).use_arg_names = (yyvsp[(3) - (3)].module).use_arg_names; break;
            case TK_VERSION: (yyval.module).version = (yyvsp[(3) - (3)].module).version; break;
            }
        }
    break;

  case 187:
#line 1677 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.module).token = TK_KWARGS;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = convertKwArgs((yyvsp[(3) - (3)].text));
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).version = -1;
        }
    break;

  case 188:
#line 1686 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.module).token = TK_LANGUAGE;

            if (strcmp((yyvsp[(3) - (3)].text), "C++") == 0)
                (yyval.module).c_module = FALSE;
            else if (strcmp((yyvsp[(3) - (3)].text), "C") == 0)
                (yyval.module).c_module = TRUE;
            else
                yyerror("%Module 'language' argument must be either \"C++\" or \"C\"");

            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).version = -1;
        }
    break;

  case 189:
#line 1701 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.module).token = TK_NAME;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = (yyvsp[(3) - (3)].text);
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).version = -1;
        }
    break;

  case 190:
#line 1710 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.module).token = TK_USEARGNAMES;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = (yyvsp[(3) - (3)].boolean);
            (yyval.module).version = -1;
        }
    break;

  case 191:
#line 1719 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if ((yyvsp[(3) - (3)].number) < 0)
                yyerror("%Module 'version' argument cannot be negative");

            (yyval.module).token = TK_VERSION;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).version = (yyvsp[(3) - (3)].number);
        }
    break;

  case 192:
#line 1733 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.module).token = 0;
            (yyval.module).docstring = NULL;
        }
    break;

  case 193:
#line 1737 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.module) = (yyvsp[(2) - (4)].module);
        }
    break;

  case 195:
#line 1743 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.module) = (yyvsp[(1) - (2)].module);

            switch ((yyvsp[(2) - (2)].module).token)
            {
            case TK_DOCSTRING: (yyval.module).docstring = (yyvsp[(2) - (2)].module).docstring; break;
            }
        }
    break;

  case 196:
#line 1753 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.module).token = TK_IF;
        }
    break;

  case 197:
#line 1756 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.module).token = TK_END;
        }
    break;

  case 198:
#line 1759 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.module).token = TK_AUTOPYNAME;
        }
    break;

  case 199:
#line 1762 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.module).token = TK_DOCSTRING;
                (yyval.module).docstring = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.module).token = 0;
                (yyval.module).docstring = NULL;
            }
        }
    break;

  case 201:
#line 1777 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /*
             * The grammar design is a bit broken and this is the easiest way
             * to allow periods in names.
             */

            char *cp;

            for (cp = (yyvsp[(1) - (1)].text); *cp != '\0'; ++cp)
                if (*cp != '.' && *cp != '_' && !isalnum(*cp))
                    yyerror("Invalid character in name");

            (yyval.text) = (yyvsp[(1) - (1)].text);
        }
    break;

  case 202:
#line 1793 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.number) = -1;
        }
    break;

  case 204:
#line 1799 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if ((yyvsp[(2) - (2)].include).name == NULL)
                yyerror("%Include must have a 'name' argument");

            if (notSkipping())
                parseFile(NULL, (yyvsp[(2) - (2)].include).name, NULL, (yyvsp[(2) - (2)].include).optional);
        }
    break;

  case 205:
#line 1808 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.include).name = (yyvsp[(1) - (1)].text);
            (yyval.include).optional = FALSE;
        }
    break;

  case 206:
#line 1814 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.include) = (yyvsp[(2) - (3)].include);
        }
    break;

  case 208:
#line 1820 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.include) = (yyvsp[(1) - (3)].include);

            switch ((yyvsp[(3) - (3)].include).token)
            {
            case TK_NAME: (yyval.include).name = (yyvsp[(3) - (3)].include).name; break;
            case TK_OPTIONAL: (yyval.include).optional = (yyvsp[(3) - (3)].include).optional; break;
            }
        }
    break;

  case 209:
#line 1831 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.include).token = TK_NAME;

            (yyval.include).name = (yyvsp[(3) - (3)].text);
            (yyval.include).optional = FALSE;
        }
    break;

  case 210:
#line 1837 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.include).token = TK_OPTIONAL;

            (yyval.include).name = NULL;
            (yyval.include).optional = (yyvsp[(3) - (3)].boolean);
        }
    break;

  case 211:
#line 1845 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            deprecated("%OptionalInclude is deprecated, use %Include and the 'optional' argument instead");

            if (notSkipping())
                parseFile(NULL, (yyvsp[(2) - (2)].text), NULL, TRUE);
        }
    break;

  case 212:
#line 1853 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                newImport((yyvsp[(2) - (2)].import).name);
        }
    break;

  case 213:
#line 1859 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.import).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 214:
#line 1864 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.import) = (yyvsp[(2) - (3)].import);
        }
    break;

  case 216:
#line 1870 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.import) = (yyvsp[(1) - (3)].import);

            switch ((yyvsp[(3) - (3)].import).token)
            {
            case TK_NAME: (yyval.import).name = (yyvsp[(3) - (3)].import).name; break;
            }
        }
    break;

  case 217:
#line 1880 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.import).token = TK_NAME;

            (yyval.import).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 218:
#line 1887 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 219:
#line 1890 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 220:
#line 1895 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 221:
#line 1898 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 222:
#line 1903 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 223:
#line 1906 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 224:
#line 1911 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->copying, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 225:
#line 1917 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentSpec->exphdrcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 226:
#line 1923 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->hdrcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 227:
#line 1929 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 228:
#line 1934 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 229:
#line 1939 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 230:
#line 1944 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 231:
#line 1949 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 232:
#line 1954 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 233:
#line 1959 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 234:
#line 1964 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 235:
#line 1969 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 236:
#line 1974 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 237:
#line 1979 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->cppcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 238:
#line 1985 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 239:
#line 1990 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->preinitcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 240:
#line 1996 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->initcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 241:
#line 2002 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->postinitcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 242:
#line 2008 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->unitcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 243:
#line 2014 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->unitpostinccode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 244:
#line 2020 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* Deprecated. */
        }
    break;

  case 245:
#line 2025 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping() && inMainModule())
                appendCodeBlock(&currentSpec->docs, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 246:
#line 2031 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentSpec->docs, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 247:
#line 2037 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                addAutoPyName(currentModule, (yyvsp[(2) - (2)].autopyname).remove_leading);
        }
    break;

  case 248:
#line 2043 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.autopyname) = (yyvsp[(2) - (3)].autopyname);
        }
    break;

  case 250:
#line 2049 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.autopyname) = (yyvsp[(1) - (3)].autopyname);

            switch ((yyvsp[(3) - (3)].autopyname).token)
            {
            case TK_REMOVELEADING: (yyval.autopyname).remove_leading = (yyvsp[(3) - (3)].autopyname).remove_leading; break;
            }
        }
    break;

  case 251:
#line 2059 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.autopyname).token = TK_REMOVELEADING;

            (yyval.autopyname).remove_leading = (yyvsp[(3) - (3)].text);
        }
    break;

  case 252:
#line 2066 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(3) - (3)].codeb);

            /* Format the docstring. */
            if ((yyvsp[(2) - (3)].docstring).format == deindented)
            {
                const char *cp;
                char *dp;
                int min_indent, indent, skipping;

                /* Find the common indent. */
                min_indent = -1;
                indent = 0;
                skipping = FALSE;

                for (cp = (yyval.codeb)->frag; *cp != '\0'; ++cp)
                {
                    if (skipping)
                    {
                        /*
                         * We have handled the indent and are just looking for
                         * the end of the line.
                         */
                        if (*cp == '\n')
                            skipping = FALSE;
                    }
                    else
                    {
                        if (*cp == ' ')
                        {
                            ++indent;
                        }
                        else if (*cp != '\n')
                        {
                            if (min_indent < 0 || min_indent > indent)
                                min_indent = indent;

                            /* Ignore the remaining characters of the line. */
                            skipping = TRUE;
                        }
                    }
                }

                /* In case the last line doesn't have a trailing newline. */
                if (min_indent < 0 || min_indent > indent)
                    min_indent = indent;

                /*
                 * Go through the text again removing the common indentation.
                 */
                dp = cp = (yyval.codeb)->frag;

                while (*cp != '\0')
                {
                    const char *start = cp;
                    int non_blank = FALSE;

                    /* Find the end of the line. */
                    while (*cp != '\n' && *cp != '\0')
                        if (*cp++ != ' ')
                            non_blank = TRUE;

                    /* Find where we are copying from. */
                    if (non_blank)
                    {
                        start += min_indent;

                        while (*start != '\n' && *start != '\0')
                            *dp++ = *start++;
                    }

                    if (*cp == '\n')
                        *dp++ = *cp++;
                }

                *dp = '\0';
            }
        }
    break;

  case 253:
#line 2146 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.docstring).format = currentModule->defdocstring;
        }
    break;

  case 254:
#line 2149 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.docstring).format = convertFormat((yyvsp[(1) - (1)].text));
        }
    break;

  case 255:
#line 2154 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.docstring) = (yyvsp[(2) - (3)].docstring);
        }
    break;

  case 257:
#line 2160 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.docstring) = (yyvsp[(1) - (3)].docstring);

            switch ((yyvsp[(3) - (3)].docstring).token)
            {
            case TK_FORMAT: (yyval.docstring).format = (yyvsp[(3) - (3)].docstring).format; break;
            }
        }
    break;

  case 258:
#line 2170 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.docstring).token = TK_FORMAT;

            (yyval.docstring).format = convertFormat((yyvsp[(3) - (3)].text));
        }
    break;

  case 259:
#line 2177 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 261:
#line 2183 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if ((yyvsp[(2) - (3)].extract).id == NULL)
                yyerror("%Extract must have an 'id' argument");

            if (notSkipping())
                addExtractPart(currentSpec, (yyvsp[(2) - (3)].extract).id, (yyvsp[(2) - (3)].extract).order, (yyvsp[(3) - (3)].codeb));
        }
    break;

  case 262:
#line 2192 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.extract).id = (yyvsp[(1) - (1)].text);
            (yyval.extract).order = -1;
        }
    break;

  case 263:
#line 2198 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.extract) = (yyvsp[(2) - (3)].extract);
        }
    break;

  case 265:
#line 2204 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.extract) = (yyvsp[(1) - (3)].extract);

            switch ((yyvsp[(3) - (3)].extract).token)
            {
            case TK_ID: (yyval.extract).id = (yyvsp[(3) - (3)].extract).id; break;
            case TK_ORDER: (yyval.extract).order = (yyvsp[(3) - (3)].extract).order; break;
            }
        }
    break;

  case 266:
#line 2215 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.extract).token = TK_ID;

            (yyval.extract).id = (yyvsp[(3) - (3)].text);
            (yyval.extract).order = -1;
        }
    break;

  case 267:
#line 2221 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.extract).token = TK_ORDER;

            if ((yyvsp[(3) - (3)].number) < 0)
                yyerror("The 'order' of an %Extract directive must not be negative");

            (yyval.extract).id = NULL;
            (yyval.extract).order = (yyvsp[(3) - (3)].number);
        }
    break;

  case 268:
#line 2232 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* Deprecated. */
        }
    break;

  case 271:
#line 2241 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(1) - (2)].codeb);

            append(&(yyval.codeb)->frag, (yyvsp[(2) - (2)].codeb)->frag);

            free((yyvsp[(2) - (2)].codeb)->frag);
            free((char *)(yyvsp[(2) - (2)].codeb)->filename);
            free((yyvsp[(2) - (2)].codeb));
        }
    break;

  case 272:
#line 2252 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "PyName",
                    NULL
                };

                checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

                if (sectionFlags != 0 && (sectionFlags & ~(SECT_IS_PUBLIC | SECT_IS_PROT)) != 0)
                    yyerror("Class enums must be in the public or protected sections");

                currentEnum = newEnum(currentSpec, currentModule,
                        currentMappedType, (yyvsp[(2) - (3)].text), &(yyvsp[(3) - (3)].optflags), sectionFlags);
            }
        }
    break;

  case 274:
#line 2271 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.text) = NULL;
        }
    break;

  case 275:
#line 2274 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.text) = (yyvsp[(1) - (1)].text);
        }
    break;

  case 276:
#line 2279 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.text) = NULL;
        }
    break;

  case 277:
#line 2282 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.text) = (yyvsp[(1) - (1)].text);
        }
    break;

  case 284:
#line 2297 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "PyName",
                    NULL
                };

                enumMemberDef *emd, **tail;

                checkAnnos(&(yyvsp[(3) - (4)].optflags), annos);

                /* Note that we don't use the assigned value. */
                emd = sipMalloc(sizeof (enumMemberDef));

                emd -> pyname = cacheName(currentSpec,
                        getPythonName(currentModule, &(yyvsp[(3) - (4)].optflags), (yyvsp[(1) - (4)].text)));
                emd -> cname = (yyvsp[(1) - (4)].text);
                emd -> ed = currentEnum;
                emd -> next = NULL;

                checkAttributes(currentSpec, currentModule, emd->ed->ecd,
                        emd->ed->emtd, emd->pyname->text, FALSE);

                /* Append to preserve the order. */
                for (tail = &currentEnum->members; *tail != NULL; tail = &(*tail)->next)
                    ;

                *tail = emd;

                if (inMainModule())
                    setIsUsedName(emd -> pyname);
            }
        }
    break;

  case 289:
#line 2341 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.valp) = NULL;
        }
    break;

  case 290:
#line 2344 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.valp) = (yyvsp[(2) - (2)].valp);
        }
    break;

  case 292:
#line 2350 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            valueDef *vd;
 
            if ((yyvsp[(1) - (3)].valp) -> vtype == string_value || (yyvsp[(3) - (3)].valp) -> vtype == string_value)
                yyerror("Invalid binary operator for string");
 
            /* Find the last value in the existing expression. */
 
            for (vd = (yyvsp[(1) - (3)].valp); vd -> next != NULL; vd = vd -> next)
                ;
 
            vd -> vbinop = (yyvsp[(2) - (3)].qchar);
            vd -> next = (yyvsp[(3) - (3)].valp);

            (yyval.valp) = (yyvsp[(1) - (3)].valp);
        }
    break;

  case 293:
#line 2368 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '-';
        }
    break;

  case 294:
#line 2371 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '+';
        }
    break;

  case 295:
#line 2374 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '*';
        }
    break;

  case 296:
#line 2377 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '/';
        }
    break;

  case 297:
#line 2380 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '&';
        }
    break;

  case 298:
#line 2383 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '|';
        }
    break;

  case 299:
#line 2388 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '\0';
        }
    break;

  case 300:
#line 2391 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '!';
        }
    break;

  case 301:
#line 2394 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '~';
        }
    break;

  case 302:
#line 2397 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '-';
        }
    break;

  case 303:
#line 2400 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '+';
        }
    break;

  case 304:
#line 2403 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '*';
        }
    break;

  case 305:
#line 2406 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.qchar) = '&';
        }
    break;

  case 306:
#line 2411 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if ((yyvsp[(1) - (2)].qchar) != '\0' && (yyvsp[(2) - (2)].value).vtype == string_value)
                yyerror("Invalid unary operator for string");
 
            /* Convert the value to a simple expression on the heap. */
            (yyval.valp) = sipMalloc(sizeof (valueDef));
 
            *(yyval.valp) = (yyvsp[(2) - (2)].value);
            (yyval.valp)->vunop = (yyvsp[(1) - (2)].qchar);
            (yyval.valp)->vbinop = '\0';
            (yyval.valp)->next = NULL;
        }
    break;

  case 308:
#line 2426 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("Scoped names are not allowed in a C module");

            appendScopedName(&(yyvsp[(1) - (3)].scpvalp),(yyvsp[(3) - (3)].scpvalp));
        }
    break;

  case 309:
#line 2434 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.scpvalp) = text2scopePart((yyvsp[(1) - (1)].text));
        }
    break;

  case 310:
#line 2439 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 311:
#line 2442 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.boolean) = FALSE;
        }
    break;

  case 312:
#line 2447 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /*
             * We let the C++ compiler decide if the value is a valid one - no
             * point in building a full C++ parser here.
             */

            (yyval.value).vtype = scoped_value;
            (yyval.value).u.vscp = (yyvsp[(1) - (1)].scpvalp);
        }
    break;

  case 313:
#line 2456 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            fcallDef *fcd;

            fcd = sipMalloc(sizeof (fcallDef));
            *fcd = (yyvsp[(3) - (4)].fcall);
            fcd -> type = (yyvsp[(1) - (4)].memArg);

            (yyval.value).vtype = fcall_value;
            (yyval.value).u.fcd = fcd;
        }
    break;

  case 314:
#line 2466 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.value).vtype = real_value;
            (yyval.value).u.vreal = (yyvsp[(1) - (1)].real);
        }
    break;

  case 315:
#line 2470 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = (yyvsp[(1) - (1)].number);
        }
    break;

  case 316:
#line 2474 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = (yyvsp[(1) - (1)].boolean);
        }
    break;

  case 317:
#line 2478 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = 0;
        }
    break;

  case 318:
#line 2482 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.value).vtype = string_value;
            (yyval.value).u.vstr = (yyvsp[(1) - (1)].text);
        }
    break;

  case 319:
#line 2486 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.value).vtype = qchar_value;
            (yyval.value).u.vqchar = (yyvsp[(1) - (1)].qchar);
        }
    break;

  case 320:
#line 2492 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* No values. */

            (yyval.fcall).nrArgs = 0;
        }
    break;

  case 321:
#line 2497 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* The single or first expression. */

            (yyval.fcall).args[0] = (yyvsp[(1) - (1)].valp);
            (yyval.fcall).nrArgs = 1;
        }
    break;

  case 322:
#line 2503 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* Check that it wasn't ...(,expression...). */

            if ((yyval.fcall).nrArgs == 0)
                yyerror("First argument to function call is missing");

            /* Check there is room. */

            if ((yyvsp[(1) - (3)].fcall).nrArgs == MAX_NR_ARGS)
                yyerror("Too many arguments to function call");

            (yyval.fcall) = (yyvsp[(1) - (3)].fcall);

            (yyval.fcall).args[(yyval.fcall).nrArgs] = (yyvsp[(3) - (3)].valp);
            (yyval.fcall).nrArgs++;
        }
    break;

  case 323:
#line 2521 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "DocType",
                    "Encoding",
                    "NoTypeName",
                    "PyInt",
                    NULL
                };

                checkAnnos(&(yyvsp[(4) - (5)].optflags), annos);

                applyTypeFlags(currentModule, &(yyvsp[(2) - (5)].memArg), &(yyvsp[(4) - (5)].optflags));
                newTypedef(currentSpec, currentModule, (yyvsp[(3) - (5)].text), &(yyvsp[(2) - (5)].memArg), &(yyvsp[(4) - (5)].optflags));
            }
        }
    break;

  case 324:
#line 2538 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "DocType",
                    "Encoding",
                    "NoTypeName",
                    "PyInt",
                    NULL
                };

                signatureDef *sig;
                argDef ftype;

                checkAnnos(&(yyvsp[(10) - (11)].optflags), annos);

                applyTypeFlags(currentModule, &(yyvsp[(2) - (11)].memArg), &(yyvsp[(10) - (11)].optflags));

                memset(&ftype, 0, sizeof (argDef));

                /* Create the full signature on the heap. */
                sig = sipMalloc(sizeof (signatureDef));
                *sig = (yyvsp[(8) - (11)].signature);
                sig->result = (yyvsp[(2) - (11)].memArg);

                /* Create the full type. */
                ftype.atype = function_type;
                ftype.nrderefs = (yyvsp[(4) - (11)].number);
                ftype.u.sa = sig;

                newTypedef(currentSpec, currentModule, (yyvsp[(5) - (11)].text), &ftype, &(yyvsp[(10) - (11)].optflags));
            }
        }
    break;

  case 325:
#line 2573 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (currentSpec -> genc && (yyvsp[(2) - (2)].scpvalp)->next != NULL)
                yyerror("Namespaces not allowed in a C module");

            if (notSkipping())
                currentSupers = NULL;
        }
    break;

  case 326:
#line 2579 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Abstract",
                    "AllowNone",
                    "API",
                    "DelayDtor",
                    "Deprecated",
                    "External",
                    "Metatype",
                    "NoDefaultCtors",
                    "PyName",
                    "PyQt4Flags",
                    "PyQt4NoQMetaObject",
                    "Supertype",
                    NULL
                };

                checkAnnos(&(yyvsp[(5) - (5)].optflags), annos);

                if (currentSpec->genc && currentSupers != NULL)
                    yyerror("Super-classes not allowed in a C module struct");

                defineClass((yyvsp[(2) - (5)].scpvalp), currentSupers, &(yyvsp[(5) - (5)].optflags));
                sectionFlags = SECT_IS_PUBLIC;
            }
        }
    break;

  case 327:
#line 2606 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                completeClass((yyvsp[(2) - (8)].scpvalp), &(yyvsp[(5) - (8)].optflags), (yyvsp[(7) - (8)].boolean));
        }
    break;

  case 328:
#line 2612 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {currentIsTemplate = TRUE;}
    break;

  case 329:
#line 2612 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Class templates not allowed in a C module");

            if (notSkipping())
            {
                classTmplDef *tcd;

                /*
                 * Make sure there is room for the extra class name argument.
                 */
                if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                    yyerror("Internal error - increase the value of MAX_NR_ARGS");

                tcd = sipMalloc(sizeof (classTmplDef));
                tcd->sig = (yyvsp[(1) - (3)].signature);
                tcd->cd = (yyvsp[(3) - (3)].klass);
                tcd->next = currentSpec->classtemplates;

                currentSpec->classtemplates = tcd;
            }

            currentIsTemplate = FALSE;
        }
    break;

  case 330:
#line 2638 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.signature) = (yyvsp[(3) - (4)].signature);
        }
    break;

  case 331:
#line 2643 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Class definition not allowed in a C module");

            if (notSkipping())
                currentSupers = NULL;
        }
    break;

  case 332:
#line 2649 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Abstract",
                    "AllowNone",
                    "API",
                    "DelayDtor",
                    "Deprecated",
                    "External",
                    "Metatype",
                    "NoDefaultCtors",
                    "PyName",
                    "PyQt4Flags",
                    "PyQt4NoQMetaObject",
                    "Supertype",
                    NULL
                };

                checkAnnos(&(yyvsp[(5) - (5)].optflags), annos);

                defineClass((yyvsp[(2) - (5)].scpvalp), currentSupers, &(yyvsp[(5) - (5)].optflags));
                sectionFlags = SECT_IS_PRIVATE;
            }
        }
    break;

  case 333:
#line 2673 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                (yyval.klass) = completeClass((yyvsp[(2) - (8)].scpvalp), &(yyvsp[(5) - (8)].optflags), (yyvsp[(7) - (8)].boolean));
        }
    break;

  case 338:
#line 2687 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                argDef ad;
                classDef *super;
                scopedNameDef *snd = (yyvsp[(1) - (1)].scpvalp);

                /*
                 * This is a hack to allow typedef'ed classes to be used before
                 * we have resolved the typedef definitions.  Unlike elsewhere,
                 * we require that the typedef is defined before being used.
                 */
                for (;;)
                {
                    ad.atype = no_type;
                    ad.argflags = 0;
                    ad.nrderefs = 0;
                    ad.original_type = NULL;

                    searchTypedefs(currentSpec, snd, &ad);

                    if (ad.atype != defined_type)
                        break;

                    if (ad.nrderefs != 0 || isConstArg(&ad) || isReference(&ad))
                        break;

                    snd = ad.u.snd;
                }

                if (ad.atype != no_type)
                    yyerror("Super-class list contains an invalid type");

                super = findClass(currentSpec, class_iface, NULL, snd);
                appendToClassList(&currentSupers, super);
            }
        }
    break;

  case 339:
#line 2726 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.boolean) = FALSE;
        }
    break;

  case 340:
#line 2729 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 352:
#line 2747 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->docstring, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 353:
#line 2751 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->cppcode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 354:
#line 2755 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 355:
#line 2759 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->travcode != NULL)
                    yyerror("%GCTraverseCode already given for class");

                appendCodeBlock(&scope->travcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 356:
#line 2770 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->clearcode != NULL)
                    yyerror("%GCClearCode already given for class");

                appendCodeBlock(&scope->clearcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 357:
#line 2781 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->getbufcode != NULL)
                    yyerror("%BIGetBufferCode already given for class");

                appendCodeBlock(&scope->getbufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 358:
#line 2792 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->releasebufcode != NULL)
                    yyerror("%BIReleaseBufferCode already given for class");

                appendCodeBlock(&scope->releasebufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 359:
#line 2803 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->readbufcode != NULL)
                    yyerror("%BIGetReadBufferCode already given for class");

                appendCodeBlock(&scope->readbufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 360:
#line 2814 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->writebufcode != NULL)
                    yyerror("%BIGetWriteBufferCode already given for class");

                appendCodeBlock(&scope->writebufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 361:
#line 2825 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->segcountcode != NULL)
                    yyerror("%BIGetSegCountCode already given for class");

                appendCodeBlock(&scope->segcountcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 362:
#line 2836 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->charbufcode != NULL)
                    yyerror("%BIGetCharBufferCode already given for class");

                appendCodeBlock(&scope->charbufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 363:
#line 2847 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->picklecode != NULL)
                    yyerror("%PickleCode already given for class");

                appendCodeBlock(&scope->picklecode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 367:
#line 2861 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convtosubcode != NULL)
                    yyerror("Class has more than one %ConvertToSubClassCode directive");

                appendCodeBlock(&scope->convtosubcode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 368:
#line 2872 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convtocode != NULL)
                    yyerror("Class has more than one %ConvertToTypeCode directive");

                appendCodeBlock(&scope->convtocode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 369:
#line 2883 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("public section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PUBLIC | (yyvsp[(2) - (3)].number);
        }
    break;

  case 370:
#line 2890 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("protected section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PROT | (yyvsp[(2) - (3)].number);
        }
    break;

  case 371:
#line 2897 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("private section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PRIVATE | (yyvsp[(2) - (3)].number);
        }
    break;

  case 372:
#line 2904 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("signals section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_SIGNAL;
        }
    break;

  case 373:
#line 2913 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if ((yyvsp[(2) - (3)].property).name == NULL)
                yyerror("A %Property directive must have a 'name' argument");

            if ((yyvsp[(2) - (3)].property).get == NULL)
                yyerror("A %Property directive must have a 'get' argument");

            if (notSkipping())
                addProperty(currentSpec, currentModule, currentScope(),
                        (yyvsp[(2) - (3)].property).name, (yyvsp[(2) - (3)].property).get, (yyvsp[(2) - (3)].property).set, (yyvsp[(3) - (3)].property).docstring);
        }
    break;

  case 374:
#line 2926 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.property) = (yyvsp[(2) - (3)].property);
        }
    break;

  case 376:
#line 2932 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.property) = (yyvsp[(1) - (3)].property);

            switch ((yyvsp[(3) - (3)].property).token)
            {
            case TK_GET: (yyval.property).get = (yyvsp[(3) - (3)].property).get; break;
            case TK_NAME: (yyval.property).name = (yyvsp[(3) - (3)].property).name; break;
            case TK_SET: (yyval.property).set = (yyvsp[(3) - (3)].property).set; break;
            }
        }
    break;

  case 377:
#line 2944 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.property).token = TK_GET;

            (yyval.property).get = (yyvsp[(3) - (3)].text);
            (yyval.property).name = NULL;
            (yyval.property).set = NULL;
        }
    break;

  case 378:
#line 2951 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.property).token = TK_NAME;

            (yyval.property).get = NULL;
            (yyval.property).name = (yyvsp[(3) - (3)].text);
            (yyval.property).set = NULL;
        }
    break;

  case 379:
#line 2958 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.property).token = TK_SET;

            (yyval.property).get = NULL;
            (yyval.property).name = NULL;
            (yyval.property).set = (yyvsp[(3) - (3)].text);
        }
    break;

  case 380:
#line 2967 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.property).token = 0;
            (yyval.property).docstring = NULL;
        }
    break;

  case 381:
#line 2971 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.property) = (yyvsp[(2) - (4)].property);
        }
    break;

  case 383:
#line 2977 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.property) = (yyvsp[(1) - (2)].property);

            switch ((yyvsp[(2) - (2)].property).token)
            {
            case TK_DOCSTRING: (yyval.property).docstring = (yyvsp[(2) - (2)].property).docstring; break;
            }
        }
    break;

  case 384:
#line 2987 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.property).token = TK_IF;
        }
    break;

  case 385:
#line 2990 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.property).token = TK_END;
        }
    break;

  case 386:
#line 2993 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.property).token = TK_DOCSTRING;
                (yyval.property).docstring = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.property).token = 0;
                (yyval.property).docstring = NULL;
            }
        }
    break;

  case 387:
#line 3007 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 388:
#line 3010 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.number) = SECT_IS_SLOT;
        }
    break;

  case 389:
#line 3015 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* Note that we allow non-virtual dtors in C modules. */

            if (notSkipping())
            {
                const char *annos[] = {
                    "HoldGIL",
                    "ReleaseGIL",
                    NULL
                };

                classDef *cd = currentScope();

                checkAnnos(&(yyvsp[(8) - (11)].optflags), annos);

                if (strcmp(classBaseName(cd),(yyvsp[(3) - (11)].text)) != 0)
                    yyerror("Destructor doesn't have the same name as its class");

                if (isDtor(cd))
                    yyerror("Destructor has already been defined");

                if (currentSpec -> genc && (yyvsp[(10) - (11)].codeb) == NULL)
                    yyerror("Destructor in C modules must include %MethodCode");

                appendCodeBlock(&cd->dealloccode, (yyvsp[(10) - (11)].codeb));
                appendCodeBlock(&cd->dtorcode, (yyvsp[(11) - (11)].codeb));
                cd -> dtorexceptions = (yyvsp[(6) - (11)].throwlist);

                /*
                 * Note that we don't apply the protected/public hack to dtors
                 * as it (I think) may change the behaviour of the wrapped API.
                 */
                cd->classflags |= sectionFlags;

                if ((yyvsp[(7) - (11)].number))
                {
                    if (!(yyvsp[(1) - (11)].number))
                        yyerror("Abstract destructor must be virtual");

                    setIsAbstractClass(cd);
                }

                /*
                 * The class has a shadow if we have a virtual dtor or some
                 * dtor code.
                 */
                if ((yyvsp[(1) - (11)].number) || (yyvsp[(11) - (11)].codeb) != NULL)
                {
                    if (currentSpec -> genc)
                        yyerror("Virtual destructor or %VirtualCatcherCode not allowed in a C module");

                    setHasShadow(cd);
                }

                if (getReleaseGIL(&(yyvsp[(8) - (11)].optflags)))
                    setIsReleaseGILDtor(cd);
                else if (getHoldGIL(&(yyvsp[(8) - (11)].optflags)))
                    setIsHoldGILDtor(cd);
            }
        }
    break;

  case 390:
#line 3077 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {currentCtorIsExplicit = TRUE;}
    break;

  case 393:
#line 3081 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* Note that we allow ctors in C modules. */

            if (notSkipping())
            {
                const char *annos[] = {
                    "API",
                    "Default",
                    "Deprecated",
                    "HoldGIL",
                    "KeywordArgs",
                    "NoDerived",
                    "PostHook",
                    "PreHook",
                    "ReleaseGIL",
                    "Transfer",
                    NULL
                };

                checkAnnos(&(yyvsp[(6) - (10)].optflags), annos);

                if (currentSpec -> genc)
                {
                    if ((yyvsp[(10) - (10)].codeb) == NULL && (yyvsp[(3) - (10)].signature).nrArgs != 0)
                        yyerror("Constructors with arguments in C modules must include %MethodCode");

                    if (currentCtorIsExplicit)
                        yyerror("Explicit constructors not allowed in a C module");
                }

                if ((sectionFlags & (SECT_IS_PUBLIC | SECT_IS_PROT | SECT_IS_PRIVATE)) == 0)
                    yyerror("Constructor must be in the public, private or protected sections");

                newCtor(currentModule, (yyvsp[(1) - (10)].text), sectionFlags, &(yyvsp[(3) - (10)].signature), &(yyvsp[(6) - (10)].optflags), (yyvsp[(10) - (10)].codeb), (yyvsp[(5) - (10)].throwlist), (yyvsp[(7) - (10)].optsignature),
                        currentCtorIsExplicit, (yyvsp[(9) - (10)].codeb));
            }

            free((yyvsp[(1) - (10)].text));

            currentCtorIsExplicit = FALSE;
        }
    break;

  case 394:
#line 3124 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.optsignature) = NULL;
        }
    break;

  case 395:
#line 3127 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            parsingCSignature = TRUE;
        }
    break;

  case 396:
#line 3129 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.optsignature) = sipMalloc(sizeof (signatureDef));

            *(yyval.optsignature) = (yyvsp[(4) - (6)].signature);

            parsingCSignature = FALSE;
        }
    break;

  case 397:
#line 3138 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.optsignature) = NULL;
        }
    break;

  case 398:
#line 3141 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            parsingCSignature = TRUE;
        }
    break;

  case 399:
#line 3143 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.optsignature) = sipMalloc(sizeof (signatureDef));

            *(yyval.optsignature) = (yyvsp[(5) - (7)].signature);
            (yyval.optsignature)->result = (yyvsp[(3) - (7)].memArg);

            parsingCSignature = FALSE;
        }
    break;

  case 400:
#line 3153 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.number) = FALSE;
        }
    break;

  case 401:
#line 3156 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.number) = TRUE;
        }
    break;

  case 402:
#line 3161 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                applyTypeFlags(currentModule, &(yyvsp[(1) - (14)].memArg), &(yyvsp[(9) - (14)].optflags));

                (yyvsp[(4) - (14)].signature).result = (yyvsp[(1) - (14)].memArg);

                newFunction(currentSpec, currentModule, currentScope(), NULL,
                        sectionFlags, currentIsStatic, currentIsSignal,
                        currentIsSlot, currentOverIsVirt, (yyvsp[(2) - (14)].text), &(yyvsp[(4) - (14)].signature), (yyvsp[(6) - (14)].number), (yyvsp[(8) - (14)].number), &(yyvsp[(9) - (14)].optflags),
                        (yyvsp[(13) - (14)].codeb), (yyvsp[(14) - (14)].codeb), (yyvsp[(7) - (14)].throwlist), (yyvsp[(10) - (14)].optsignature), (yyvsp[(12) - (14)].codeb));
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 403:
#line 3179 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /*
             * It looks like an assignment operator (though we don't bother to
             * check the types) so make sure it is private.
             */
            if (notSkipping())
            {
                classDef *cd = currentScope();

                if (cd == NULL || !(sectionFlags & SECT_IS_PRIVATE))
                    yyerror("Assignment operators may only be defined as private");

                setCannotAssign(cd);
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 404:
#line 3199 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *cd = currentScope();

                /*
                 * If the scope is a namespace then make sure the operator is
                 * handled as a global.
                 */
                if (cd != NULL && cd->iff->type == namespace_iface)
                    cd = NULL;

                applyTypeFlags(currentModule, &(yyvsp[(1) - (14)].memArg), &(yyvsp[(10) - (14)].optflags));

                /* Handle the unary '+' and '-' operators. */
                if ((cd != NULL && (yyvsp[(5) - (14)].signature).nrArgs == 0) || (cd == NULL && (yyvsp[(5) - (14)].signature).nrArgs == 1))
                {
                    if (strcmp((yyvsp[(3) - (14)].text), "__add__") == 0)
                        (yyvsp[(3) - (14)].text) = "__pos__";
                    else if (strcmp((yyvsp[(3) - (14)].text), "__sub__") == 0)
                        (yyvsp[(3) - (14)].text) = "__neg__";
                }

                (yyvsp[(5) - (14)].signature).result = (yyvsp[(1) - (14)].memArg);

                newFunction(currentSpec, currentModule, cd, NULL,
                        sectionFlags, currentIsStatic, currentIsSignal,
                        currentIsSlot, currentOverIsVirt, (yyvsp[(3) - (14)].text), &(yyvsp[(5) - (14)].signature), (yyvsp[(7) - (14)].number), (yyvsp[(9) - (14)].number),
                        &(yyvsp[(10) - (14)].optflags), (yyvsp[(13) - (14)].codeb), (yyvsp[(14) - (14)].codeb), (yyvsp[(8) - (14)].throwlist), (yyvsp[(11) - (14)].optsignature), NULL);
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 405:
#line 3235 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                char *sname;
                classDef *scope = currentScope();

                if (scope == NULL || (yyvsp[(4) - (13)].signature).nrArgs != 0)
                    yyerror("Operator casts must be specified in a class and have no arguments");

                applyTypeFlags(currentModule, &(yyvsp[(2) - (13)].memArg), &(yyvsp[(9) - (13)].optflags));

                switch ((yyvsp[(2) - (13)].memArg).atype)
                {
                case defined_type:
                    sname = NULL;
                    break;

                case bool_type:
                case cbool_type:
                case byte_type:
                case sbyte_type:
                case ubyte_type:
                case short_type:
                case ushort_type:
                case int_type:
                case cint_type:
                case uint_type:
                    sname = "__int__";
                    break;

                case long_type:
                case ulong_type:
                case longlong_type:
                case ulonglong_type:
                    sname = "__long__";
                    break;

                case float_type:
                case cfloat_type:
                case double_type:
                case cdouble_type:
                    sname = "__float__";
                    break;

                default:
                    yyerror("Unsupported operator cast");
                }

                if (sname != NULL)
                {
                    (yyvsp[(4) - (13)].signature).result = (yyvsp[(2) - (13)].memArg);

                    newFunction(currentSpec, currentModule, scope, NULL,
                            sectionFlags, currentIsStatic, currentIsSignal,
                            currentIsSlot, currentOverIsVirt, sname, &(yyvsp[(4) - (13)].signature), (yyvsp[(6) - (13)].number),
                            (yyvsp[(8) - (13)].number), &(yyvsp[(9) - (13)].optflags), (yyvsp[(12) - (13)].codeb), (yyvsp[(13) - (13)].codeb), (yyvsp[(7) - (13)].throwlist), (yyvsp[(10) - (13)].optsignature), NULL);
                }
                else
                {
                    argList *al;

                    /* Check it doesn't already exist. */
                    for (al = scope->casts; al != NULL; al = al->next)
                        if (compareScopedNames((yyvsp[(2) - (13)].memArg).u.snd, al->arg.u.snd) == 0)
                            yyerror("This operator cast has already been specified in this class");

                    al = sipMalloc(sizeof (argList));
                    al->arg = (yyvsp[(2) - (13)].memArg);
                    al->next = scope->casts;

                    scope->casts = al;
                }
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 406:
#line 3316 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__add__";}
    break;

  case 407:
#line 3317 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__sub__";}
    break;

  case 408:
#line 3318 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__mul__";}
    break;

  case 409:
#line 3319 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__div__";}
    break;

  case 410:
#line 3320 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__mod__";}
    break;

  case 411:
#line 3321 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__and__";}
    break;

  case 412:
#line 3322 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__or__";}
    break;

  case 413:
#line 3323 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__xor__";}
    break;

  case 414:
#line 3324 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__lshift__";}
    break;

  case 415:
#line 3325 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__rshift__";}
    break;

  case 416:
#line 3326 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__iadd__";}
    break;

  case 417:
#line 3327 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__isub__";}
    break;

  case 418:
#line 3328 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__imul__";}
    break;

  case 419:
#line 3329 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__idiv__";}
    break;

  case 420:
#line 3330 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__imod__";}
    break;

  case 421:
#line 3331 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__iand__";}
    break;

  case 422:
#line 3332 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__ior__";}
    break;

  case 423:
#line 3333 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__ixor__";}
    break;

  case 424:
#line 3334 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__ilshift__";}
    break;

  case 425:
#line 3335 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__irshift__";}
    break;

  case 426:
#line 3336 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__invert__";}
    break;

  case 427:
#line 3337 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__call__";}
    break;

  case 428:
#line 3338 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__getitem__";}
    break;

  case 429:
#line 3339 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__lt__";}
    break;

  case 430:
#line 3340 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__le__";}
    break;

  case 431:
#line 3341 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__eq__";}
    break;

  case 432:
#line 3342 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__ne__";}
    break;

  case 433:
#line 3343 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__gt__";}
    break;

  case 434:
#line 3344 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {(yyval.text) = "__ge__";}
    break;

  case 435:
#line 3347 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.number) = FALSE;
        }
    break;

  case 436:
#line 3350 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.number) = TRUE;
        }
    break;

  case 437:
#line 3355 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 438:
#line 3358 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if ((yyvsp[(2) - (2)].number) != 0)
                yyerror("Abstract virtual function '= 0' expected");

            (yyval.number) = TRUE;
        }
    break;

  case 439:
#line 3366 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.optflags).nrFlags = 0;
        }
    break;

  case 440:
#line 3369 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.optflags) = (yyvsp[(2) - (3)].optflags);
        }
    break;

  case 441:
#line 3375 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.optflags).flags[0] = (yyvsp[(1) - (1)].flag);
            (yyval.optflags).nrFlags = 1;
        }
    break;

  case 442:
#line 3379 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* Check there is room. */

            if ((yyvsp[(1) - (3)].optflags).nrFlags == MAX_NR_FLAGS)
                yyerror("Too many optional flags");

            (yyval.optflags) = (yyvsp[(1) - (3)].optflags);

            (yyval.optflags).flags[(yyval.optflags).nrFlags++] = (yyvsp[(3) - (3)].flag);
        }
    break;

  case 443:
#line 3391 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.flag).ftype = bool_flag;
            (yyval.flag).fname = (yyvsp[(1) - (1)].text);
        }
    break;

  case 444:
#line 3395 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.flag) = (yyvsp[(3) - (3)].flag);
            (yyval.flag).fname = (yyvsp[(1) - (3)].text);
        }
    break;

  case 445:
#line 3401 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.flag).ftype = (strchr((yyvsp[(1) - (1)].text), '.') != NULL) ? dotted_name_flag : name_flag;
            (yyval.flag).fvalue.sval = (yyvsp[(1) - (1)].text);
        }
    break;

  case 446:
#line 3405 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            apiVersionRangeDef *avd;
            int from, to;

            (yyval.flag).ftype = api_range_flag;

            /* Check that the API is known. */
            if ((avd = findAPI(currentSpec, (yyvsp[(1) - (5)].text))) == NULL)
                yyerror("unknown API name in API annotation");

            if (inMainModule())
                setIsUsedName(avd->api_name);

            /* Unbounded values are represented by 0. */
            if ((from = (yyvsp[(3) - (5)].number)) < 0)
                from = 0;

            if ((to = (yyvsp[(5) - (5)].number)) < 0)
                to = 0;

            (yyval.flag).fvalue.aval = convertAPIRange(currentModule, avd->api_name,
                    from, to);
        }
    break;

  case 447:
#line 3428 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.flag).ftype = string_flag;
            (yyval.flag).fvalue.sval = convertFeaturedString((yyvsp[(1) - (1)].text));
        }
    break;

  case 448:
#line 3432 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.flag).ftype = integer_flag;
            (yyval.flag).fvalue.ival = (yyvsp[(1) - (1)].number);
        }
    break;

  case 449:
#line 3438 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 450:
#line 3441 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 451:
#line 3446 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 452:
#line 3449 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 453:
#line 3454 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            int a, nrrxcon, nrrxdis, nrslotcon, nrslotdis, nrarray, nrarraysize;

            nrrxcon = nrrxdis = nrslotcon = nrslotdis = nrarray = nrarraysize = 0;

            for (a = 0; a < (yyvsp[(1) - (1)].signature).nrArgs; ++a)
            {
                argDef *ad = &(yyvsp[(1) - (1)].signature).args[a];

                switch (ad -> atype)
                {
                case rxcon_type:
                    ++nrrxcon;
                    break;

                case rxdis_type:
                    ++nrrxdis;
                    break;

                case slotcon_type:
                    ++nrslotcon;
                    break;

                case slotdis_type:
                    ++nrslotdis;
                    break;
                }

                if (isArray(ad))
                    ++nrarray;

                if (isArraySize(ad))
                    ++nrarraysize;
            }

            if (nrrxcon != nrslotcon || nrrxcon > 1)
                yyerror("SIP_RXOBJ_CON and SIP_SLOT_CON must both be given and at most once");

            if (nrrxdis != nrslotdis || nrrxdis > 1)
                yyerror("SIP_RXOBJ_DIS and SIP_SLOT_DIS must both be given and at most once");

            if (nrarray != nrarraysize || nrarray > 1)
                yyerror("/Array/ and /ArraySize/ must both be given and at most once");

            (yyval.signature) = (yyvsp[(1) - (1)].signature);
        }
    break;

  case 454:
#line 3502 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* No arguments. */

            (yyval.signature).nrArgs = 0;
        }
    break;

  case 455:
#line 3507 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* The single or first argument. */

            (yyval.signature).args[0] = (yyvsp[(1) - (1)].memArg);
            (yyval.signature).nrArgs = 1;
        }
    break;

  case 456:
#line 3513 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* Check that it wasn't ...(,arg...). */
            if ((yyvsp[(1) - (3)].signature).nrArgs == 0)
                yyerror("First argument of the list is missing");

            /* Check there is nothing after an ellipsis. */
            if ((yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].atype == ellipsis_type)
                yyerror("An ellipsis must be at the end of the argument list");

            /*
             * If this argument has no default value, then the
             * previous one mustn't either.
             */
            if ((yyvsp[(3) - (3)].memArg).defval == NULL && (yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].defval != NULL)
                yyerror("Compulsory argument given after optional argument");

            /* Check there is room. */
            if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.signature) = (yyvsp[(1) - (3)].signature);

            (yyval.signature).args[(yyval.signature).nrArgs] = (yyvsp[(3) - (3)].memArg);
            (yyval.signature).nrArgs++;
        }
    break;

  case 457:
#line 3540 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(3) - (4)].optflags), "SIP_SIGNAL has no annotations");

            (yyval.memArg).atype = signal_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (4)].text));
            (yyval.memArg).defval = (yyvsp[(4) - (4)].valp);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 458:
#line 3551 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(3) - (4)].optflags), "SIP_SLOT has no annotations");

            (yyval.memArg).atype = slot_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (4)].text));
            (yyval.memArg).defval = (yyvsp[(4) - (4)].valp);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 459:
#line 3562 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(3) - (4)].optflags), "SIP_ANYSLOT has no annotations");

            (yyval.memArg).atype = anyslot_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (4)].text));
            (yyval.memArg).defval = (yyvsp[(4) - (4)].valp);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 460:
#line 3573 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            const char *annos[] = {
                "SingleShot",
                NULL
            };

            checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

            (yyval.memArg).atype = rxcon_type;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags), "SingleShot", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_SINGLE_SHOT;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 461:
#line 3591 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(3) - (3)].optflags), "SIP_RXOBJ_DIS has no annotations");

            (yyval.memArg).atype = rxdis_type;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 462:
#line 3601 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(6) - (6)].optflags), "SIP_SLOT_CON has no annotations");

            (yyval.memArg).atype = slotcon_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(5) - (6)].text));

            memset(&(yyvsp[(3) - (6)].signature).result, 0, sizeof (argDef));
            (yyvsp[(3) - (6)].signature).result.atype = void_type;

            (yyval.memArg).u.sa = sipMalloc(sizeof (signatureDef));
            *(yyval.memArg).u.sa = (yyvsp[(3) - (6)].signature);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 463:
#line 3617 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(6) - (6)].optflags), "SIP_SLOT_DIS has no annotations");

            (yyval.memArg).atype = slotdis_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(5) - (6)].text));

            memset(&(yyvsp[(3) - (6)].signature).result, 0, sizeof (argDef));
            (yyvsp[(3) - (6)].signature).result.atype = void_type;

            (yyval.memArg).u.sa = sipMalloc(sizeof (signatureDef));
            *(yyval.memArg).u.sa = (yyvsp[(3) - (6)].signature);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 464:
#line 3633 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(3) - (3)].optflags), "SIP_QOBJECT has no annotations");

            (yyval.memArg).atype = qobject_type;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));
        }
    break;

  case 465:
#line 3641 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.memArg) = (yyvsp[(1) - (2)].memArg);
            (yyval.memArg).defval = (yyvsp[(2) - (2)].valp);
        }
    break;

  case 466:
#line 3648 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {currentIsSignal = TRUE;}
    break;

  case 468:
#line 3649 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {currentIsSlot = TRUE;}
    break;

  case 471:
#line 3654 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {currentIsStatic = TRUE;}
    break;

  case 476:
#line 3664 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {currentOverIsVirt = TRUE;}
    break;

  case 479:
#line 3668 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "DocType",
                    "Encoding",
                    "PyInt",
                    "PyName",
                    NULL
                };

                checkAnnos(&(yyvsp[(3) - (8)].optflags), annos);

                if ((yyvsp[(6) - (8)].codeb) != NULL)
                {
                    if ((yyvsp[(4) - (8)].variable).access_code != NULL)
                        yyerror("%AccessCode already defined");

                    (yyvsp[(4) - (8)].variable).access_code = (yyvsp[(6) - (8)].codeb);

                    deprecated("%AccessCode should be used a sub-directive");
                }

                if ((yyvsp[(7) - (8)].codeb) != NULL)
                {
                    if ((yyvsp[(4) - (8)].variable).get_code != NULL)
                        yyerror("%GetCode already defined");

                    (yyvsp[(4) - (8)].variable).get_code = (yyvsp[(7) - (8)].codeb);

                    deprecated("%GetCode should be used a sub-directive");
                }

                if ((yyvsp[(8) - (8)].codeb) != NULL)
                {
                    if ((yyvsp[(4) - (8)].variable).set_code != NULL)
                        yyerror("%SetCode already defined");

                    (yyvsp[(4) - (8)].variable).set_code = (yyvsp[(8) - (8)].codeb);

                    deprecated("%SetCode should be used a sub-directive");
                }

                newVar(currentSpec, currentModule, (yyvsp[(2) - (8)].text), currentIsStatic, &(yyvsp[(1) - (8)].memArg),
                        &(yyvsp[(3) - (8)].optflags), (yyvsp[(4) - (8)].variable).access_code, (yyvsp[(4) - (8)].variable).get_code, (yyvsp[(4) - (8)].variable).set_code,
                        sectionFlags);
            }

            currentIsStatic = FALSE;
        }
    break;

  case 480:
#line 3720 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.variable).token = 0;
            (yyval.variable).access_code = NULL;
            (yyval.variable).get_code = NULL;
            (yyval.variable).set_code = NULL;
        }
    break;

  case 481:
#line 3726 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.variable) = (yyvsp[(2) - (3)].variable);
        }
    break;

  case 483:
#line 3732 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.variable) = (yyvsp[(1) - (2)].variable);

            switch ((yyvsp[(2) - (2)].variable).token)
            {
            case TK_ACCESSCODE: (yyval.variable).access_code = (yyvsp[(2) - (2)].variable).access_code; break;
            case TK_GETCODE: (yyval.variable).get_code = (yyvsp[(2) - (2)].variable).get_code; break;
            case TK_SETCODE: (yyval.variable).set_code = (yyvsp[(2) - (2)].variable).set_code; break;
            }
        }
    break;

  case 484:
#line 3744 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.variable).token = TK_IF;
        }
    break;

  case 485:
#line 3747 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.variable).token = TK_END;
        }
    break;

  case 486:
#line 3750 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.variable).token = TK_ACCESSCODE;
                (yyval.variable).access_code = (yyvsp[(2) - (2)].codeb);
            }
            else
            {
                (yyval.variable).token = 0;
                (yyval.variable).access_code = NULL;
            }

            (yyval.variable).get_code = NULL;
            (yyval.variable).set_code = NULL;
        }
    break;

  case 487:
#line 3765 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.variable).token = TK_GETCODE;
                (yyval.variable).get_code = (yyvsp[(2) - (2)].codeb);
            }
            else
            {
                (yyval.variable).token = 0;
                (yyval.variable).get_code = NULL;
            }

            (yyval.variable).access_code = NULL;
            (yyval.variable).set_code = NULL;
        }
    break;

  case 488:
#line 3780 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.variable).token = TK_SETCODE;
                (yyval.variable).set_code = (yyvsp[(2) - (2)].codeb);
            }
            else
            {
                (yyval.variable).token = 0;
                (yyval.variable).set_code = NULL;
            }

            (yyval.variable).access_code = NULL;
            (yyval.variable).get_code = NULL;
        }
    break;

  case 489:
#line 3797 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.memArg) = (yyvsp[(2) - (4)].memArg);
            (yyval.memArg).nrderefs += (yyvsp[(3) - (4)].number);
            (yyval.memArg).argflags |= ARG_IS_CONST | (yyvsp[(4) - (4)].number);
        }
    break;

  case 490:
#line 3802 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.memArg) = (yyvsp[(1) - (3)].memArg);
            (yyval.memArg).nrderefs += (yyvsp[(2) - (3)].number);
            (yyval.memArg).argflags |= (yyvsp[(3) - (3)].number);

            /* PyObject * is a synonym for SIP_PYOBJECT. */
            if ((yyvsp[(1) - (3)].memArg).atype == defined_type && strcmp((yyvsp[(1) - (3)].memArg).u.snd->name, "PyObject") == 0 && (yyvsp[(1) - (3)].memArg).u.snd->next == NULL && (yyvsp[(2) - (3)].number) == 1 && (yyvsp[(3) - (3)].number) == 0)
            {
                (yyval.memArg).atype = pyobject_type;
                (yyval.memArg).nrderefs = 0;
            }
        }
    break;

  case 491:
#line 3816 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            const char *annos[] = {
                "AllowNone",
                "Array",
                "ArraySize",
                "Constrained",
                "DocType",
                "DocValue",
                "Encoding",
                "GetWrapper",
                "In",
                "KeepReference",
                "NoCopy",
                "Out",
                "PyInt",
                "ResultSize",
                "Transfer",
                "TransferBack",
                "TransferThis",
                NULL
            };

            optFlag *of;

            checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

            (yyval.memArg) = (yyvsp[(1) - (3)].memArg);
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));

            handleKeepReference(&(yyvsp[(3) - (3)].optflags), &(yyval.memArg), currentModule);

            if (getAllowNone(&(yyvsp[(3) - (3)].optflags)))
                (yyval.memArg).argflags |= ARG_ALLOW_NONE;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"GetWrapper",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_GET_WRAPPER;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"Array",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_ARRAY;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"ArraySize",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_ARRAY_SIZE;

            if (getTransfer(&(yyvsp[(3) - (3)].optflags)))
                (yyval.memArg).argflags |= ARG_XFERRED;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"TransferThis",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_THIS_XFERRED;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"TransferBack",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_XFERRED_BACK;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"In",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_IN;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"Out",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_OUT;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags), "ResultSize", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_RESULT_SIZE;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags), "NoCopy", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_NO_COPY;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"Constrained",bool_flag) != NULL)
            {
                (yyval.memArg).argflags |= ARG_CONSTRAINED;

                switch ((yyval.memArg).atype)
                {
                case bool_type:
                    (yyval.memArg).atype = cbool_type;
                    break;

                case int_type:
                    (yyval.memArg).atype = cint_type;
                    break;

                case float_type:
                    (yyval.memArg).atype = cfloat_type;
                    break;

                case double_type:
                    (yyval.memArg).atype = cdouble_type;
                    break;
                }
            }

            applyTypeFlags(currentModule, &(yyval.memArg), &(yyvsp[(3) - (3)].optflags));
            (yyval.memArg).docval = getDocValue(&(yyvsp[(3) - (3)].optflags));
        }
    break;

  case 492:
#line 3909 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 493:
#line 3912 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("References not allowed in a C module");

            (yyval.number) = ARG_IS_REF;
        }
    break;

  case 494:
#line 3920 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 495:
#line 3923 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.number) = (yyvsp[(1) - (2)].number) + 1;
        }
    break;

  case 496:
#line 3928 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = defined_type;
            (yyval.memArg).u.snd = (yyvsp[(1) - (1)].scpvalp);

            /* Try and resolve typedefs as early as possible. */
            resolveAnyTypedef(currentSpec, &(yyval.memArg));
        }
    break;

  case 497:
#line 3936 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            templateDef *td;

            td = sipMalloc(sizeof(templateDef));
            td->fqname = (yyvsp[(1) - (4)].scpvalp);
            td->types = (yyvsp[(3) - (4)].signature);

            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = template_type;
            (yyval.memArg).u.td = td;
        }
    break;

  case 498:
#line 3947 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));

            /* In a C module all structures must be defined. */
            if (currentSpec -> genc)
            {
                (yyval.memArg).atype = defined_type;
                (yyval.memArg).u.snd = (yyvsp[(2) - (2)].scpvalp);
            }
            else
            {
                (yyval.memArg).atype = struct_type;
                (yyval.memArg).u.sname = (yyvsp[(2) - (2)].scpvalp);
            }
        }
    break;

  case 499:
#line 3962 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ushort_type;
        }
    break;

  case 500:
#line 3966 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = short_type;
        }
    break;

  case 501:
#line 3970 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = uint_type;
        }
    break;

  case 502:
#line 3974 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = uint_type;
        }
    break;

  case 503:
#line 3978 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = int_type;
        }
    break;

  case 504:
#line 3982 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = long_type;
        }
    break;

  case 505:
#line 3986 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ulong_type;
        }
    break;

  case 506:
#line 3990 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = longlong_type;
        }
    break;

  case 507:
#line 3994 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ulonglong_type;
        }
    break;

  case 508:
#line 3998 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = float_type;
        }
    break;

  case 509:
#line 4002 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = double_type;
        }
    break;

  case 510:
#line 4006 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = bool_type;
        }
    break;

  case 511:
#line 4010 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = sstring_type;
        }
    break;

  case 512:
#line 4014 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ustring_type;
        }
    break;

  case 513:
#line 4018 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = string_type;
        }
    break;

  case 514:
#line 4022 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = wstring_type;
        }
    break;

  case 515:
#line 4026 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = void_type;
        }
    break;

  case 516:
#line 4030 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pyobject_type;
        }
    break;

  case 517:
#line 4034 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pytuple_type;
        }
    break;

  case 518:
#line 4038 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pylist_type;
        }
    break;

  case 519:
#line 4042 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pydict_type;
        }
    break;

  case 520:
#line 4046 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pycallable_type;
        }
    break;

  case 521:
#line 4050 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pyslice_type;
        }
    break;

  case 522:
#line 4054 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pytype_type;
        }
    break;

  case 523:
#line 4058 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ssize_type;
        }
    break;

  case 524:
#line 4062 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ellipsis_type;
        }
    break;

  case 525:
#line 4068 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* The single or first type. */

            (yyval.signature).args[0] = (yyvsp[(1) - (1)].memArg);
            (yyval.signature).nrArgs = 1;
        }
    break;

  case 526:
#line 4074 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* Check there is nothing after an ellipsis. */
            if ((yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].atype == ellipsis_type)
                yyerror("An ellipsis must be at the end of the argument list");

            /* Check there is room. */
            if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.signature) = (yyvsp[(1) - (3)].signature);

            (yyval.signature).args[(yyval.signature).nrArgs] = (yyvsp[(3) - (3)].memArg);
            (yyval.signature).nrArgs++;
        }
    break;

  case 527:
#line 4090 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            (yyval.throwlist) = NULL;
        }
    break;

  case 528:
#line 4093 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Exceptions not allowed in a C module");

            (yyval.throwlist) = (yyvsp[(3) - (4)].throwlist);
        }
    break;

  case 529:
#line 4101 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* Empty list so use a blank. */

            (yyval.throwlist) = sipMalloc(sizeof (throwArgs));
            (yyval.throwlist) -> nrArgs = 0;
        }
    break;

  case 530:
#line 4107 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* The only or first exception. */

            (yyval.throwlist) = sipMalloc(sizeof (throwArgs));
            (yyval.throwlist) -> nrArgs = 1;
            (yyval.throwlist) -> args[0] = findException(currentSpec, (yyvsp[(1) - (1)].scpvalp), FALSE);
        }
    break;

  case 531:
#line 4114 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"
    {
            /* Check that it wasn't ...(,arg...). */

            if ((yyvsp[(1) - (3)].throwlist) -> nrArgs == 0)
                yyerror("First exception of throw specifier is missing");

            /* Check there is room. */

            if ((yyvsp[(1) - (3)].throwlist) -> nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.throwlist) = (yyvsp[(1) - (3)].throwlist);
            (yyval.throwlist) -> args[(yyval.throwlist) -> nrArgs++] = findException(currentSpec, (yyvsp[(3) - (3)].scpvalp), FALSE);
        }
    break;


/* Line 1267 of yacc.c.  */
#line 7533 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 4130 "/Users/phil/hg/sip/sip-4.13/sipgen/parser.y"



/*
 * Parse the specification.
 */
void parse(sipSpec *spec, FILE *fp, char *filename, stringList *tsl,
        stringList *xfl, KwArgs kwArgs, int protHack)
{
    classTmplDef *tcd;

    /* Initialise the spec. */
 
    spec->modules = NULL;
    spec->namecache = NULL;
    spec->ifacefiles = NULL;
    spec->classes = NULL;
    spec->classtemplates = NULL;
    spec->exceptions = NULL;
    spec->mappedtypes = NULL;
    spec->mappedtypetemplates = NULL;
    spec->enums = NULL;
    spec->vars = NULL;
    spec->typedefs = NULL;
    spec->exphdrcode = NULL;
    spec->docs = NULL;
    spec->sigslots = FALSE;
    spec->genc = -1;
    spec->plugins = NULL;
    spec->extracts = NULL;

    currentSpec = spec;
    neededQualifiers = tsl;
    excludedQualifiers = xfl;
    currentModule = NULL;
    currentMappedType = NULL;
    currentOverIsVirt = FALSE;
    currentCtorIsExplicit = FALSE;
    currentIsStatic = FALSE;
    currentIsSignal = FALSE;
    currentIsSlot = FALSE;
    currentIsTemplate = FALSE;
    previousFile = NULL;
    skipStackPtr = 0;
    currentScopeIdx = 0;
    sectionFlags = 0;
    defaultKwArgs = kwArgs;
    makeProtPublic = protHack;

    newModule(fp, filename);
    spec->module = currentModule;

    yyparse();

    handleEOF();
    handleEOM();

    /*
     * Go through each template class and remove it from the list of classes.
     */
    for (tcd = spec->classtemplates; tcd != NULL; tcd = tcd->next)
    {
        classDef **cdp;

        for (cdp = &spec->classes; *cdp != NULL; cdp = &(*cdp)->next)
            if (*cdp == tcd->cd)
            {
                ifaceFileDef **ifdp;

                /* Remove the interface file as well. */
                for (ifdp = &spec->ifacefiles; *ifdp != NULL; ifdp = &(*ifdp)->next)
                    if (*ifdp == tcd->cd->iff)
                    {
                        *ifdp = (*ifdp)->next;
                        break;
                    }

                *cdp = (*cdp)->next;
                break;
            }
    }
}


/*
 * Tell the parser that a complete file has now been read.
 */
void parserEOF(char *name, parserContext *pc)
{
    previousFile = sipStrdup(name);
    currentContext = *pc;
}


/*
 * Append a class definition to a class list if it doesn't already appear.
 * Append is needed specifically for the list of super-classes because the
 * order is important to Python.
 */
void appendToClassList(classList **clp,classDef *cd)
{
    classList *new;

    /* Find the end of the list. */

    while (*clp != NULL)
    {
        if ((*clp) -> cd == cd)
            return;

        clp = &(*clp) -> next;
    }

    new = sipMalloc(sizeof (classList));

    new -> cd = cd;
    new -> next = NULL;

    *clp = new;
}


/*
 * Create a new module for the current specification and make it current.
 */
static void newModule(FILE *fp, const char *filename)
{
    moduleDef *mod;

    parseFile(fp, filename, currentModule, FALSE);

    mod = allocModule();
    mod->file = filename;

    if (currentModule != NULL)
        mod->defexception = currentModule->defexception;

    currentModule = mod;
}


/*
 * Allocate and initialise the memory for a new module.
 */
static moduleDef *allocModule()
{
    moduleDef *newmod, **tailp;

    newmod = sipMalloc(sizeof (moduleDef));

    newmod->version = -1;
    newmod->defdocstring = raw;
    newmod->encoding = no_type;
    newmod->qobjclass = -1;
    newmod->nrvirthandlers = -1;
    newmod->next_key = -2;

    /*
     * The consolidated module support needs these to be in order that they
     * appeared.
     */
    for (tailp = &currentSpec->modules; *tailp != NULL; tailp = &(*tailp)->next)
        ;

    *tailp = newmod;

    return newmod;
}


/*
 * Switch to parsing a new file.
 */
static void parseFile(FILE *fp, const char *name, moduleDef *prevmod,
        int optional)
{
    parserContext pc;

    pc.filename = name;
    pc.ifdepth = skipStackPtr;
    pc.prevmod = prevmod;

    if (setInputFile(fp, &pc, optional))
        currentContext = pc;
}


/*
 * Find an interface file, or create a new one.
 */
ifaceFileDef *findIfaceFile(sipSpec *pt, moduleDef *mod, scopedNameDef *fqname,
        ifaceFileType iftype, apiVersionRangeDef *api_range, argDef *ad)
{
    ifaceFileDef *iff, *first_alt = NULL;

    /* See if the name is already used. */

    for (iff = pt->ifacefiles; iff != NULL; iff = iff->next)
    {
        if (compareScopedNames(iff->fqcname, fqname) != 0)
            continue;

        /*
         * If they are both versioned then assume the user knows what they are
         * doing.
         */
        if (iff->api_range != NULL && api_range != NULL && iff->module == mod)
        {
            /* Remember the first of the alternate APIs. */
            if ((first_alt = iff->first_alt) == NULL)
                first_alt = iff;

            break;
        }

        /*
         * They must be the same type except that we allow a class if we want
         * an exception.  This is because we allow classes to be used before
         * they are defined.
         */
        if (iff->type != iftype)
            if (iftype != exception_iface || iff->type != class_iface)
                yyerror("A class, exception, namespace or mapped type has already been defined with the same name");

        /* Ignore an external class declared in another module. */
        if (iftype == class_iface && iff->module != mod)
        {
            classDef *cd;

            for (cd = pt->classes; cd != NULL; cd = cd->next)
                if (cd->iff == iff)
                    break;

            if (cd != NULL && iff->module != NULL && isExternal(cd))
                continue;
        }

        /*
         * If this is a mapped type with the same name defined in a different
         * module, then check that this type isn't the same as any of the
         * mapped types defined in that module.
         */
        if (iftype == mappedtype_iface && iff->module != mod)
        {
            mappedTypeDef *mtd;

            /*
             * This is a bit of a cheat.  With consolidated modules it's
             * possible to have two implementations of a mapped type in
             * different branches of the module hierarchy.  We assume that, if
             * there really are multiple implementations in the same branch,
             * then it will be picked up in a non-consolidated build.
             */
            if (isConsolidated(pt->module))
                continue;

            for (mtd = pt->mappedtypes; mtd != NULL; mtd = mtd->next)
            {
                if (mtd->iff != iff)
                    continue;

                if (ad->atype != template_type ||
                    mtd->type.atype != template_type ||
                    sameBaseType(ad, &mtd->type))
                    yyerror("Mapped type has already been defined in another module");
            }

            /*
             * If we got here then we have a mapped type based on an existing
             * template, but with unique parameters.  We don't want to use
             * interface files from other modules, so skip this one.
             */

            continue;
        }

        /* Ignore a namespace defined in another module. */
        if (iftype == namespace_iface && iff->module != mod)
            continue;

        return iff;
    }

    iff = sipMalloc(sizeof (ifaceFileDef));

    iff->name = cacheName(pt, scopedNameToString(fqname));
    iff->api_range = api_range;

    if (first_alt != NULL)
    {
        iff->first_alt = first_alt;
        iff->next_alt = first_alt->next_alt;

        first_alt->next_alt = iff;
    }
    else
    {
        /* This is the first alternate so point to itself. */
        iff->first_alt = iff;
    }

    iff->type = iftype;
    iff->ifacenr = -1;
    iff->fqcname = fqname;
    iff->module = NULL;
    iff->hdrcode = NULL;
    iff->used = NULL;
    iff->next = pt->ifacefiles;

    pt->ifacefiles = iff;

    return iff;
}


/*
 * Find a class definition in a parse tree.
 */
static classDef *findClass(sipSpec *pt, ifaceFileType iftype,
        apiVersionRangeDef *api_range, scopedNameDef *fqname)
{
    return findClassWithInterface(pt, findIfaceFile(pt, currentModule, fqname, iftype, api_range, NULL));
}


/*
 * Find a class definition given an existing interface file.
 */
static classDef *findClassWithInterface(sipSpec *pt, ifaceFileDef *iff)
{
    classDef *cd;

    for (cd = pt -> classes; cd != NULL; cd = cd -> next)
        if (cd -> iff == iff)
            return cd;

    /* Create a new one. */
    cd = sipMalloc(sizeof (classDef));

    cd->iff = iff;
    cd->pyname = cacheName(pt, classBaseName(cd));
    cd->next = pt->classes;

    pt->classes = cd;

    return cd;
}


/*
 * Add an interface file to an interface file list if it isn't already there.
 */
void addToUsedList(ifaceFileList **ifflp, ifaceFileDef *iff)
{
    /* Make sure we don't try to add an interface file to its own list. */
    if (&iff->used != ifflp)
    {
        ifaceFileList *iffl;

        while ((iffl = *ifflp) != NULL)
        {
            /* Don't bother if it is already there. */
            if (iffl->iff == iff)
                return;

            ifflp = &iffl -> next;
        }

        iffl = sipMalloc(sizeof (ifaceFileList));

        iffl->iff = iff;
        iffl->next = NULL;

        *ifflp = iffl;
    }
}


/*
 * Find an undefined (or create a new) exception definition in a parse tree.
 */
static exceptionDef *findException(sipSpec *pt, scopedNameDef *fqname, int new)
{
    exceptionDef *xd, **tail;
    ifaceFileDef *iff;
    classDef *cd;

    iff = findIfaceFile(pt, currentModule, fqname, exception_iface, NULL, NULL);

    /* See if it is an existing one. */
    for (xd = pt->exceptions; xd != NULL; xd = xd->next)
        if (xd->iff == iff)
            return xd;

    /*
     * If it is an exception interface file then we have never seen this
     * name before.  We require that exceptions are defined before being
     * used, but don't make the same requirement of classes (for reasons of
     * backwards compatibility).  Therefore the name must be reinterpreted
     * as a (as yet undefined) class.
     */
    if (new)
    {
        if (iff->type == exception_iface)
            cd = NULL;
        else
            yyerror("There is already a class with the same name or the exception has been used before being defined");
    }
    else
    {
        if (iff->type == exception_iface)
            iff->type = class_iface;

        cd = findClassWithInterface(pt, iff);
    }

    /* Create a new one. */
    xd = sipMalloc(sizeof (exceptionDef));

    xd->exceptionnr = -1;
    xd->iff = iff;
    xd->pyname = NULL;
    xd->cd = cd;
    xd->bibase = NULL;
    xd->base = NULL;
    xd->raisecode = NULL;
    xd->next = NULL;

    /* Append it to the list. */
    for (tail = &pt->exceptions; *tail != NULL; tail = &(*tail)->next)
        ;

    *tail = xd;

    return xd;
}


/*
 * Find an undefined (or create a new) class definition in a parse tree.
 */
static classDef *newClass(sipSpec *pt, ifaceFileType iftype,
        apiVersionRangeDef *api_range, scopedNameDef *fqname)
{
    int flags;
    classDef *cd, *scope;
    codeBlockList *hdrcode;

    if (sectionFlags & SECT_IS_PRIVATE)
        yyerror("Classes, structs and namespaces must be in the public or protected sections");

    flags = 0;

    if ((scope = currentScope()) != NULL)
    {
        if (sectionFlags & SECT_IS_PROT && !makeProtPublic)
        {
            flags = CLASS_IS_PROTECTED;

            if (scope->iff->type == class_iface)
                setHasShadow(scope);
        }

        /* Header code from outer scopes is also included. */
        hdrcode = scope->iff->hdrcode;
    }
    else
        hdrcode = NULL;

    if (pt -> genc)
    {
        /* C structs are always global types. */
        while (fqname -> next != NULL)
            fqname = fqname -> next;

        scope = NULL;
    }

    cd = findClass(pt, iftype, api_range, fqname);

    /* Check it hasn't already been defined. */
    if (iftype != namespace_iface && cd->iff->module != NULL)
        yyerror("The struct/class has already been defined");

    /* Complete the initialisation. */
    cd->classflags |= flags;
    cd->ecd = scope;
    cd->iff->module = currentModule;

    if (currentIsTemplate)
        setIsTemplateClass(cd);

    appendCodeBlockList(&cd->iff->hdrcode, hdrcode);

    /* See if it is a namespace extender. */
    if (iftype == namespace_iface)
    {
        classDef *ns;

        for (ns = pt->classes; ns != NULL; ns = ns->next)
        {
            if (ns == cd)
                continue;

            if (ns->iff->type != namespace_iface)
                continue;

            if (compareScopedNames(ns->iff->fqcname, fqname) != 0)
                continue;

            cd->real = ns;
            break;
        }
    }

    return cd;
}


/*
 * Tidy up after finishing a class definition.
 */
static void finishClass(sipSpec *pt, moduleDef *mod, classDef *cd,
        optFlags *of)
{
    const char *pyname;
    optFlag *flg;

    /* Get the Python name and see if it is different to the C++ name. */
    pyname = getPythonName(mod, of, classBaseName(cd));

    cd->pyname = NULL;
    checkAttributes(pt, mod, cd->ecd, NULL, pyname, FALSE);
    cd->pyname = cacheName(pt, pyname);

    if ((flg = getOptFlag(of, "Metatype", dotted_name_flag)) != NULL)
        cd->metatype = cacheName(pt, flg->fvalue.sval);

    if ((flg = getOptFlag(of, "Supertype", dotted_name_flag)) != NULL)
        cd->supertype = cacheName(pt, flg->fvalue.sval);

    if ((flg = getOptFlag(of, "PyQt4Flags", integer_flag)) != NULL)
        cd->pyqt4_flags = flg->fvalue.ival;

    if (getOptFlag(of, "PyQt4NoQMetaObject", bool_flag) != NULL)
        setPyQt4NoQMetaObject(cd);

    if (isOpaque(cd))
    {
        if (getOptFlag(of, "External", bool_flag) != NULL)
            setIsExternal(cd);
    }
    else
    {
        int seq_might, seq_not;
        memberDef *md;

        if (getOptFlag(of, "NoDefaultCtors", bool_flag) != NULL)
            setNoDefaultCtors(cd);

        if (cd -> ctors == NULL)
        {
            if (!noDefaultCtors(cd))
            {
                /* Provide a default ctor. */

                cd->ctors = sipMalloc(sizeof (ctorDef));
 
                cd->ctors->ctorflags = SECT_IS_PUBLIC;
                cd->ctors->pysig.result.atype = void_type;
                cd->ctors->cppsig = &cd->ctors->pysig;

                cd->defctor = cd->ctors;

                setCanCreate(cd);
            }
        }
        else if (cd -> defctor == NULL)
        {
            ctorDef *ct, *last = NULL;

            for (ct = cd -> ctors; ct != NULL; ct = ct -> next)
            {
                if (!isPublicCtor(ct))
                    continue;

                if (ct -> pysig.nrArgs == 0 || ct -> pysig.args[0].defval != NULL)
                {
                    cd -> defctor = ct;
                    break;
                }

                if (last == NULL)
                    last = ct;
            }

            /* The last resort is the first public ctor. */
            if (cd->defctor == NULL)
                cd->defctor = last;
        }

        if (getDeprecated(of))
            setIsDeprecatedClass(cd);

        if (cd->convtocode != NULL && getAllowNone(of))
            setClassHandlesNone(cd);

        if (getOptFlag(of,"Abstract",bool_flag) != NULL)
        {
            setIsAbstractClass(cd);
            setIsIncomplete(cd);
            resetCanCreate(cd);
        }

        /* We assume a public dtor if nothing specific was provided. */
        if (!isDtor(cd))
            setIsPublicDtor(cd);

        if (getOptFlag(of, "DelayDtor", bool_flag) != NULL)
        {
            setIsDelayedDtor(cd);
            setHasDelayedDtors(mod);
        }

        /*
         * There are subtle differences between the add and concat methods and
         * the multiply and repeat methods.  The number versions can have their
         * operands swapped and may return NotImplemented.  If the user has
         * used the /Numeric/ annotation or there are other numeric operators
         * then we use add/multiply.  Otherwise, if there are indexing
         * operators then we use concat/repeat.
         */
        seq_might = seq_not = FALSE;

        for (md = cd -> members; md != NULL; md = md -> next)
            switch (md -> slot)
            {
            case getitem_slot:
            case setitem_slot:
            case delitem_slot:
                /* This might be a sequence. */
                seq_might = TRUE;
                break;

            case sub_slot:
            case isub_slot:
            case div_slot:
            case idiv_slot:
            case mod_slot:
            case imod_slot:
            case floordiv_slot:
            case ifloordiv_slot:
            case truediv_slot:
            case itruediv_slot:
            case pos_slot:
            case neg_slot:
                /* This is definately not a sequence. */
                seq_not = TRUE;
                break;
            }

        if (!seq_not && seq_might)
            for (md = cd -> members; md != NULL; md = md -> next)
            {
                /* Ignore if the user has been explicit. */
                if (isNumeric(md))
                    continue;

                switch (md -> slot)
                {
                case add_slot:
                    md -> slot = concat_slot;
                    break;

                case iadd_slot:
                    md -> slot = iconcat_slot;
                    break;

                case mul_slot:
                    md -> slot = repeat_slot;
                    break;

                case imul_slot:
                    md -> slot = irepeat_slot;
                    break;
                }
            }
    }

    if (inMainModule())
    {
        setIsUsedName(cd->iff->name);
        setIsUsedName(cd->pyname);
    }
}


/*
 * Return the encoded name of a template (ie. including its argument types) as
 * a scoped name.
 */
scopedNameDef *encodedTemplateName(templateDef *td)
{
    int a;
    scopedNameDef *snd;

    snd = copyScopedName(td->fqname);

    for (a = 0; a < td->types.nrArgs; ++a)
    {
        char buf[50];
        int flgs;
        scopedNameDef *arg_snd;
        argDef *ad = &td->types.args[a];

        flgs = 0;

        if (isConstArg(ad))
            flgs += 1;

        if (isReference(ad))
            flgs += 2;

        /* We use numbers so they don't conflict with names. */
        sprintf(buf, "%02d%d%d", ad->atype, flgs, ad->nrderefs);

        switch (ad->atype)
        {
        case defined_type:
            arg_snd = copyScopedName(ad->u.snd);
            break;

        case template_type:
            arg_snd = encodedTemplateName(ad->u.td);
            break;

        case struct_type:
            arg_snd = copyScopedName(ad->u.sname);
            break;

        default:
            arg_snd = NULL;
        }

        /*
         * Replace the first element of the argument name with a copy with the
         * encoding prepended.
         */
        if (arg_snd != NULL)
            arg_snd->name = concat(buf, arg_snd->name, NULL);
        else
            arg_snd = text2scopePart(sipStrdup(buf));

        appendScopedName(&snd, arg_snd);
    }

    return snd;
}


/*
 * Create a new mapped type.
 */
static mappedTypeDef *newMappedType(sipSpec *pt, argDef *ad, optFlags *of)
{
    mappedTypeDef *mtd;
    scopedNameDef *snd;
    ifaceFileDef *iff;
    const char *cname;

    /* Check that the type is one we want to map. */
    switch (ad->atype)
    {
    case defined_type:
        snd = ad->u.snd;
        cname = scopedNameTail(snd);
        break;

    case template_type:
        snd = encodedTemplateName(ad->u.td);
        cname = NULL;
        break;

    case struct_type:
        snd = ad->u.sname;
        cname = scopedNameTail(snd);
        break;

    default:
        yyerror("Invalid type for %MappedType");
    }

    iff = findIfaceFile(pt, currentModule, snd, mappedtype_iface,
            getAPIRange(of), ad);

    /* Check it hasn't already been defined. */
    for (mtd = pt->mappedtypes; mtd != NULL; mtd = mtd->next)
        if (mtd->iff == iff)
        {
            /*
             * We allow types based on the same template but with different
             * arguments.
             */
            if (ad->atype != template_type || sameBaseType(ad, &mtd->type))
                yyerror("Mapped type has already been defined in this module");
        }

    /* The module may not have been set yet. */
    iff->module = currentModule;

    /* Create a new mapped type. */
    mtd = allocMappedType(pt, ad);

    if (cname != NULL)
        mtd->pyname = cacheName(pt, getPythonName(currentModule, of, cname));

    if (getOptFlag(of, "NoRelease", bool_flag) != NULL)
        setNoRelease(mtd);

    if (getAllowNone(of))
        setHandlesNone(mtd);

    mtd->doctype = getDocType(of);

    mtd->iff = iff;
    mtd->next = pt->mappedtypes;

    pt->mappedtypes = mtd;

    if (inMainModule())
    {
        setIsUsedName(mtd->cname);

        if (mtd->pyname)
            setIsUsedName(mtd->pyname);
    }

    return mtd;
}


/*
 * Allocate, initialise and return a mapped type structure.
 */
mappedTypeDef *allocMappedType(sipSpec *pt, argDef *type)
{
    mappedTypeDef *mtd;

    mtd = sipMalloc(sizeof (mappedTypeDef));

    mtd->type = *type;
    mtd->type.argflags = 0;
    mtd->type.nrderefs = 0;

    mtd->cname = cacheName(pt, type2string(&mtd->type));

    return mtd;
}


/*
 * Create a new enum.
 */
static enumDef *newEnum(sipSpec *pt, moduleDef *mod, mappedTypeDef *mt_scope,
        char *name, optFlags *of, int flags)
{
    enumDef *ed, *first_alt, *next_alt;
    classDef *c_scope;
    ifaceFileDef *scope;

    if (mt_scope != NULL)
    {
        scope = mt_scope->iff;
        c_scope = NULL;
    }
    else
    {
        if ((c_scope = currentScope()) != NULL)
            scope = c_scope->iff;
        else
            scope = NULL;
    }

    ed = sipMalloc(sizeof (enumDef));

    /* Assume the enum isn't versioned. */
    first_alt = ed;
    next_alt = NULL;

    if (name != NULL)
    {
        ed->pyname = cacheName(pt, getPythonName(mod, of, name));
        checkAttributes(pt, mod, c_scope, mt_scope, ed->pyname->text, FALSE);

        ed->fqcname = text2scopedName(scope, name);
        ed->cname = cacheName(pt, scopedNameToString(ed->fqcname));

        if (inMainModule())
        {
            setIsUsedName(ed->pyname);
            setIsUsedName(ed->cname);
        }

        /* If the scope is versioned then look for any alternate. */
        if (scope != NULL && scope->api_range != NULL)
        {
            enumDef *alt;

            for (alt = pt->enums; alt != NULL; alt = alt->next)
            {
                if (alt->module != mod || alt->fqcname == NULL)
                    continue;

                if (compareScopedNames(alt->fqcname, ed->fqcname) == 0)
                {
                    first_alt = alt->first_alt;
                    next_alt = first_alt->next_alt;
                    first_alt->next_alt = ed;

                    break;
                }
            }
        }
    }
    else
    {
        ed->pyname = NULL;
        ed->fqcname = NULL;
        ed->cname = NULL;
    }

    if (flags & SECT_IS_PROT)
    {
        if (makeProtPublic)
        {
            flags &= ~SECT_IS_PROT;
            flags |= SECT_IS_PUBLIC;
        }
        else if (c_scope != NULL)
        {
            setHasShadow(c_scope);
        }
    }

    ed->enumflags = flags;
    ed->enumnr = -1;
    ed->ecd = c_scope;
    ed->emtd = mt_scope;
    ed->first_alt = first_alt;
    ed->next_alt = next_alt;
    ed->module = mod;
    ed->members = NULL;
    ed->slots = NULL;
    ed->overs = NULL;
    ed->next = pt -> enums;

    pt->enums = ed;

    return ed;
}


/*
 * Get the type values and (optionally) the type names for substitution in
 * handwritten code.
 */
void appendTypeStrings(scopedNameDef *ename, signatureDef *patt, signatureDef *src, signatureDef *known, scopedNameDef **names, scopedNameDef **values)
{
    int a;

    for (a = 0; a < patt->nrArgs; ++a)
    {
        argDef *pad = &patt->args[a];

        if (pad->atype == defined_type)
        {
            char *nam = NULL, *val;
            argDef *sad;

            /*
             * If the type names are already known then check that this is one
             * of them.
             */
            if (known == NULL)
                nam = scopedNameTail(pad->u.snd);
            else if (pad->u.snd->next == NULL)
            {
                int k;

                for (k = 0; k < known->nrArgs; ++k)
                {
                    /* Skip base types. */
                    if (known->args[k].atype != defined_type)
                        continue;

                    if (strcmp(pad->u.snd->name, known->args[k].u.snd->name) == 0)
                    {
                        nam = pad->u.snd->name;
                        break;
                    }
                }
            }

            if (nam == NULL)
                continue;

            /* Add the name. */
            appendScopedName(names, text2scopePart(nam));

            /*
             * Add the corresponding value.  For defined types we don't want 
             * any indirection or references.
             */
            sad = &src->args[a];

            if (sad->atype == defined_type)
                val = scopedNameToString(sad->u.snd);
            else
                val = type2string(sad);

            /* We do want const. */
            if (isConstArg(sad))
            {
                char *const_val = sipStrdup("const ");

                append(&const_val, val);
                free(val);

                val = const_val;
            }

            appendScopedName(values, text2scopePart(val));
        }
        else if (pad->atype == template_type)
        {
            argDef *sad = &src->args[a];

            /* These checks shouldn't be necessary, but... */
            if (sad->atype == template_type && pad->u.td->types.nrArgs == sad->u.td->types.nrArgs)
                appendTypeStrings(ename, &pad->u.td->types, &sad->u.td->types, known, names, values);
        }
    }
}


/*
 * Convert a type to a string on the heap.  The string will use the minimum
 * whitespace while still remaining valid C++.
 */
static char *type2string(argDef *ad)
{
    int i, on_heap = FALSE;
    int nr_derefs = ad->nrderefs;
    int is_reference = isReference(ad);
    char *s;

    /* Use the original type if possible. */
    if (ad->original_type != NULL && !noTypeName(ad->original_type))
    {
        s = scopedNameToString(ad->original_type->fqname);
        on_heap = TRUE;

        nr_derefs -= ad->original_type->type.nrderefs;

        if (isReference(&ad->original_type->type))
            is_reference = FALSE;
    }
    else
        switch (ad->atype)
        {
        case template_type:
            {
                templateDef *td = ad->u.td;

                s = scopedNameToString(td->fqname);
                append(&s, "<");

                for (i = 0; i < td->types.nrArgs; ++i)
                {
                    char *sub_type = type2string(&td->types.args[i]);

                    if (i > 0)
                        append(&s, ",");

                    append(&s, sub_type);
                    free(sub_type);
                }

                if (s[strlen(s) - 1] == '>')
                    append(&s, " >");
                else
                    append(&s, ">");

                on_heap = TRUE;
                break;
            }

        case struct_type:
            s = scopedNameToString(ad->u.sname);
            on_heap = TRUE;
            break;

        case defined_type:
            s = scopedNameToString(ad->u.snd);
            on_heap = TRUE;
            break;

        case ubyte_type:
        case ustring_type:
            s = "unsigned char";
            break;

        case byte_type:
        case ascii_string_type:
        case latin1_string_type:
        case utf8_string_type:
        case string_type:
            s = "char";
            break;

        case sbyte_type:
        case sstring_type:
            s = "signed char";
            break;

        case wstring_type:
            s = "wchar_t";
            break;

        case ushort_type:
            s = "unsigned short";
            break;

        case short_type:
            s = "short";
            break;

        case uint_type:
            s = "uint";
            break;

        case int_type:
        case cint_type:
            s = "int";
            break;

        case ulong_type:
            s = "unsigned long";
            break;

        case long_type:
            s = "long";
            break;

        case ulonglong_type:
            s = "unsigned long long";
            break;

        case longlong_type:
            s = "long long";
            break;

        case float_type:
        case cfloat_type:
            s = "float";
            break;

        case double_type:
        case cdouble_type:
            s = "double";
            break;

        case bool_type:
        case cbool_type:
            s = "bool";
            break;

        default:
            fatal("Unsupported type argument to type2string(): %d\n", ad->atype);
        }

    /* Make sure the string is on the heap. */
    if (!on_heap)
        s = sipStrdup(s);

    while (nr_derefs-- > 0)
        append(&s, "*");

    if (is_reference)
        append(&s, "&");

    return s;
}


/*
 * Convert a scoped name to a string on the heap.
 */
static char *scopedNameToString(scopedNameDef *name)
{
    static const char scope_string[] = "::";
    size_t len;
    scopedNameDef *snd;
    char *s, *dp;

    /* Work out the length of buffer needed. */
    len = 0;

    for (snd = name; snd != NULL; snd = snd->next)
    {
        len += strlen(snd->name);

        if (snd->next != NULL)
        {
            /* Ignore the encoded part of template names. */
            if (isdigit(snd->next->name[0]))
                break;

            len += strlen(scope_string);
        }
    }

    /* Allocate and populate the buffer. */
    dp = s = sipMalloc(len + 1);

    for (snd = name; snd != NULL; snd = snd->next)
    {
        strcpy(dp, snd->name);
        dp += strlen(snd->name);

        if (snd->next != NULL)
        {
            /* Ignore the encoded part of template names. */
            if (isdigit(snd->next->name[0]))
                break;

            strcpy(dp, scope_string);
            dp += strlen(scope_string);
        }
    }

    return s;
}


/*
 * Instantiate a class template.
 */
static void instantiateClassTemplate(sipSpec *pt, moduleDef *mod,
        classDef *scope, scopedNameDef *fqname, classTmplDef *tcd,
        templateDef *td)
{
    scopedNameDef *type_names, *type_values;
    classDef *cd;
    ctorDef *oct, **cttail;
    argDef *ad;
    ifaceFileList *iffl, **used;

    type_names = type_values = NULL;
    appendTypeStrings(classFQCName(tcd->cd), &tcd->sig, &td->types, NULL, &type_names, &type_values);

    /*
     * Add a mapping from the template name to the instantiated name.  If we
     * have got this far we know there is room for it.
     */
    ad = &tcd->sig.args[tcd->sig.nrArgs++];
    memset(ad, 0, sizeof (argDef));
    ad->atype = defined_type;
    ad->u.snd = classFQCName(tcd->cd);

    appendScopedName(&type_names, text2scopePart(scopedNameTail(classFQCName(tcd->cd))));
    appendScopedName(&type_values, text2scopePart(scopedNameToString(fqname)));

    /* Create the new class. */
    cd = sipMalloc(sizeof (classDef));

    /* Start with a shallow copy. */
    *cd = *tcd->cd;

    resetIsTemplateClass(cd);
    cd->pyname = cacheName(pt, scopedNameTail(fqname));
    cd->td = td;

    /* Handle the interface file. */
    cd->iff = findIfaceFile(pt, mod, fqname, class_iface,
            (scope != NULL ? scope->iff->api_range : NULL), NULL);
    cd->iff->module = mod;

    appendCodeBlockList(&cd->iff->hdrcode, tcd->cd->iff->hdrcode);

    /* Make a copy of the used list and add the enclosing scope. */
    used = &cd->iff->used;

    for (iffl = tcd->cd->iff->used; iffl != NULL; iffl = iffl->next)
        addToUsedList(used, iffl->iff);

    /* Include any scope header code. */
    if (scope != NULL)
        appendCodeBlockList(&cd->iff->hdrcode, scope->iff->hdrcode);

    if (inMainModule())
    {
        setIsUsedName(cd->iff->name);
        setIsUsedName(cd->pyname);
    }

    cd->ecd = currentScope();

    /* Handle the enums. */
    instantiateTemplateEnums(pt, tcd, td, cd, used, type_names, type_values);

    /* Handle the variables. */
    instantiateTemplateVars(pt, tcd, td, cd, used, type_names, type_values);

    /* Handle the typedefs. */
    instantiateTemplateTypedefs(pt, tcd, td, cd);

    /* Handle the ctors. */
    cd->ctors = NULL;
    cttail = &cd->ctors;

    for (oct = tcd->cd->ctors; oct != NULL; oct = oct->next)
    {
        ctorDef *nct = sipMalloc(sizeof (ctorDef));

        /* Start with a shallow copy. */
        *nct = *oct;

        templateSignature(&nct->pysig, FALSE, tcd, td, cd);

        if (oct->cppsig == NULL)
            nct->cppsig = NULL;
        else if (oct->cppsig == &oct->pysig)
            nct->cppsig = &nct->pysig;
        else
        {
            nct->cppsig = sipMalloc(sizeof (signatureDef));

            *nct->cppsig = *oct->cppsig;

            templateSignature(nct->cppsig, FALSE, tcd, td, cd);
        }

        nct->methodcode = templateCode(pt, used, nct->methodcode, type_names, type_values);

        nct->next = NULL;
        *cttail = nct;
        cttail = &nct->next;

        /* Handle the default ctor. */
        if (tcd->cd->defctor == oct)
            cd->defctor = nct;
    }

    cd->dealloccode = templateCode(pt, used, cd->dealloccode, type_names, type_values);
    cd->dtorcode = templateCode(pt, used, cd->dtorcode, type_names, type_values);

    /* Handle the methods. */
    cd->members = instantiateTemplateMethods(tcd->cd->members, mod);
    cd->overs = instantiateTemplateOverloads(pt, tcd->cd->overs,
            tcd->cd->members, cd->members, tcd, td, cd, used, type_names,
            type_values);

    cd->cppcode = templateCode(pt, used, cd->cppcode, type_names, type_values);
    cd->iff->hdrcode = templateCode(pt, used, cd->iff->hdrcode, type_names, type_values);
    cd->convtosubcode = templateCode(pt, used, cd->convtosubcode, type_names, type_values);
    cd->convtocode = templateCode(pt, used, cd->convtocode, type_names, type_values);
    cd->travcode = templateCode(pt, used, cd->travcode, type_names, type_values);
    cd->clearcode = templateCode(pt, used, cd->clearcode, type_names, type_values);
    cd->getbufcode = templateCode(pt, used, cd->getbufcode, type_names, type_values);
    cd->releasebufcode = templateCode(pt, used, cd->releasebufcode, type_names, type_values);
    cd->readbufcode = templateCode(pt, used, cd->readbufcode, type_names, type_values);
    cd->writebufcode = templateCode(pt, used, cd->writebufcode, type_names, type_values);
    cd->segcountcode = templateCode(pt, used, cd->segcountcode, type_names, type_values);
    cd->charbufcode = templateCode(pt, used, cd->charbufcode, type_names, type_values);
    cd->picklecode = templateCode(pt, used, cd->picklecode, type_names, type_values);
    cd->next = pt->classes;

    pt->classes = cd;

    tcd->sig.nrArgs--;

    freeScopedName(type_names);
    freeScopedName(type_values);
}


/*
 * Instantiate the methods of a template class.
 */
static memberDef *instantiateTemplateMethods(memberDef *tmd, moduleDef *mod)
{
    memberDef *md, *methods, **mdtail;

    methods = NULL;
    mdtail = &methods;

    for (md = tmd; md != NULL; md = md->next)
    {
        memberDef *nmd = sipMalloc(sizeof (memberDef));

        /* Start with a shallow copy. */
        *nmd = *md;

        nmd->module = mod;

        if (inMainModule())
            setIsUsedName(nmd->pyname);

        nmd->next = NULL;
        *mdtail = nmd;
        mdtail = &nmd->next;
    }

    return methods;
}


/*
 * Instantiate the overloads of a template class.
 */
static overDef *instantiateTemplateOverloads(sipSpec *pt, overDef *tod,
        memberDef *tmethods, memberDef *methods, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    overDef *od, *overloads, **odtail;

    overloads = NULL;
    odtail = &overloads;

    for (od = tod; od != NULL; od = od->next)
    {
        overDef *nod = sipMalloc(sizeof (overDef));
        memberDef *nmd, *omd;

        /* Start with a shallow copy. */
        *nod = *od;

        for (nmd = methods, omd = tmethods; omd != NULL; omd = omd->next, nmd = nmd->next)
            if (omd == od->common)
            {
                nod->common = nmd;
                break;
            }

        templateSignature(&nod->pysig, TRUE, tcd, td, cd);

        if (od->cppsig == &od->pysig)
            nod->cppsig = &nod->pysig;
        else
        {
            nod->cppsig = sipMalloc(sizeof (signatureDef));

            *nod->cppsig = *od->cppsig;

            templateSignature(nod->cppsig, TRUE, tcd, td, cd);
        }

        nod->methodcode = templateCode(pt, used, nod->methodcode, type_names, type_values);

        /* Handle any virtual handler. */
        if (od->virthandler != NULL)
        {
            moduleDef *mod = cd->iff->module;

            nod->virthandler = sipMalloc(sizeof (virtHandlerDef));

            /* Start with a shallow copy. */
            *nod->virthandler = *od->virthandler;

            if (od->virthandler->cppsig == &od->pysig)
                nod->virthandler->cppsig = &nod->pysig;
            else
            {
                nod->virthandler->cppsig = sipMalloc(sizeof (signatureDef));

                *nod->virthandler->cppsig = *od->virthandler->cppsig;

                templateSignature(nod->virthandler->cppsig, TRUE, tcd, td, cd);
            }

            nod->virthandler->module = mod;
            nod->virthandler->virtcode = templateCode(pt, used, nod->virthandler->virtcode, type_names, type_values);
            nod->virthandler->next = mod->virthandlers;

            mod->virthandlers = nod->virthandler;
        }

        nod->next = NULL;
        *odtail = nod;
        odtail = &nod->next;
    }

    return overloads;
}


/*
 * Instantiate the enums of a template class.
 */
static void instantiateTemplateEnums(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    enumDef *ted;
    moduleDef *mod = cd->iff->module;

    for (ted = pt->enums; ted != NULL; ted = ted->next)
        if (ted->ecd == tcd->cd)
        {
            enumDef *ed;
            enumMemberDef *temd;

            ed = sipMalloc(sizeof (enumDef));

            /* Start with a shallow copy. */
            *ed = *ted;

            if (ed->fqcname != NULL)
            {
                ed->fqcname = text2scopedName(cd->iff,
                        scopedNameTail(ed->fqcname));
                ed->cname = cacheName(pt, scopedNameToString(ed->fqcname));
            }

            if (inMainModule())
            {
                if (ed->pyname != NULL)
                    setIsUsedName(ed->pyname);

                if (ed->cname != NULL)
                    setIsUsedName(ed->cname);
            }

            ed->ecd = cd;
            ed->first_alt = ed;
            ed->module = mod;
            ed->members = NULL;

            for (temd = ted->members; temd != NULL; temd = temd->next)
            {
                enumMemberDef *emd;

                emd = sipMalloc(sizeof (enumMemberDef));

                /* Start with a shallow copy. */
                *emd = *temd;
                emd->ed = ed;

                emd->next = ed->members;
                ed->members = emd;
            }

            ed->slots = instantiateTemplateMethods(ted->slots, mod);
            ed->overs = instantiateTemplateOverloads(pt, ted->overs,
                    ted->slots, ed->slots, tcd, td, cd, used, type_names,
                    type_values);

            ed->next = pt->enums;
            pt->enums = ed;
        }
}


/*
 * Instantiate the variables of a template class.
 */
static void instantiateTemplateVars(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    varDef *tvd;

    for (tvd = pt->vars; tvd != NULL; tvd = tvd->next)
        if (tvd->ecd == tcd->cd)
        {
            varDef *vd;

            vd = sipMalloc(sizeof (varDef));

            /* Start with a shallow copy. */
            *vd = *tvd;

            if (inMainModule())
                setIsUsedName(vd->pyname);

            vd->fqcname = text2scopedName(cd->iff,
                    scopedNameTail(vd->fqcname));
            vd->ecd = cd;
            vd->module = cd->iff->module;

            templateType(&vd->type, tcd, td, cd);

            vd->accessfunc = templateCode(pt, used, vd->accessfunc, type_names, type_values);
            vd->getcode = templateCode(pt, used, vd->getcode, type_names, type_values);
            vd->setcode = templateCode(pt, used, vd->setcode, type_names, type_values);

            addVariable(pt, vd);
        }
}


/*
 * Instantiate the typedefs of a template class.
 */
static void instantiateTemplateTypedefs(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd)
{
    typedefDef *tdd;

    for (tdd = pt->typedefs; tdd != NULL; tdd = tdd->next)
    {
        typedefDef *new_tdd;

        if (tdd->ecd != tcd->cd)
            continue;

        new_tdd = sipMalloc(sizeof (typedefDef));

        /* Start with a shallow copy. */
        *new_tdd = *tdd;

        new_tdd->fqname = text2scopedName(cd->iff,
                scopedNameTail(new_tdd->fqname));
        new_tdd->ecd = cd;
        new_tdd->module = cd->iff->module;

        templateType(&new_tdd->type, tcd, td, cd);

        addTypedef(pt, new_tdd);
    }
}


/*
 * Replace any template arguments in a signature.
 */
static void templateSignature(signatureDef *sd, int result, classTmplDef *tcd, templateDef *td, classDef *ncd)
{
    int a;

    if (result)
        templateType(&sd->result, tcd, td, ncd);

    for (a = 0; a < sd->nrArgs; ++a)
        templateType(&sd->args[a], tcd, td, ncd);
}


/*
 * Replace any template arguments in a type.
 */
static void templateType(argDef *ad, classTmplDef *tcd, templateDef *td, classDef *ncd)
{
    int a;
    char *name;

    /* Descend into any sub-templates. */
    if (ad->atype == template_type)
    {
        templateDef *new_td = sipMalloc(sizeof (templateDef));

        /* Make a deep copy of the template definition. */
        *new_td = *ad->u.td;
        ad->u.td = new_td;

        templateSignature(&ad->u.td->types, FALSE, tcd, td, ncd);

        return;
    }

    /* Ignore if it isn't an unscoped name. */
    if (ad->atype != defined_type || ad->u.snd->next != NULL)
        return;

    name = ad->u.snd->name;

    for (a = 0; a < tcd->sig.nrArgs - 1; ++a)
        if (strcmp(name, scopedNameTail(tcd->sig.args[a].u.snd)) == 0)
        {
            argDef *tad = &td->types.args[a];

            ad->atype = tad->atype;

            /* We take the constrained flag from the real type. */
            resetIsConstrained(ad);

            if (isConstrained(tad))
                setIsConstrained(ad);

            ad->u = tad->u;

            return;
        }

    /* Handle the class name itself. */
    if (strcmp(name, scopedNameTail(classFQCName(tcd->cd))) == 0)
    {
        ad->atype = class_type;
        ad->u.cd = ncd;
        ad->original_type = NULL;
    }
}


/*
 * Replace any template arguments in a literal code block.
 */
codeBlockList *templateCode(sipSpec *pt, ifaceFileList **used,
        codeBlockList *ocbl, scopedNameDef *names, scopedNameDef *values)
{
    codeBlockList *ncbl = NULL;

    while (ocbl != NULL)
    {
        char *at = ocbl->block->frag;
        int start_of_line = TRUE;

        do
        {
            char *from = at, *first = NULL;
            codeBlock *cb;
            scopedNameDef *nam, *val, *nam_first, *val_first;

            /*
             * Don't do any substitution in lines that appear to be
             * preprocessor directives.  This prevents #include'd file names
             * being broken.
             */
            if (start_of_line)
            {
                /* Strip leading whitespace. */
                while (isspace(*from))
                    ++from;

                if (*from == '#')
                {
                    /* Skip to the end of the line. */
                    do
                        ++from;
                    while (*from != '\n' && *from != '\0');
                }
                else
                {
                    start_of_line = FALSE;
                }
            }

            /*
             * Go through the rest of this fragment looking for each of the
             * types and the name of the class itself.
             */
            nam = names;
            val = values;

            while (nam != NULL && val != NULL)
            {
                char *cp;

                if ((cp = strstr(from, nam->name)) != NULL)
                    if (first == NULL || first > cp)
                    {
                        nam_first = nam;
                        val_first = val;
                        first = cp;
                    }

                nam = nam->next;
                val = val->next;
            }

            /* Create the new fragment. */
            cb = sipMalloc(sizeof (codeBlock));

            if (at == ocbl->block->frag)
            {
                cb->filename = ocbl->block->filename;
                cb->linenr = ocbl->block->linenr;
            }
            else
                cb->filename = NULL;

            appendCodeBlock(&ncbl, cb);

            /* See if anything was found. */
            if (first == NULL)
            {
                /* We can just point to this. */
                cb->frag = at;

                /* All done with this one. */
                at = NULL;
            }
            else
            {
                static char *gen_names[] = {
                    "sipType_",
                    "sipClass_",
                    "sipEnum_",
                    "sipException_",
                    NULL
                };

                char *dp, *sp, **gn;
                int genname = FALSE;

                /*
                 * If the context in which the text is used is in the name of a
                 * SIP generated object then translate any "::" scoping to "_"
                 * and remove any const.
                 */
                for (gn = gen_names; *gn != NULL; ++gn)
                    if (search_back(first, at, *gn))
                    {
                        addUsedFromCode(pt, used, val_first->name);
                        genname = TRUE;
                        break;
                    }

                /* Fragment the fragment. */
                cb->frag = sipMalloc(first - at + strlen(val_first->name) + 1);

                strncpy(cb->frag, at, first - at);

                dp = &cb->frag[first - at];
                sp = val_first->name;

                if (genname)
                {
                    char gch;

                    if (strlen(sp) > 6 && strncmp(sp, "const ", 6) == 0)
                        sp += 6;

                    while ((gch = *sp++) != '\0')
                        if (gch == ':' && *sp == ':')
                        {
                            *dp++ = '_';
                            ++sp;
                        }
                        else
                            *dp++ = gch;

                    *dp = '\0';
                }
                else
                    strcpy(dp, sp);

                /* Move past the replaced text. */
                at = first + strlen(nam_first->name);

                if (*at == '\n')
                    start_of_line = TRUE;
            }
        }
        while (at != NULL && *at != '\0');

        ocbl = ocbl->next;
    }

    return ncbl;
}


/*
 * Return TRUE if the text at the end of a string matches the target string.
 */
static int search_back(const char *end, const char *start, const char *target)
{
    size_t tlen = strlen(target);

    if (start + tlen >= end)
        return FALSE;

    return (strncmp(end - tlen, target, tlen) == 0);
}


/*
 * Add any needed interface files based on handwritten code.
 */
static void addUsedFromCode(sipSpec *pt, ifaceFileList **used, const char *sname)
{
    ifaceFileDef *iff;
    enumDef *ed;

    for (iff = pt->ifacefiles; iff != NULL; iff = iff->next)
    {
        if (iff->type != class_iface && iff->type != exception_iface)
            continue;

        if (sameName(iff->fqcname, sname))
        {
            addToUsedList(used, iff);
            return;
        }
    }

    for (ed = pt->enums; ed != NULL; ed = ed->next)
    {
        if (ed->ecd == NULL)
            continue;

        if (sameName(ed->fqcname, sname))
        {
            addToUsedList(used, ed->ecd->iff);
            return;
        }
    }
}


/*
 * Compare a scoped name with its string equivalent.
 */
static int sameName(scopedNameDef *snd, const char *sname)
{
    while (snd != NULL && *sname != '\0')
    {
        const char *sp = snd->name;

        while (*sp != '\0' && *sname != ':' && *sname != '\0')
            if (*sp++ != *sname++)
                return FALSE;

        if (*sp != '\0' || (*sname != ':' && *sname != '\0'))
            return FALSE;

        snd = snd->next;

        if (*sname == ':')
            sname += 2;
    }

    return (snd == NULL && *sname == '\0');
}


/*
 * Compare a (possibly) relative scoped name with a fully qualified scoped name
 * while taking the current scope into account.
 */
static int foundInScope(scopedNameDef *fq_name, scopedNameDef *rel_name)
{
    classDef *scope;

    for (scope = currentScope(); scope != NULL; scope = scope->ecd)
    {
        scopedNameDef *snd;
        int found;

        snd = copyScopedName(classFQCName(scope));
        appendScopedName(&snd, copyScopedName(rel_name));

        found = (compareScopedNames(fq_name, snd) == 0);

        freeScopedName(snd);

        if (found)
            return TRUE;
    }

    return compareScopedNames(fq_name, rel_name) == 0;
}


/*
 * Create a new typedef.
 */
static void newTypedef(sipSpec *pt, moduleDef *mod, char *name, argDef *type,
        optFlags *optflgs)
{
    typedefDef *td;
    scopedNameDef *fqname;
    classDef *scope;

    scope = currentScope();
    fqname = text2scopedName((scope != NULL ? scope->iff : NULL), name);

    /* See if we are instantiating a template class. */
    if (type->atype == template_type)
    {
        classTmplDef *tcd;
        templateDef *td = type->u.td;

        for (tcd = pt->classtemplates; tcd != NULL; tcd = tcd->next)
            if (foundInScope(tcd->cd->iff->fqcname, td->fqname) &&
                sameTemplateSignature(&tcd->sig, &td->types, FALSE))
            {
                instantiateClassTemplate(pt, mod, scope, fqname, tcd, td);

                /* All done. */
                return;
            }
    }

    td = sipMalloc(sizeof (typedefDef));

    td->tdflags = 0;
    td->fqname = fqname;
    td->ecd = scope;
    td->module = mod;
    td->type = *type;

    if (getOptFlag(optflgs, "NoTypeName", bool_flag) != NULL)
        setNoTypeName(td);

    addTypedef(pt, td);
}


/*
 * Add a typedef to the list so that the list remains sorted.
 */
static void addTypedef(sipSpec *pt, typedefDef *tdd)
{
    typedefDef **tdp;

    /*
     * Check it doesn't already exist and find the position in the sorted list
     * where it should be put.
     */
    for (tdp = &pt->typedefs; *tdp != NULL; tdp = &(*tdp)->next)
    {
        int res = compareScopedNames((*tdp)->fqname, tdd->fqname);

        if (res == 0)
        {
            fatalScopedName(tdd->fqname);
            fatal(" already defined\n");
        }

        if (res > 0)
            break;
    }

    tdd->next = *tdp;
    *tdp = tdd;

    tdd->module->nrtypedefs++;
}


/*
 * Speculatively try and resolve any typedefs.  In some cases (eg. when
 * comparing template signatures) it helps to use the real type if it is known.
 * Note that this wouldn't be necessary if we required that all types be known
 * before they are used.
 */
static void resolveAnyTypedef(sipSpec *pt, argDef *ad)
{
    argDef orig = *ad;

    while (ad->atype == defined_type)
    {
        ad->atype = no_type;
        searchTypedefs(pt, ad->u.snd, ad);

        /*
         * Don't resolve to a template type as it may be superceded later on
         * by a more specific mapped type.
         */
        if (ad->atype == no_type || ad->atype == template_type)
        {
            *ad = orig;
            break;
        }
    }
}


/*
 * Return TRUE if the template signatures are the same.  A deep comparison is
 * used for mapped type templates where we want to recurse into any nested
 * templates.
 */
int sameTemplateSignature(signatureDef *tmpl_sd, signatureDef *args_sd,
        int deep)
{
    int a;

    if (tmpl_sd->nrArgs != args_sd->nrArgs)
        return FALSE;

    for (a = 0; a < tmpl_sd->nrArgs; ++a)
    {
        argDef *tmpl_ad = &tmpl_sd->args[a];
        argDef *args_ad = &args_sd->args[a];

        /*
         * If we are doing a shallow comparision (ie. for class templates) then
         * a type name in the template signature matches anything in the
         * argument signature.
         */
        if (tmpl_ad->atype == defined_type && !deep)
            continue;

        /*
         * For type names only compare the references and pointers, and do the
         * same for any nested templates.
         */
        if (tmpl_ad->atype == defined_type && args_ad->atype == defined_type)
        {
            if (isReference(tmpl_ad) != isReference(args_ad) || tmpl_ad->nrderefs != args_ad->nrderefs)
                return FALSE;
        }
        else if (tmpl_ad->atype == template_type && args_ad->atype == template_type)
        {
            if (!sameTemplateSignature(&tmpl_ad->u.td->types, &args_ad->u.td->types, deep))
                return FALSE;
        }
        else if (!sameBaseType(tmpl_ad, args_ad))
            return FALSE;
    }

    return TRUE;
}


/*
 * Create a new variable.
 */
static void newVar(sipSpec *pt, moduleDef *mod, char *name, int isstatic,
        argDef *type, optFlags *of, codeBlock *acode, codeBlock *gcode,
        codeBlock *scode, int section)
{
    varDef *var;
    classDef *escope = currentScope();
    nameDef *nd;

    /* Check the section. */
    if (section != 0)
    {
        if ((section & SECT_IS_PUBLIC) == 0)
            yyerror("Class variables must be in the public section");

        if (!isstatic && acode != NULL)
            yyerror("%AccessCode cannot be specified for non-static class variables");
    }

    if (isstatic && pt->genc)
        yyerror("Cannot have static members in a C structure");

    if (gcode != NULL || scode != NULL)
    {
        if (acode != NULL)
            yyerror("Cannot mix %AccessCode and %GetCode or %SetCode");

        if (escope == NULL)
            yyerror("Cannot specify %GetCode or %SetCode for global variables");
    }

    applyTypeFlags(mod, type, of);

    nd = cacheName(pt, getPythonName(mod, of, name));

    if (inMainModule())
        setIsUsedName(nd);

    checkAttributes(pt, mod, escope, NULL, nd->text, FALSE);

    var = sipMalloc(sizeof (varDef));

    var->pyname = nd;
    var->fqcname = text2scopedName((escope != NULL ? escope->iff : NULL),
            name);
    var->ecd = escope;
    var->module = mod;
    var->varflags = 0;
    var->type = *type;
    appendCodeBlock(&var->accessfunc, acode);
    appendCodeBlock(&var->getcode, gcode);
    appendCodeBlock(&var->setcode, scode);

    if (isstatic || (escope != NULL && escope->iff->type == namespace_iface))
        setIsStaticVar(var);

    addVariable(pt, var);
}


/*
 * Create a new ctor.
 */
static void newCtor(moduleDef *mod, char *name, int sectFlags,
        signatureDef *args, optFlags *optflgs, codeBlock *methodcode,
        throwArgs *exceptions, signatureDef *cppsig, int explicit,
        codeBlock *docstring)
{
    ctorDef *ct, **ctp;
    classDef *cd = currentScope();

    /* Check the name of the constructor. */
    if (strcmp(classBaseName(cd), name) != 0)
        yyerror("Constructor doesn't have the same name as its class");

    if (docstring != NULL)
        appendCodeBlock(&cd->docstring, docstring);

    /* Add to the list of constructors. */
    ct = sipMalloc(sizeof (ctorDef));

    if (sectFlags & SECT_IS_PROT && makeProtPublic)
    {
        sectFlags &= ~SECT_IS_PROT;
        sectFlags |= SECT_IS_PUBLIC;
    }

    /* Allow the signature to be used like an function signature. */
    memset(&args->result, 0, sizeof (argDef));
    args->result.atype = void_type;

    ct->ctorflags = sectFlags;
    ct->api_range = getAPIRange(optflgs);
    ct->pysig = *args;
    ct->cppsig = (cppsig != NULL ? cppsig : &ct->pysig);
    ct->exceptions = exceptions;
    appendCodeBlock(&ct->methodcode, methodcode);

    if (!isPrivateCtor(ct))
        setCanCreate(cd);

    if (isProtectedCtor(ct))
        setHasShadow(cd);

    if (explicit)
        setIsExplicitCtor(ct);

    getHooks(optflgs, &ct->prehook, &ct->posthook);

    if (getReleaseGIL(optflgs))
        setIsReleaseGILCtor(ct);
    else if (getHoldGIL(optflgs))
        setIsHoldGILCtor(ct);

    if (getTransfer(optflgs))
        setIsResultTransferredCtor(ct);

    if (getDeprecated(optflgs))
        setIsDeprecatedCtor(ct);

    if (!isPrivateCtor(ct))
        ct->kwargs = keywordArgs(mod, optflgs, &ct->pysig, FALSE);

    if (getOptFlag(optflgs, "NoDerived", bool_flag) != NULL)
    {
        if (cppsig != NULL)
            yyerror("The /NoDerived/ annotation cannot be used with a C++ signature");

        if (methodcode == NULL)
            yyerror("The /NoDerived/ annotation must be used with %MethodCode");

        ct->cppsig = NULL;
    }

    if (getOptFlag(optflgs, "Default", bool_flag) != NULL)
    {
        if (cd->defctor != NULL)
            yyerror("A constructor with the /Default/ annotation has already been defined");

        cd->defctor = ct;
    }

    /* Append to the list. */
    for (ctp = &cd->ctors; *ctp != NULL; ctp = &(*ctp)->next)
        ;

    *ctp = ct;
}


/*
 * Create a new function.
 */
static void newFunction(sipSpec *pt, moduleDef *mod, classDef *c_scope,
        mappedTypeDef *mt_scope, int sflags, int isstatic, int issignal,
        int isslot, int isvirt, char *name, signatureDef *sig, int isconst,
        int isabstract, optFlags *optflgs, codeBlock *methodcode,
        codeBlock *vcode, throwArgs *exceptions, signatureDef *cppsig,
        codeBlock *docstring)
{
    static const char *annos[] = {
        "__len__",
        "API",
        "AutoGen",
        "Deprecated",
        "DocType",
        "Encoding",
        "Factory",
        "HoldGIL",
        "KeywordArgs",
        "KeepReference",
        "NewThread",
        "NoArgParser",
        "NoCopy",
        "Numeric",
        "PostHook",
        "PreHook",
        "PyInt",
        "PyName",
        "RaisesPyException",
        "ReleaseGIL",
        "Transfer",
        "TransferBack",
        "TransferThis",
        NULL
    };

    const char *pyname;
    int factory, xferback, no_arg_parser;
    overDef *od, **odp, **headp;
    optFlag *of;
    virtHandlerDef *vhd;

    checkAnnos(optflgs, annos);

    /* Extra checks for a C module. */
    if (pt->genc)
    {
        if (c_scope != NULL)
            yyerror("Function declaration not allowed in a struct in a C module");

        if (isstatic)
            yyerror("Static functions not allowed in a C module");

        if (exceptions != NULL)
            yyerror("Exceptions not allowed in a C module");
    }

    if (mt_scope != NULL)
        headp = &mt_scope->overs;
    else if (c_scope != NULL)
        headp = &c_scope->overs;
    else
        headp = &mod->overs;

    /*
     * See if the function has a non-lazy method.  These are methods that
     * Python expects to see defined in the type before any instance of the
     * type is created.
     */
    if (c_scope != NULL)
    {
        static const char *lazy[] = {
            "__getattribute__",
            "__getattr__",
            "__enter__",
            "__exit__",
            NULL
        };

        const char **l;

        for (l = lazy; *l != NULL; ++l)
            if (strcmp(name, *l) == 0)
            {
                setHasNonlazyMethod(c_scope);
                break;
            }
    }

    /* See if it is a factory method. */
    if (getOptFlag(optflgs, "Factory", bool_flag) != NULL)
        factory = TRUE;
    else
    {
        int a;

        factory = FALSE;

        /* Check /TransferThis/ wasn't specified. */
        if (c_scope == NULL || isstatic)
            for (a = 0; a < sig->nrArgs; ++a)
                if (isThisTransferred(&sig->args[a]))
                    yyerror("/TransferThis/ may only be specified in constructors and class methods");
    }

    /* See if the result is to be returned to Python ownership. */
    xferback = (getOptFlag(optflgs, "TransferBack", bool_flag) != NULL);

    if (factory && xferback)
        yyerror("/TransferBack/ and /Factory/ cannot both be specified");

    /* Create a new overload definition. */

    od = sipMalloc(sizeof (overDef));

    /* Set the overload flags. */

    if ((sflags & SECT_IS_PROT) && makeProtPublic)
    {
        sflags &= ~SECT_IS_PROT;
        sflags |= SECT_IS_PUBLIC | OVER_REALLY_PROT;
    }

    od->overflags = sflags;

    if (issignal)
    {
        resetIsSlot(od);
        setIsSignal(od);
    }
    else if (isslot)
    {
        resetIsSignal(od);
        setIsSlot(od);
    }

    if (factory)
        setIsFactory(od);

    if (xferback)
        setIsResultTransferredBack(od);

    if (getTransfer(optflgs))
        setIsResultTransferred(od);

    if (getOptFlag(optflgs, "TransferThis", bool_flag) != NULL)
        setIsThisTransferredMeth(od);

    if (methodcode == NULL && getOptFlag(optflgs, "RaisesPyException", bool_flag) != NULL)
        setRaisesPyException(od);

    if (isProtected(od))
        setHasShadow(c_scope);

    if ((isSlot(od) || isSignal(od)) && !isPrivate(od))
    {
        if (isSignal(od))
            setHasShadow(c_scope);

        pt->sigslots = TRUE;
    }

    if (isSignal(od) && (methodcode != NULL || vcode != NULL))
        yyerror("Cannot provide code for signals");

    if (isstatic)
    {
        if (isSignal(od))
            yyerror("Static functions cannot be signals");

        if (isvirt)
            yyerror("Static functions cannot be virtual");

        setIsStatic(od);
    }

    if (isconst)
        setIsConst(od);

    if (isabstract)
    {
        if (sflags == 0)
            yyerror("Non-class function specified as abstract");

        setIsAbstract(od);
    }

    if ((of = getOptFlag(optflgs, "AutoGen", opt_name_flag)) != NULL)
    {
        if (of->fvalue.sval == NULL || isEnabledFeature(of->fvalue.sval))
            setIsAutoGen(od);
    }

    if (isvirt)
    {
        if (isSignal(od) && pluginPyQt3(pt))
            yyerror("Virtual signals aren't supported");

        setIsVirtual(od);
        setHasShadow(c_scope);

        vhd = sipMalloc(sizeof (virtHandlerDef));

        vhd->virthandlernr = -1;
        vhd->vhflags = 0;
        vhd->pysig = &od->pysig;
        vhd->cppsig = (cppsig != NULL ? cppsig : &od->pysig);
        appendCodeBlock(&vhd->virtcode, vcode);

        if (factory || xferback)
            setIsTransferVH(vhd);

        /*
         * Only add it to the module's virtual handlers if we are not in a
         * class template.
         */
        if (!currentIsTemplate)
        {
            vhd->module = mod;

            vhd->next = mod->virthandlers;
            mod->virthandlers = vhd;
        }
    }
    else
    {
        if (vcode != NULL)
            yyerror("%VirtualCatcherCode provided for non-virtual function");

        vhd = NULL;
    }

    od->cppname = name;
    od->pysig = *sig;
    od->cppsig = (cppsig != NULL ? cppsig : &od->pysig);
    od->exceptions = exceptions;
    appendCodeBlock(&od->methodcode, methodcode);
    od->virthandler = vhd;

    no_arg_parser = (getOptFlag(optflgs, "NoArgParser", bool_flag) != NULL);

    if (no_arg_parser)
    {
        if (methodcode == NULL)
            yyerror("%MethodCode must be supplied if /NoArgParser/ is specified");
    }

    if (getOptFlag(optflgs, "NoCopy", bool_flag) != NULL)
        setNoCopy(&od->pysig.result);

    handleKeepReference(optflgs, &od->pysig.result, mod);

    pyname = getPythonName(mod, optflgs, name);

    od->common = findFunction(pt, mod, c_scope, mt_scope, pyname,
            (methodcode != NULL), sig->nrArgs, no_arg_parser);

    if (isProtected(od))
        setHasProtected(od->common);

    if (strcmp(pyname, "__delattr__") == 0)
        setIsDelattr(od);

    if (docstring != NULL)
        appendCodeBlock(&od->common->docstring, docstring);

    od->api_range = getAPIRange(optflgs);

    if (od->api_range == NULL)
        setNotVersioned(od->common);

    if (getOptFlag(optflgs, "Numeric", bool_flag) != NULL)
        setIsNumeric(od->common);

    /* Methods that run in new threads must be virtual. */
    if (getOptFlag(optflgs, "NewThread", bool_flag) != NULL)
    {
        argDef *res;

        if (!isvirt)
            yyerror("/NewThread/ may only be specified for virtual functions");

        /*
         * This is an arbitary limitation to make the code generator slightly
         * easier - laziness on my part.
         */
        res = &od->cppsig->result;

        if (res->atype != void_type || res->nrderefs != 0)
            yyerror("/NewThread/ may only be specified for void functions");

        setIsNewThread(od);
    }

    getHooks(optflgs, &od->prehook, &od->posthook);

    if (getReleaseGIL(optflgs))
        setIsReleaseGIL(od);
    else if (getHoldGIL(optflgs))
        setIsHoldGIL(od);

    if (getDeprecated(optflgs))
        setIsDeprecated(od);

    if (!isPrivate(od) && !isSignal(od) && (od->common->slot == no_slot || od->common->slot == call_slot))
    {
        od->kwargs = keywordArgs(mod, optflgs, &od->pysig, hasProtected(od->common));

        if (od->kwargs != NoKwArgs)
            setUseKeywordArgs(od->common);

        /*
         * If the overload is protected and defined in an imported module then
         * we need to make sure that any other overloads' keyword argument
         * names are marked as used.
         */
        if (isProtected(od) && !inMainModule())
        {
            overDef *kwod;

            for (kwod = c_scope->overs; kwod != NULL; kwod = kwod->next)
                if (kwod->common == od->common && kwod->kwargs != NoKwArgs)
                {
                    int a;

                    for (a = 0; a < kwod->pysig.nrArgs; ++a)
                    {
                        argDef *ad = &kwod->pysig.args[a];

                        if (kwod->kwargs == OptionalKwArgs && ad->defval == NULL)
                            continue;

                        if (ad->name != NULL)
                            setIsUsedName(ad->name);
                    }
                }
        }
    }

    /* See if we want to auto-generate a __len__() method. */
    if (getOptFlag(optflgs, "__len__", bool_flag) != NULL)
    {
        overDef *len;

        len = sipMalloc(sizeof (overDef));

        len->cppname = "__len__";
        len->overflags = SECT_IS_PUBLIC;
        len->pysig.result.atype = ssize_type;
        len->pysig.nrArgs = 0;
        len->cppsig = &len->pysig;

        len->common = findFunction(pt, mod, c_scope, mt_scope, len->cppname,
                TRUE, 0, FALSE);

        if ((len->methodcode = od->methodcode) == NULL)
        {
            char *buf = sipStrdup("            sipRes = (SIP_SSIZE_T)sipCpp->");
            codeBlock *code;

            append(&buf, od->cppname);
            append(&buf, "();\n");

            code = sipMalloc(sizeof (codeBlock));

            code->frag = buf;
            code->filename = "Auto-generated";
            code->linenr = 1;

            appendCodeBlock(&len->methodcode, code);
        }

        len->next = NULL;

        od->next = len;
    }
    else
    {
        od->next = NULL;
    }

    /* Append to the list. */
    for (odp = headp; *odp != NULL; odp = &(*odp)->next)
        ;

    *odp = od;
}


/*
 * Return the Python name based on the C/C++ name and any /PyName/ annotation.
 */
static const char *getPythonName(moduleDef *mod, optFlags *optflgs,
        const char *cname)
{
    const char *pname;
    optFlag *of;
    autoPyNameDef *apnd;

    /* Use the explicit name if given. */
    if ((of = getOptFlag(optflgs, "PyName", name_flag)) != NULL)
        return of->fvalue.sval;

    /* Apply any automatic naming rules. */
    pname = cname;

    for (apnd = mod->autopyname; apnd != NULL; apnd = apnd->next)
    {
        size_t len = strlen(apnd->remove_leading);

        if (strncmp(pname, apnd->remove_leading, len) == 0)
            pname += len;
    }

    return pname;
}


/*
 * Cache a name in a module.  Entries in the cache are stored in order of
 * decreasing length.
 */
nameDef *cacheName(sipSpec *pt, const char *name)
{
    nameDef *nd, **ndp;
    size_t len;

    /* Allow callers to be lazy about checking if there is really a name. */
    if (name == NULL)
        return NULL;

    /* Skip entries that are too large. */
    ndp = &pt->namecache;
    len = strlen(name);

    while (*ndp != NULL && (*ndp)->len > len)
        ndp = &(*ndp)->next;

    /* Check entries that are the right length. */
    for (nd = *ndp; nd != NULL && nd->len == len; nd = nd->next)
        if (memcmp(nd->text, name, len) == 0)
            return nd;

    /* Create a new one. */
    nd = sipMalloc(sizeof (nameDef));

    nd->nameflags = 0;
    nd->text = name;
    nd->len = len;
    nd->next = *ndp;

    *ndp = nd;

    return nd;
}


/*
 * Find (or create) an overloaded function name.
 */
static memberDef *findFunction(sipSpec *pt, moduleDef *mod, classDef *c_scope,
        mappedTypeDef *mt_scope, const char *pname, int hwcode, int nrargs,
        int no_arg_parser)
{
    static struct slot_map {
        const char *name;   /* The slot name. */
        slotType type;      /* The corresponding type. */
        int needs_hwcode;   /* Set if handwritten code is required. */
        int nrargs;         /* Nr. of arguments. */
    } slot_table[] = {
        {"__str__", str_slot, TRUE, 0},
        {"__unicode__", unicode_slot, TRUE, 0},
        {"__int__", int_slot, FALSE, 0},
        {"__long__", long_slot, FALSE, 0},
        {"__float__", float_slot, FALSE, 0},
        {"__len__", len_slot, TRUE, 0},
        {"__contains__", contains_slot, TRUE, 1},
        {"__add__", add_slot, FALSE, 1},
        {"__sub__", sub_slot, FALSE, 1},
        {"__mul__", mul_slot, FALSE, 1},
        {"__div__", div_slot, FALSE, 1},
        {"__mod__", mod_slot, FALSE, 1},
        {"__floordiv__", floordiv_slot, TRUE, 1},
        {"__truediv__", truediv_slot, FALSE, 1},
        {"__and__", and_slot, FALSE, 1},
        {"__or__", or_slot, FALSE, 1},
        {"__xor__", xor_slot, FALSE, 1},
        {"__lshift__", lshift_slot, FALSE, 1},
        {"__rshift__", rshift_slot, FALSE, 1},
        {"__iadd__", iadd_slot, FALSE, 1},
        {"__isub__", isub_slot, FALSE, 1},
        {"__imul__", imul_slot, FALSE, 1},
        {"__idiv__", idiv_slot, FALSE, 1},
        {"__imod__", imod_slot, FALSE, 1},
        {"__ifloordiv__", ifloordiv_slot, TRUE, 1},
        {"__itruediv__", itruediv_slot, FALSE, 1},
        {"__iand__", iand_slot, FALSE, 1},
        {"__ior__", ior_slot, FALSE, 1},
        {"__ixor__", ixor_slot, FALSE, 1},
        {"__ilshift__", ilshift_slot, FALSE, 1},
        {"__irshift__", irshift_slot, FALSE, 1},
        {"__invert__", invert_slot, FALSE, 0},
        {"__call__", call_slot, FALSE, -1},
        {"__getitem__", getitem_slot, FALSE, 1},
        {"__setitem__", setitem_slot, TRUE, 2},
        {"__delitem__", delitem_slot, TRUE, 1},
        {"__lt__", lt_slot, FALSE, 1},
        {"__le__", le_slot, FALSE, 1},
        {"__eq__", eq_slot, FALSE, 1},
        {"__ne__", ne_slot, FALSE, 1},
        {"__gt__", gt_slot, FALSE, 1},
        {"__ge__", ge_slot, FALSE, 1},
        {"__cmp__", cmp_slot, FALSE, 1},
        {"__bool__", bool_slot, TRUE, 0},
        {"__nonzero__", bool_slot, TRUE, 0},
        {"__neg__", neg_slot, FALSE, 0},
        {"__pos__", pos_slot, FALSE, 0},
        {"__abs__", abs_slot, TRUE, 0},
        {"__repr__", repr_slot, TRUE, 0},
        {"__hash__", hash_slot, TRUE, 0},
        {"__index__", index_slot, TRUE, 0},
        {"__iter__", iter_slot, TRUE, 0},
        {"__next__", next_slot, TRUE, 0},
        {"__setattr__", setattr_slot, TRUE, 2},
        {"__delattr__", delattr_slot, TRUE, 1},
        {NULL}
    };

    memberDef *md, **flist;
    struct slot_map *sm;
    slotType st;

    /* Get the slot type. */
    st = no_slot;

    for (sm = slot_table; sm->name != NULL; ++sm)
        if (strcmp(sm->name, pname) == 0)
        {
            if (sm->needs_hwcode && !hwcode)
                yyerror("This Python slot requires %MethodCode");

            if (sm->nrargs >= 0)
            {
                if (mt_scope == NULL && c_scope == NULL)
                {
                    /* Global operators need one extra argument. */
                    if (sm -> nrargs + 1 != nrargs)
                        yyerror("Incorrect number of arguments to global operator");
                }
                else if (sm->nrargs != nrargs)
                    yyerror("Incorrect number of arguments to Python slot");
            }

            st = sm->type;

            break;
        }

    /* Check there is no name clash. */
    checkAttributes(pt, mod, c_scope, mt_scope, pname, TRUE);

    /* See if it already exists. */
    if (mt_scope != NULL)
        flist = &mt_scope->members;
    else if (c_scope != NULL)
        flist = &c_scope->members;
    else
        flist = &mod->othfuncs;

    /* __delattr__ is implemented as __setattr__. */
    if (st == delattr_slot)
    {
        if (inMainModule())
            setIsUsedName(cacheName(pt, pname));

        st = setattr_slot;
        pname = "__setattr__";
    }

    for (md = *flist; md != NULL; md = md->next)
        if (strcmp(md->pyname->text, pname) == 0 && md->module == mod)
            break;

    if (md == NULL)
    {
        /* Create a new one. */
        md = sipMalloc(sizeof (memberDef));

        md->pyname = cacheName(pt, pname);
        md->memberflags = 0;
        md->slot = st;
        md->module = mod;
        md->next = *flist;

        *flist = md;

        if (inMainModule())
            setIsUsedName(md->pyname);

        if (no_arg_parser)
            setNoArgParser(md);
    }
    else if (noArgParser(md))
        yyerror("Another overload has already been defined that is annotated as /NoArgParser/");

    /* Global operators are a subset. */
    if (mt_scope == NULL && c_scope == NULL && st != no_slot && st != neg_slot && st != pos_slot && !isNumberSlot(md) && !isInplaceNumberSlot(md) && !isRichCompareSlot(md))
        yyerror("Global operators must be either numeric or comparison operators");

    return md;
}


/*
 * Search a set of flags for a particular one.
 */
static optFlag *findOptFlag(optFlags *flgs, const char *name)
{
    int f;

    for (f = 0; f < flgs->nrFlags; ++f)
    {
        optFlag *of = &flgs->flags[f];

        if (strcmp(of->fname, name) == 0)
            return of;
    }

    return NULL;
}


/*
 * Search a set of flags for a particular one and check its type.
 */
static optFlag *getOptFlag(optFlags *flgs, const char *name, flagType ft)
{
    optFlag *of = findOptFlag(flgs, name);

    if (of != NULL)
    {
        /* An optional name can look like a boolean or a name. */
        if (ft == opt_name_flag)
        {
            if (of->ftype == bool_flag)
            {
                of->ftype = opt_name_flag;
                of->fvalue.sval = NULL;
            }
            else if (of->ftype == name_flag)
            {
                of->ftype = opt_name_flag;
            }
        }

        /* An optional integer can look like a boolean or an integer. */
        if (ft == opt_integer_flag)
        {
            if (of->ftype == bool_flag)
            {
                of->ftype = opt_integer_flag;
                of->fvalue.ival = -1;
            }
            else if (of->ftype == integer_flag)
            {
                of->ftype = opt_integer_flag;
            }
        }

        if (ft != of->ftype)
            yyerror("Annotation has a value of the wrong type");
    }

    return of;
}


/*
 * A name is going to be used as a Python attribute name within a Python scope
 * (ie. a Python dictionary), so check against what we already know is going in
 * the same scope in case there is a clash.
 */
static void checkAttributes(sipSpec *pt, moduleDef *mod, classDef *py_c_scope,
        mappedTypeDef *py_mt_scope, const char *attr, int isfunc)
{
    enumDef *ed;
    varDef *vd;
    classDef *cd;

    /* Check the enums. */

    for (ed = pt->enums; ed != NULL; ed = ed->next)
    {
        enumMemberDef *emd;

        if (ed->pyname == NULL)
            continue;

        if (py_c_scope != NULL)
        {
            if (ed->ecd != py_c_scope)
                continue;
        }
        else if (py_mt_scope != NULL)
        {
            if (ed->emtd != py_mt_scope)
                continue;
        }
        else if (ed->ecd != NULL || ed->emtd != NULL)
        {
            continue;
        }

        if (strcmp(ed->pyname->text, attr) == 0)
            yyerror("There is already an enum in scope with the same Python name");

        for (emd = ed->members; emd != NULL; emd = emd->next)
            if (strcmp(emd->pyname->text, attr) == 0)
                yyerror("There is already an enum member in scope with the same Python name");
    }

    /*
     * Only check the members if this attribute isn't a member because we
     * can handle members with the same name in the same scope.
     */
    if (!isfunc)
    {
        memberDef *md, *membs;
        overDef *overs;

        if (py_mt_scope != NULL)
        {
            membs = py_mt_scope->members;
            overs = py_mt_scope->overs;
        }
        else if (py_c_scope != NULL)
        {
            membs = py_c_scope->members;
            overs = py_c_scope->overs;
        }
        else
        {
            membs = mod->othfuncs;
            overs = mod->overs;
        }

        for (md = membs; md != NULL; md = md->next)
        {
            overDef *od;

            if (strcmp(md->pyname->text, attr) != 0)
                continue;

            /* Check for a conflict with all overloads. */
            for (od = overs; od != NULL; od = od->next)
            {
                if (od->common != md)
                    continue;

                yyerror("There is already a function in scope with the same Python name");
            }
        }
    }

    /* If the scope was a mapped type then that's all we have to check. */
    if (py_mt_scope != NULL)
        return;

    /* Check the variables. */
    for (vd = pt->vars; vd != NULL; vd = vd->next)
    {
        if (vd->ecd != py_c_scope)
            continue;

        if (strcmp(vd->pyname->text,attr) == 0)
            yyerror("There is already a variable in scope with the same Python name");
    }

    /* Check the classes. */
    for (cd = pt->classes; cd != NULL; cd = cd->next)
    {
        if (cd->ecd != py_c_scope || cd->pyname == NULL)
            continue;

        if (strcmp(cd->pyname->text, attr) == 0 && !isExternal(cd))
            yyerror("There is already a class or namespace in scope with the same Python name");
    }

    /* Check the exceptions. */
    if (py_c_scope == NULL)
    {
        exceptionDef *xd;

        for (xd = pt->exceptions; xd != NULL; xd = xd->next)
            if (xd->pyname != NULL && strcmp(xd->pyname, attr) == 0)
                yyerror("There is already an exception with the same Python name");
    }

    /* Check the properties. */
    if (py_c_scope != NULL)
    {
        propertyDef *pd;

        for (pd = py_c_scope->properties; pd != NULL; pd = pd->next)
            if (strcmp(pd->name->text, attr) == 0)
                yyerror("There is already a property with the same name");
    }
}


/*
 * Append a code block to a list of them.
 */
static void appendCodeBlock(codeBlockList **headp, codeBlock *cb)
{
    codeBlockList *cbl;

    /* Handle the trivial case. */
    if (cb == NULL)
        return;

    /* Find the end of the list. */
    while (*headp != NULL)
    {
        /* Ignore if the block is already in the list. */
        if ((*headp)->block == cb)
            return;

        headp = &(*headp)->next;
    }

    cbl = sipMalloc(sizeof (codeBlockList));
    cbl->block = cb;

    *headp = cbl;
}


/*
 * Append a code block list to an existing list.
 */
void appendCodeBlockList(codeBlockList **headp, codeBlockList *cbl)
{
    while (cbl != NULL)
    {
        appendCodeBlock(headp, cbl->block);
        cbl = cbl->next;
    }
}


/*
 * Handle the end of a fully parsed a file.
 */
static void handleEOF()
{
    /*
     * Check that the number of nested if's is the same as when we started
     * the file.
     */

    if (skipStackPtr > currentContext.ifdepth)
        fatal("Too many %%If statements in %s\n", previousFile);

    if (skipStackPtr < currentContext.ifdepth)
        fatal("Too many %%End statements in %s\n", previousFile);
}


/*
 * Handle the end of a fully parsed a module.
 */
static void handleEOM()
{
    moduleDef *from;

    /* Check it has been named. */
    if (currentModule->name == NULL)
        fatal("No %%Module has been specified for module defined in %s\n",
                previousFile);

    from = currentContext.prevmod;

    if (from != NULL && from->encoding == no_type)
        from->encoding = currentModule->encoding;

    /* The previous module is now current. */
    currentModule = from;
}


/*
 * Find an existing qualifier.
 */
static qualDef *findQualifier(const char *name)
{
    moduleDef *mod;

    for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
    {
        qualDef *qd;

        for (qd = mod->qualifiers; qd != NULL; qd = qd->next)
            if (strcmp(qd->name, name) == 0)
                return qd;
    }

    /* Qualifiers corresponding to the SIP version are created on the fly. */
    if (name[0] == 'S' && name[1] == 'I' && name[2] == 'P' && name[3] == '_')
    {
        const char *cp = &name[3];
        int major, minor, patch;

        cp = getInt(cp, &major);
        cp = getInt(cp, &minor);
        cp = getInt(cp, &patch);

        if (*cp != '\0')
            yyerror("Unexpected character after SIP version number");

        return allocQualifier(currentModule, -1,
                (major << 16) | (minor << 8) | patch, name, time_qualifier);
    }

    return NULL;
}


/*
 * Get an integer from string.
 */
static const char *getInt(const char *cp, int *ip)
{
    /* Handle the default value. */
    *ip = 0;

    if (*cp == '\0')
        return cp;

    /* There must be a leading underscore. */
    if (*cp++ != '_')
        yyerror("An underscore must separate the parts of a SIP version number");

    while (isdigit(*cp))
    {
        *ip *= 10;
        *ip += *cp - '0';
        ++cp;
    }

    return cp;
}


/*
 * Find an existing API.
 */
apiVersionRangeDef *findAPI(sipSpec *pt, const char *name)
{
    moduleDef *mod;

    for (mod = pt->modules; mod != NULL; mod = mod->next)
    {
        apiVersionRangeDef *avd;

        for (avd = mod->api_versions; avd != NULL; avd = avd->next)
            if (strcmp(avd->api_name->text, name) == 0)
                return avd;
    }

    return NULL;
}


/*
 * Return a copy of a scoped name.
 */
scopedNameDef *copyScopedName(scopedNameDef *snd)
{
    scopedNameDef *head;

    head = NULL;

    while (snd != NULL)
    {
        appendScopedName(&head,text2scopePart(snd -> name));
        snd = snd -> next;
    }

    return head;
}


/*
 * Append a name to a list of scopes.
 */
void appendScopedName(scopedNameDef **headp,scopedNameDef *newsnd)
{
    while (*headp != NULL)
        headp = &(*headp) -> next;

    *headp = newsnd;
}


/*
 * Free a scoped name - but not the text itself.
 */
void freeScopedName(scopedNameDef *snd)
{
    while (snd != NULL)
    {
        scopedNameDef *next = snd -> next;

        free(snd);

        snd = next;
    }
}


/*
 * Convert a text string to a scope part structure.
 */
static scopedNameDef *text2scopePart(char *text)
{
    scopedNameDef *snd;

    snd = sipMalloc(sizeof (scopedNameDef));

    snd->name = text;
    snd->next = NULL;

    return snd;
}


/*
 * Convert a text string to a fully scoped name.
 */
static scopedNameDef *text2scopedName(ifaceFileDef *scope, char *text)
{
    return scopeScopedName(scope, text2scopePart(text));
}


/*
 * Prepend any current scope to a scoped name.
 */
static scopedNameDef *scopeScopedName(ifaceFileDef *scope, scopedNameDef *name)
{
    scopedNameDef *snd;

    snd = (scope != NULL ? copyScopedName(scope->fqcname) : NULL);

    appendScopedName(&snd, name);

    return snd;
}


/*
 * Return a pointer to the tail part of a scoped name.
 */
char *scopedNameTail(scopedNameDef *snd)
{
    if (snd == NULL)
        return NULL;

    while (snd -> next != NULL)
        snd = snd -> next;

    return snd -> name;
}


/*
 * Push the given scope onto the scope stack.
 */
static void pushScope(classDef *scope)
{
    if (currentScopeIdx >= MAX_NESTED_SCOPE)
        fatal("Internal error: increase the value of MAX_NESTED_SCOPE\n");

    scopeStack[currentScopeIdx] = scope;
    sectFlagsStack[currentScopeIdx] = sectionFlags;

    ++currentScopeIdx;
}


/*
 * Pop the scope stack.
 */
static void popScope(void)
{
    if (currentScopeIdx > 0)
        sectionFlags = sectFlagsStack[--currentScopeIdx];
}


/*
 * Return non-zero if the current input should be parsed rather than be
 * skipped.
 */
static int notSkipping()
{
    return (skipStackPtr == 0 ? TRUE : skipStack[skipStackPtr - 1]);
}


/*
 * Return the value of an expression involving a time period.
 */
static int timePeriod(const char *lname, const char *uname)
{
    int this, line;
    qualDef *qd, *lower, *upper;
    moduleDef *mod;

    if (lname == NULL)
        lower = NULL;
    else if ((lower = findQualifier(lname)) == NULL || lower->qtype != time_qualifier)
        yyerror("Lower bound is not a time version");

    if (uname == NULL)
        upper = NULL;
    else if ((upper = findQualifier(uname)) == NULL || upper->qtype != time_qualifier)
        yyerror("Upper bound is not a time version");

    /* Sanity checks on the bounds. */
    if (lower == NULL && upper == NULL)
        yyerror("Lower and upper bounds cannot both be omitted");

    if (lower != NULL && upper != NULL)
    {
        if (lower->module != upper->module || lower->line != upper->line)
            yyerror("Lower and upper bounds are from different timelines");

        if (lower == upper)
            yyerror("Lower and upper bounds must be different");

        if (lower->order > upper->order)
            yyerror("Later version specified as lower bound");
    }

    /* Go through each slot in the relevant timeline. */
    if (lower != NULL)
    {
        mod = lower->module;
        line = lower->line;
    }
    else
    {
        mod = upper->module;
        line = upper->line;
    }

    /* Handle the SIP version number pseudo-timeline. */
    if (line < 0)
    {
        if (lower != NULL && lower->order > SIP_VERSION)
            return FALSE;

        if (upper != NULL && upper->order <= SIP_VERSION)
            return FALSE;

        return TRUE;
    }

    this = FALSE;

    for (qd = mod->qualifiers; qd != NULL; qd = qd->next)
    {
        if (qd->qtype != time_qualifier || qd->line != line)
            continue;

        if (lower != NULL && qd->order < lower->order)
            continue;

        if (upper != NULL && qd->order >= upper->order)
            continue;

        /*
         * This is within the required range so if it is also needed then the
         * expression is true.
         */
        if (isNeeded(qd))
        {
            this = TRUE;
            break;
        }
    }

    return this;
}


/*
 * Return the value of an expression involving a single platform or feature.
 */
static int platOrFeature(char *name,int optnot)
{
    int this;
    qualDef *qd;

    if ((qd = findQualifier(name)) == NULL || qd -> qtype == time_qualifier)
        yyerror("No such platform or feature");

    /* Assume this sub-expression is false. */

    this = FALSE;

    if (qd -> qtype == feature_qualifier)
    {
        if (!excludedFeature(excludedQualifiers,qd))
            this = TRUE;
    }
    else if (isNeeded(qd))
        this = TRUE;

    if (optnot)
        this = !this;

    return this;
}


/*
 * Return TRUE if the given qualifier is excluded.
 */
int excludedFeature(stringList *xsl,qualDef *qd)
{
    while (xsl != NULL)
    {
        if (strcmp(qd -> name,xsl -> s) == 0)
            return TRUE;

        xsl = xsl -> next;
    }

    return FALSE;
}


/*
 * Return TRUE if the given qualifier is needed.
 */
static int isNeeded(qualDef *qd)
{
    stringList *sl;

    for (sl = neededQualifiers; sl != NULL; sl = sl -> next)
        if (strcmp(qd -> name,sl -> s) == 0)
            return TRUE;

    return FALSE;
}


/*
 * Return the current scope.  currentScope() is only valid if notSkipping()
 * returns non-zero.
 */
static classDef *currentScope(void)
{
    return (currentScopeIdx > 0 ? scopeStack[currentScopeIdx - 1] : NULL);
}


/*
 * Create a new qualifier.
 */
static void newQualifier(moduleDef *mod, int line, int order, const char *name,
        qualType qt)
{
    /* Check it doesn't already exist. */
    if (findQualifier(name) != NULL)
        yyerror("Version is already defined");

    allocQualifier(mod, line, order, name, qt);
}


/*
 * Allocate a new qualifier.
 */
static qualDef *allocQualifier(moduleDef *mod, int line, int order,
        const char *name, qualType qt)
{
    qualDef *qd;

    qd = sipMalloc(sizeof (qualDef));

    qd->name = name;
    qd->qtype = qt;
    qd->module = mod;
    qd->line = line;
    qd->order = order;
    qd->next = mod->qualifiers;

    mod->qualifiers = qd;

    return qd;
}


/*
 * Create a new imported module.
 */
static void newImport(const char *filename)
{
    moduleDef *from, *mod;
    moduleListDef *mld;

    /* Create a new module if it has not already been defined. */
    for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
        if (strcmp(mod->file, filename) == 0)
            break;

    from = currentModule;

    if (mod == NULL)
    {
        newModule(NULL, filename);
        mod = currentModule;
    }
    else if (from->encoding == no_type)
    {
        /* Import any defaults from the already parsed module. */
        from->encoding = mod->encoding;
    }

    /* Add the new import unless it has already been imported. */
    for (mld = from->imports; mld != NULL; mld = mld->next)
        if (mld->module == mod)
            return;

    mld = sipMalloc(sizeof (moduleListDef));
    mld->module = mod;
    mld->next = from->imports;

    from->imports = mld;
}


/*
 * Set up pointers to hook names.
 */
static void getHooks(optFlags *optflgs,char **pre,char **post)
{
    optFlag *of;

    if ((of = getOptFlag(optflgs,"PreHook",name_flag)) != NULL)
        *pre = of -> fvalue.sval;
    else
        *pre = NULL;

    if ((of = getOptFlag(optflgs,"PostHook",name_flag)) != NULL)
        *post = of -> fvalue.sval;
    else
        *post = NULL;
}


/*
 * Get the /Transfer/ option flag.
 */
static int getTransfer(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "Transfer", bool_flag) != NULL);
}


/*
 * Get the /ReleaseGIL/ option flag.
 */
static int getReleaseGIL(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "ReleaseGIL", bool_flag) != NULL);
}


/*
 * Get the /HoldGIL/ option flag.
 */
static int getHoldGIL(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "HoldGIL", bool_flag) != NULL);
}


/*
 * Get the /Deprecated/ option flag.
 */
static int getDeprecated(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "Deprecated", bool_flag) != NULL);
}


/*
 * Get the /AllowNone/ option flag.
 */
static int getAllowNone(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "AllowNone", bool_flag) != NULL);
}


/*
 * Get the /DocType/ option flag.
 */
static const char *getDocType(optFlags *optflgs)
{
    optFlag *of = getOptFlag(optflgs, "DocType", string_flag);

    if (of == NULL)
        return NULL;

    return of->fvalue.sval;
}


/*
 * Get the /DocValue/ option flag.
 */
static const char *getDocValue(optFlags *optflgs)
{
    optFlag *of = getOptFlag(optflgs, "DocValue", string_flag);

    if (of == NULL)
        return NULL;

    return of->fvalue.sval;
}


/*
 * Return TRUE if the PyQt3 plugin was specified.
 */
int pluginPyQt3(sipSpec *pt)
{
    return stringFind(pt->plugins, "PyQt3");
}


/*
 * Return TRUE if the PyQt4 plugin was specified.
 */
int pluginPyQt4(sipSpec *pt)
{
    return stringFind(pt->plugins, "PyQt4");
}


/*
 * Return TRUE if a list of strings contains a given entry.
 */
static int stringFind(stringList *sl, const char *s)
{
    while (sl != NULL)
    {
        if (strcmp(sl->s, s) == 0)
            return TRUE;

        sl = sl->next;
    }

    return FALSE;
}


/*
 * Set the name of a module.
 */
static void setModuleName(sipSpec *pt, moduleDef *mod, const char *fullname)
{
    mod->fullname = cacheName(pt, fullname);

    if (inMainModule())
        setIsUsedName(mod->fullname);

    if ((mod->name = strrchr(fullname, '.')) != NULL)
        mod->name++;
    else
        mod->name = fullname;
}


/*
 * Define a new class and set its name.
 */
static void defineClass(scopedNameDef *snd, classList *supers, optFlags *of)
{
    classDef *cd, *c_scope = currentScope();

    cd = newClass(currentSpec, class_iface, getAPIRange(of),
            scopeScopedName((c_scope != NULL ? c_scope->iff : NULL), snd));
    cd->supers = supers;

    pushScope(cd);
}


/*
 * Complete the definition of a class.
 */
static classDef *completeClass(scopedNameDef *snd, optFlags *of, int has_def)
{
    classDef *cd = currentScope();

    /* See if the class was defined or just declared. */
    if (has_def)
    {
        if (snd->next != NULL)
            yyerror("A scoped name cannot be given in a class/struct definition");

    }
    else if (cd->supers != NULL)
        yyerror("Class/struct has super-classes but no definition");
    else
        setIsOpaque(cd);

    finishClass(currentSpec, currentModule, cd, of);
    popScope();

    /*
     * Check that external classes have only been declared at the global scope.
     */
    if (isExternal(cd) && currentScope() != NULL)
        yyerror("External classes/structs can only be declared in the global scope");

    return cd;
}


/*
 * Add a variable to the list so that the list remains sorted.
 */
static void addVariable(sipSpec *pt, varDef *vd)
{
    varDef **at = &pt->vars;

    while (*at != NULL)
    {
        if (strcmp(vd->pyname->text, (*at)->pyname->text) < 0)
            break;

        at = &(*at)->next;
    }

    vd->next = *at;
    *at = vd;
}


/*
 * Update a type according to optional flags.
 */
static void applyTypeFlags(moduleDef *mod, argDef *ad, optFlags *flags)
{
    ad->doctype = getDocType(flags);

    if (getOptFlag(flags, "PyInt", bool_flag) != NULL)
    {
        if (ad->atype == string_type)
            ad->atype = byte_type;
        else if (ad->atype == sstring_type)
            ad->atype = sbyte_type;
        else if (ad->atype == ustring_type)
            ad->atype = ubyte_type;
    }

    if (ad->atype == string_type && !isArray(ad) && !isReference(ad))
    {
        optFlag *of;

        if ((of = getOptFlag(flags, "Encoding", string_flag)) == NULL)
        {
            if (mod->encoding != no_type)
                ad->atype = mod->encoding;
            else
                ad->atype = string_type;
        }
        else if ((ad->atype = convertEncoding(of->fvalue.sval)) == no_type)
            yyerror("The value of the /Encoding/ annotation must be one of \"ASCII\", \"Latin-1\", \"UTF-8\" or \"None\"");
    }
}


/*
 * Return the keyword argument support converted from a string.
 */
static KwArgs convertKwArgs(const char *kwargs)
{
    if (strcmp(kwargs, "None") == 0)
        return NoKwArgs;

    if (strcmp(kwargs, "All") == 0)
        return AllKwArgs;

    if (strcmp(kwargs, "Optional") == 0)
        return OptionalKwArgs;

    yyerror("The style of keyword argument support must be one of \"All\", \"Optional\" or \"None\"");
}


/*
 * Return the Format for a string.
 */
static Format convertFormat(const char *format)
{
    if (strcmp(format, "raw") == 0)
        return raw;

    if (strcmp(format, "deindented") == 0)
        return deindented;

    yyerror("The docstring format must be either \"raw\" or \"deindented\"");
}


/*
 * Return the argument type for a string with the given encoding or no_type if
 * the encoding was invalid.
 */
static argType convertEncoding(const char *encoding)
{
    if (strcmp(encoding, "ASCII") == 0)
        return ascii_string_type;

    if (strcmp(encoding, "Latin-1") == 0)
        return latin1_string_type;

    if (strcmp(encoding, "UTF-8") == 0)
        return utf8_string_type;

    if (strcmp(encoding, "None") == 0)
        return string_type;

    return no_type;
}


/*
 * Get the /API/ option flag.
 */
static apiVersionRangeDef *getAPIRange(optFlags *optflgs)
{
    optFlag *of;

    if ((of = getOptFlag(optflgs, "API", api_range_flag)) == NULL)
        return NULL;

    return of->fvalue.aval;
}


/*
 * Return the API range structure and version number corresponding to the
 * given API range.
 */
static apiVersionRangeDef *convertAPIRange(moduleDef *mod, nameDef *name,
        int from, int to)
{
    int index;
    apiVersionRangeDef *avd, **avdp;

    /* Handle the trivial case. */
    if (from == 0 && to == 0)
        return NULL;

    for (index = 0, avdp = &mod->api_ranges; (*avdp) != NULL; avdp = &(*avdp)->next, ++index)
    {
        avd = *avdp;

        if (avd->api_name == name && avd->from == from && avd->to == to)
            return avd;
    }

    /* The new one must be appended so that version numbers remain valid. */
    avd = sipMalloc(sizeof (apiVersionRangeDef));

    avd->api_name = name;
    avd->from = from;
    avd->to = to;
    avd->index = index;

    avd->next = NULL;
    *avdp = avd;

    return avd;
}


/*
 * Return the style of keyword argument support for a signature.
 */
static KwArgs keywordArgs(moduleDef *mod, optFlags *optflgs, signatureDef *sd,
        int need_name)
{
    KwArgs kwargs;
    optFlag *ka_anno, *no_ka_anno;

    /* Get the default. */
    kwargs = mod->kwargs;

    /*
     * Get the possible annotations allowing /KeywordArgs/ to have different
     * types of values.
     */
    ka_anno = findOptFlag(optflgs, "KeywordArgs");
    no_ka_anno = getOptFlag(optflgs, "NoKeywordArgs", bool_flag);

    if (no_ka_anno != NULL)
    {
        if (ka_anno != NULL)
            yyerror("/KeywordArgs/ and /NoKeywordArgs/ cannot both be specified");

        deprecated("/NoKeywordArgs/ is deprecated, use /KeywordArgs=\"None\" instead");

        kwargs = NoKwArgs;
    }
    else if (ka_anno != NULL)
    {
        /* A string value is the non-deprecated type. */
        if (ka_anno->ftype == string_flag)
        {
            kwargs = convertKwArgs(ka_anno->fvalue.sval);
        }
        else
        {
            deprecated("/KeywordArgs/ is deprecated, use /KeywordArgs=\"All\" instead");

            /* Get it again to check the type. */
            ka_anno = getOptFlag(optflgs, "KeywordArgs", bool_flag);
        }
    }

    /* An ellipsis cannot be used with keyword arguments. */
    if (sd->nrArgs > 0 && sd->args[sd->nrArgs - 1].atype == ellipsis_type)
        kwargs = NoKwArgs;

    if (kwargs != NoKwArgs)
    {
        int a, is_name = FALSE;

        /*
         * Mark argument names as being used and check there is at least one.
         */
        for (a = 0; a < sd->nrArgs; ++a)
        {
            argDef *ad = &sd->args[a];

            if (kwargs == OptionalKwArgs && ad->defval == NULL)
                continue;

            if (ad->name != NULL)
            {
                if (need_name || inMainModule())
                    setIsUsedName(ad->name);

                is_name = TRUE;
            }
        }

        if (!is_name)
            kwargs = NoKwArgs;
    }

    return kwargs;
}


/*
 * Extract the version of a string value optionally associated with a
 * particular feature.
 */
static char *convertFeaturedString(char *fs)
{
    while (fs != NULL)
    {
        char *next, *value;

        /* Individual values are ';' separated. */
        if ((next = strchr(fs, ';')) != NULL)
            *next++ = '\0';

        /* Features and values are ':' separated. */
        if ((value = strchr(fs, ':')) == NULL)
        {
            /* This is an unconditional value so just return it. */
            return strip(fs);
        }

        *value++ = '\0';

        if (isEnabledFeature(strip(fs)))
            return strip(value);

        fs = next;
    }

    /* No value was enabled. */
    return NULL;
}


/*
 * Return the stripped version of a string.
 */
static char *strip(char *s)
{
    while (*s == ' ')
        ++s;

    if (*s != '\0')
    {
        char *cp = &s[strlen(s) - 1];

        while (*cp == ' ')
            *cp-- = '\0';
    }

    return s;
}


/*
 * Return TRUE if the given feature is enabled.
 */
static int isEnabledFeature(const char *name)
{
    qualDef *qd;

    if ((qd = findQualifier(name)) == NULL || qd->qtype != feature_qualifier)
        yyerror("No such feature");

    return !excludedFeature(excludedQualifiers, qd);
}


/*
 * Add a property definition to a class.
 */
static void addProperty(sipSpec *pt, moduleDef *mod, classDef *cd,
        const char *name, const char *get, const char *set,
        codeBlock *docstring)
{
    propertyDef *pd;

    checkAttributes(pt, mod, cd, NULL, name, FALSE);

    pd = sipMalloc(sizeof (propertyDef));

    pd->name = cacheName(pt, name);
    pd->get = get;
    pd->set = set;
    appendCodeBlock(&pd->docstring, docstring);
    pd->next = cd->properties;

    cd->properties = pd;

    if (inMainModule())
        setIsUsedName(pd->name);
}


/*
 * Configure a module and return the (possibly new) current module.
 */
static moduleDef *configureModule(sipSpec *pt, moduleDef *module,
        const char *filename, const char *name, int version, int c_module,
        KwArgs kwargs, int use_arg_names, codeBlock *docstring)
{
    moduleDef *mod;

    /* Check the module hasn't already been defined. */
    for (mod = pt->modules; mod != NULL; mod = mod->next)
        if (mod->fullname != NULL && strcmp(mod->fullname->text, name) == 0)
            yyerror("Module is already defined");

    /*
     * If we are in a container module then create a component module and make
     * it current.
     */
    if (isContainer(module) || module->container != NULL)
    {
        mod = allocModule();

        mod->file = filename;
        mod->container = (isContainer(module) ? module : module->container);

        module = mod;
    }

    setModuleName(pt, module, name);
    module->kwargs = kwargs;
    module->version = version;
    appendCodeBlock(&module->docstring, docstring);

    if (use_arg_names)
        setUseArgNames(module);

    if (pt->genc < 0)
        pt->genc = c_module;
    else if (pt->genc != c_module)
        yyerror("Cannot mix C and C++ modules");

    return module;
}


/*
 * Add a Python naming rule to a module.
 */
static void addAutoPyName(moduleDef *mod, const char *remove_leading)
{
    autoPyNameDef *apnd, **apndp;

    for (apndp = &mod->autopyname; *apndp != NULL; apndp = &(*apndp)->next)
        ;

    apnd = sipMalloc(sizeof (autoPyNameDef));
    apnd->remove_leading = remove_leading;
    apnd->next = *apndp;

    *apndp = apnd;
}


/*
 * Check that no invalid or unknown annotations are given.
 */
static void checkAnnos(optFlags *annos, const char *valid[])
{
    if (parsingCSignature && annos->nrFlags != 0)
    {
        deprecated("Annotations should not be used in explicit C/C++ signatures");
    }
    else
    {
        int i;

        for (i = 0; i < annos->nrFlags; i++)
        {
            const char **name;

            for (name = valid; *name != NULL; ++name)
                if (strcmp(*name, annos->flags[i].fname) == 0)
                    break;

            if (*name == NULL)
                deprecated("Annotation is invalid");
        }
    }
}


/*
 * Check that no annotations were given.
 */
static void checkNoAnnos(optFlags *annos, const char *msg)
{
    if (annos->nrFlags != 0)
        deprecated(msg);
}


/*
 * Handle any /KeepReference/ annotation for a type.
 */
static void handleKeepReference(optFlags *optflgs, argDef *ad, moduleDef *mod)
{
    optFlag *of;

    if ((of = getOptFlag(optflgs, "KeepReference", opt_integer_flag)) != NULL)
    {
        setKeepReference(ad);

        if ((ad->key = of->fvalue.ival) < -1)
            yyerror("/KeepReference/ key cannot be negative");

        /* If there was no explicit key then auto-allocate one. */
        if (ad->key == -1)
            ad->key = mod->next_key--;
    }
}

