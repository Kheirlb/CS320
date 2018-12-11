# CS320
My personal cloud of class notes and scripts.

Program Review followed by Lectures

## Program Review
- p1 = Completed (No Errors)
- p2 = Completed (Some Errors)
- p3 = Incomplete (Many Errors)
- p4 = Completed (No Errors - Hopefully)
- p5 = Completed (No Errors - Hopefully)

Most present lecture at the top.

## Lecture 12/5/18
define vs set!
symbol? "type check predicate"
car pointer to a pair?
(define lis0 (one 2 (three and a) four 5))
(car (cdr lis0)) = (cadr lis0)
(cddr lis0)
(caddr lis0)
(cadr (cadr lis0))
(cadr (cddr lis0))

test question:
Define a function cadr that gives the car of the cdr of a list.

(define (cadr x)
  (car (cdr x)))

(define cadr
  (lambda (x)...

list-ref

Everything is an object in racket...


## Lecture 12/3/18
Lambda "no-name" functions
- has to do with the local binding of a function... where it is and how its used
- func/proc "lambda"

define normal function - "syntactic-sugar or implicit"
lambda is "explicit" functions
The benefit is through history...

(define x
  (lambda ()
    100))
define a variable named x as an anonymous function with zero arguments that returns 100

set?

map = mapping over a list with a new things

(if (and (>ba)(<b(starab)))
b if
a else

(+ 2 3) = pre-fix, returns 5
(2+3) = infix, returns 5

cond = switch statement

(cond
  ((= a 4) 6)       if a = 4, return 6
  ((= b 4)(+ 6 7 a))  if b = 4, return 6 + 7
  (else 25))

a = 2
b = 5
Every expression/function returns something...

cons <- pairs, not lists
(a.b) pair
(a b) function
'(a b) lists

(cons 1 2) -> (1.2)

car <- returns first element of a pairs
cdr <- returns rest of list (all but first element)
(cdr '(1))

(cons 'a(cons 'b (cons 'c '())))
(a b c)
quote(a b c)
'(a b c)

(define concatenate
  (lambda (lis1 lis2)
    (if (null> lis1)
      lis2
      (cons (car lis1)
        (concatenate (cdr lis1)
          lis2)))))

(a b) (c d)

with Lambda

(define (concatenate lis1 lis2)
  (if ...))

----
base: list null '()
      get first element, compare to c
      (eq? c (car lis)) keep Looking
        (cons (car lis)) recursive with rest of list (cdr list)

(define (deleteall atm lis)
  (cond
    ((null? lis)'()')         if lis is null, return nothing
    ((eq? atm (car lis))(deleteall atm (cdr lis)))    if equal to first element in list
    (else (cons (car lis)(deleteall atm (cdr lis))))))

(tally c '(a b c d c b c))
= 3


## Lecture 11/5/18
Abstract Data types
examples: ArrayList, LinkedList
"weapon against complexity"

## Lecture 10/29/18
Introduction to C++ and creating IntArray for Program 5

## Lecture 10/15/18
Use gfortran!!!!

Reading a program

user defined
- cardinal names: (counting one, two, three)
- ordinal names: (ranking first, second, third)
"what's the next thing" - must be absolutely obvious - then ordinal

5 types of arrays:
static
fixed-stack dynamic
stack dynamic
fixed-heap dynamic
heap dynamic

dynamic scoping vs ...

## Lecture 10/8/18
HW due WEDNESDAY
Prog 4 - FORTRAN (Recursion)
Midterm 2:
- 5, 6, & 7
- Pointers
- FORTRAN
- Arrays
- Subroutines/Function Calls
- Scope

Range of implicit variables: i, j, k, l, m, n
TRIM(Full) gets rid of trailing spaces
NIL character '\0'

CHARACTER(LEN=10) :: First, Family


## Lecture 10/3/18
History of Fortran and how to use it.

## Lecture 10/1/18
Special Words: Reserved vs Keywords
Keywords only special in certain context
Reserved word is a special word that cannot be used as a user - defined name
COBOL has 300 reserved words!!!

A variable is an abstraction of a memory cell
- name
- address
- value
- types
- lifetime
- scope

There are advantages and disadvantages to almost all types of programming.
Binding... when does that name get associated that memory address
Binding time is how long it takes to return
1.c 2.c 3.c
Compiler -> Linker -> Loader -> Run
Implicit vs Explicit Declaration
Loosely Typed vs Strongly Typed
Static vs Dynamic Variables
Elaborating -> Reserving memory on a stack


## Lecture 9/26/18
Array arithmetic
Reason why arrays start at 0 because multiplying and adding by 0's starts you are the right spot.
2x5 array... row major
header in c is an interface in Java
.#include <stdio.h>
.#include "p3.h" local file
Not allowed to include stdio.h in p3... because it's already in the header.

Prog 3 Things
Check if file exists.
Open file:
char (star)filename = argv[1]
FILE (star)fp

if (!(fp = fopen(filename, "r")))
  return 1;
fscanf(fp, "%d", &x)

Passing to Functions
int x --> &x
int (star)x --> x

malloc:
memory allocation
in terms of bytes
int (star)(star)a = malloc(2 x 3 x sizeof(int))

## Midterm Prep 9/19/18
Syntax: Rules of the Language
Semantics: Meaning of the Language
Lexeme: Each piece of a statement. Uses Lexical Analyzer to pull it apart.
Token: Type of lexeme. Syntax Analyzer figures things out.

https://tylermcginnis.com/imperative-vs-declarative-programming/
Imperative:
- Java, C
- Step by step on HOW
- Open door of fridge, search for drink, grab a drink
Declarative
- XML, HTML
- It's about WHAT you want
- I need a drink

https://www.reddit.com/r/learnprogramming/comments/71tbtm/whats_really_the_difference_between_procedural/
Procedural
- Use for Loops
- Occur in orders
- Can affect data structures (mutable)
Functional
- Use recursive functions.
- Happen all in one feel swoop
- Can't affect data structures

## Lecture 9/17/18
Program 2 Info:
You can use the index and fill the space with the marker.
Test if boundaries work.
Test Number of Arguments inputted.
No upper limit.

Some C Command line stuff:
Writing in ANSCII C
C usually requires 2 arguments in main, one is count, one is a character array pointer

## Lecture 9/10/18
grep is a good search tool in Unix
regular expressions ... aka ... pattern matching or unique/unambiguous commands.
using unix command line regex to figure out the remaining letters of a file
the tab button!

## Lecture 9/5/18
Reading will be covered in the next 2 weeks. Read them now though.
Ran into lots of unknowns.
- Functions must be placed before main... prototype?

Compile -> Object Code -> Linker -> Executable

Syntax - "rules" for the "form of the language"
Time flies like an arrow.
Fruit flies like a banana.
Semantics - "meaning"
Eval1: index = 2 * count + 1;
Eval2: index 2 * count + (17; There's a weird parenthesis.. unbalanced.
Eval3: i2 = 3 * thouc + 5;

Looking at Eval1 and 2:
index and id2 are identifiers along with count and thouc
we also have 2 constants in each

Looking at Eval1:
Its an expression...n the compiler asks does it make sense?
lexemes - token ...n its a string of tokens
First thing in expression is "i".
i can be many things... int, if, identifier...
Next is "in"... rules out an if statement
Next is "ind"... rules out data type int
All the way to "index ="... I now know "index" is first lexeme
Next token is the "=" because we say the 2 in "index = 2" so it's not an "=="
Broke are 16 characters into 8 tokens:
"index" "=" "2" * "count" "+" "1" ";" ... * with quotation means purple letters

Lets take a look  at Grammar:
<program> -> begin<stmt_list>end
begin and end are terminal... stmt_list or things inside <>, are non-terminal... needs to be broken down until we have reached nothing but terminals.
A <stmt_list> can be broken into a single
<stmt_list> -> <stmt> | <stmt>;<stmt_list>
<stmt> -> <var> = <expression>
<var> -> A | B | C ...these are terminal symbols
<expression> -> <var> + <var> | <var> - <var> | <var>

This is our whole program:
begin A = B + C; B=C end
Lets break it into pieces.
begin, A, =, B, +, C, ;, B, =, C, end
Then follow the grammar rules... IT WORKS!

Our next homework is posted for Chapter 3.

C doesn't have strings... only character arrays.
What is a pointer... a symbol that will contain an address
C a character is only 8 bits.
A pointer is a random memory address... a * is a random thing...
Be careful with global variables...

## Lecture 8/29/18
OS loaded on system...
OS are written in a languages.
Terminal are a shell on top of the OS.
I can run my own bash shells using a scripting language.

Unix Commands
pwd ~ present writing directory (not actually)
ps ~ processes, shows all processes
cat ~ copy at terminal (more also does page view)

VI is the editor Kraft recommends.
Navigation/Editor Modes.

System.out is an object that is an output buffer stream.
c is not an object orientated language...
...this means we have a procedural imperative language...

An object orientated language can have classes... they have data and options performed on that data.
C can't encapsulate anything... very error prone.
Easier to maintain programs.

Java (Java is Cross Platform):
.java
.class
then .exe

Linux has 3 standard streams:
standard in
standard out
standard error

## Lecture 8/27/18
Lost these notes because of Eclipse IDE complication. Very frustrating.
Here's what I remember:

Make sure you opt out of book.
Sign up for Rosie is required.

Don't need the book, but probably best to get it.
Couple different types of programming languages:
- Deterministic vs Imperative
- Procedural vs Function
- Scripts
- R?

Learned about all the different Hello Worlds
