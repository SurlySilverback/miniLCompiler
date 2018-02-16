/* Mini Language                             */
/* Written by Rick Boshae and Gabriel Cortez */
/* mini_l.y                                  */

%{

  #include <stdio.h>

  void yyerror(const char *msg);

%}

%union{
  int		    int_val;

}

%start	Program_Prime
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS
%token BEGIN_BODY END_BODY ARRAY OF IF THEN ENDIF ELSE WHILE DO
%token FOREACH IN BEGINLOOP ENDLOOP CONTINUE READ WRITE AND OR
%token NOT TRUE FALSE RETURN PLUS SUB MULT DIV MOD EQ NEQ LT GT
%token LTE GTE SEMICOLON COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET
%token IDENT R_SQUARE_BRACKET ASSIGN NUMBER
%token	<int_val>	INTEGER
%left	PLUS SUB
%left	MULT DIV

%%

Program_Prime:  Program                     {printf("Program_Prime --> Program");}
                ;

Program:        /* empty - epsilon */       {printf("Program --> epsilon");}
                | Function Program          {printf("Program --> Function Program");}
                ;

Function:       FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY {printf("Function --> FUNCTION IDENT SEMICOLON BEGIN_PARAMS A END_PARAMS BEGIN_LOCALS A END_LOCALS BEGIN_BODY B SEMICOLON END_BODY");}

A:              /* empty - epsilon */                                    {printf("A --> epsilon");}
                | Declaration SEMICOLON A                                {printf("A --> Declaration SEMICOLON A");}
                ;

B:              /* empty - epsilon */                                    {printf("B --> epsilon");}
                | Statement SEMICOLON B                                  {printf("B --> Statement SEMICOLON B");}
                ;

Declaration:    IDENT C COLON D INTEGER                                  {printf("Declaration --> IDENT C COLON D INTEGER");}
                ;

C:              /* empty - epsilon */                                    {printf("C --> epsilon");}
                | COMMA IDENT C                                          {printf("C --> COMMA IDENT C");}
                ;

D:              /* empty - epsilon */                                    {printf("D --> epsilon");}
                | ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF      {printf("D --> ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF");}
                ;

Statement:      E                                                        {printf("Statement --> E");}
                | F                                                      {printf("Statement --> F");}
                | H                                                      {printf("Statement --> H");}
                | I                                                      {printf("Statement --> I");}
                | J                                                      {printf("Statement --> J");}
                | K                                                      {printf("Statement --> K");}
                | M                                                      {printf("Statement --> M");}
                | N                                                      {printf("Statement --> N");}
                | O                                                      {printf("Statement --> O");}
                ;

E:              Var ASSIGN Expression                                    {printf("E --> Var ASSIGN Expression");}

F:              IF Bool-Expr THEN Statement SEMICOLON B G ENDIF          {printf("F --> Var ASSIGN Expression");}
                ;

G:              /* empty - epsilon */                                    {printf("G --> epsilon");}
                | ELSE Statement SEMICOLON B                             {printf("G --> ELSE Statement SEMICOLON B");}
                ;

H:              WHILE Bool-Expr BEGINLOOP Statement SEMICOLON B ENDLOOP  {printf("H --> ELSE Statement SEMICOLON B");}
                ;

I:              DO BEGINLOOP Statement SEMICOLON B ENDLOOP               {printf("I --> DO BEGINLOOP Statement SEMICOLON B ENDLOOP");}
                ;

J:              FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP  {printf("J --> FOREACH IDENT IN IDENT BEGINLOOP Statement SEMICOLON B ENDLOOP");}
                ;

K:              READ Var L                                               {printf("K --> READ Var L ");}
                ;

L:              /* empty - epsilon */                                    {printf("L --> epsilon");}
                | COMMA Var                                              {printf("L --> COMMA Var");}
                ;

M:              WRITE Var L                                              {printf("M --> WRITE Var L");}
                ;

N:              CONTINUE                                                 {printf("N --> CONTINUE");}
                ;

O:              RETURN Expression                                        {printf("O --> RETURN Expression\n");}
                ;

Bool-Expr:      Relation-And-Expr P                                      {printf("Bool-Expr --> Relation-And-Expr P\n");}
                ;

P:              /* empty - epsilon */                                    {printf("P --> epsilon\n");}
                | OR Relation-And-Expr P                                 {printf("P --> OR Relation-And-Expr P\n");}
                ;

Relation-And-Expr:  Relation-Expr Q                                      {printf("Relation-And-Expr --> Relation-Expr Q\n");}

Q:              /* empty - epsilon */                                    {printf("Q --> epsilon\n");}
                | AND Relation-Expr Q                                    {printf("Q --> AND Relation-Expr Q\n");}
                ;

Relation-Expr:  R Expression Comp Expression                             {printf("Relation-Expr --> R Expression Comp Expression\n");}
                | R TRUE                                                 {printf("Relation-Expr --> R TRUE\n");}
                | R FALSE                                                {printf("Relation-Expr --> R FALSE\n");}
                | R L_PAREN Bool-Expr R_PAREN                            {printf("Relation-Expr --> R L_PAREN Bool-Expr R_PAREN\n");}
                ;

R:              /* empty - epsilon */                                    {printf("R --> epsilon\n");}
                | NOT                                                    {printf("R --> NOT\n");}
                ;

Comp:           EQ                                                       {printf("Comp --> EQ\n");}
                | NEQ                                                    {printf("Comp --> NEQ\n");}
                | LT                                                     {printf("Comp --> LT\n");}
                | GT                                                     {printf("Comp --> GT\n");}
                | LTE                                                    {printf("Comp --> LTE\n");}
                | GTE                                                    {printf("Comp --> GTE\n");}
                ;

Expression:     Multiplicative-Expr S T
                ;

S:              /* empty - epsilon */                                  {printf("S --> epsilon\n");}
                | PLUS Multiplicative-Expr S T                         {printf("S --> PLUS Multiplicative-Expr S T\n");}
                ;

T:              /* empty - epsilon */                                  {printf("T --> epsilon\n");}
                | SUB Multiplicative-Expr S T                          {printf("T --> SUB Multiplicative-Expr S T\n");}
                ;

Multiplicative-Expr:  Term U V W                                       {printf("Multiplicative-Expr --> Term U V W\n");}
                ;

U:              /* empty - epsilon */                                  {printf("U --> epsilon\n");}
                | MULT Term U V W                                      {printf("U --> MULT Term U V W\n");}
                ;

V:              /* empty - epsilon */                                  {printf("V --> epsilon\n");}
                | DIV Term U V W                                       {printf("V --> DIV Term U V W\n");}
                ;

W:              /* empty - epsilon */                                  {printf("W --> epsilon\n");}
                | MOD Term U V W                                       {printf("W --> MOD Term U V W\n");}
                ;

Term:           X Var                                                  {printf("Term --> X Var\n");}
                | X NUMBER                                             {printf("Term --> X NUMBER\n");}
                | X L_PAREN Expression R_PAREN                         {printf("Term --> X L_PAREN Expression R_PAREN\n");}
                | IDENT L_PAREN Y R_PAREN                              {printf("Term --> IDENT L_PAREN Y R_PAREN\n");}
                ;

X:              /* empty - epsilon */                                  {printf("X --> epsilon\n");}
                | SUB                                                  {printf("X --> SUB\n");}
                ;

Y:              /* empty - epsilon */                                  {printf("Y --> epsilon\n");}
                | Expression Z                                         {printf("Y --> Expression Z\n");}
                ;

Z:              /* empty - epsilon */                                  {printf("Z --> epsilon\n");}
                | COMMA Expression Z                                   {printf("Z --> COMMA Expression Z\n");}
                ;

Var:            IDENT                                                  {printf("Var --> IDENT\n");}
                | IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET   {printf("Var --> IDENT L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");}
                ;
%%

void yyerror(const char *msg)
{
  // extern int yylineno;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  extern int currentColumn;
  extern int currentLine;

  printf("Error Occured.\n");

  return;
}

int main( int argc, char **argv )
{
  //yylex();
  yyparse();
}
