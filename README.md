# CS320
My personal cloud of class notes and scripts.

Most present lecture at the top.

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
