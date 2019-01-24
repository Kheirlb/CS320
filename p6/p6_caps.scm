; p6.scm
; A prototype for program 6 in scheme
;
;
;
;
;
; Edit this file to add your documentation and function definitions.
; Leave the rest of this file unchanged.
; To run this file, you would start scheme at edoras command line prompt:
; scheme --load p6.scm, where the file is in the current directory
; and then in scheme type the load command (from the '%' prompt):
;(load "p6.scm")
;
; Defined LISTS for use with testing your functions.
(DEFINE list0 (LIST 'j 'k 'l 'm 'n 'o 'j) )
(DEFINE list1 (LIST 'a 'b 'c 'd 'e 'f 'g) )
(DEFINE list2 (LIST 's 't 'u 'v 'w 'x 'y 'z) )
(DEFINE list3 (LIST 'j 'k 'l 'm 'l 'k 'j) )
(DEFINE list4 (LIST 'n 'o 'p 'q 'q 'p 'o 'n) )
(DEFINE list5 '((a b) c (d e d) c (a b)) )
(DEFINE list6 '((h i) (j k) l (m n)) ) 
(DEFINE list7 '(f (a b) c (d e d) (b a) f) )
;
; Here is a typical function definition from Sebesta Ch. 15
(DEFINE (adder lis)
  (COND
    ((NULL? lis) 0)
	(ELSE (+ (CAR lis) (adder (CDR lis))))
))
; The above five lines are the sort of definition you would need to add to
; this file if asked to define an ADDER function.
; Uncomment and complete the following four definitions. At least have ODDS
; so the program can be tested.

; (DEFINE (odds ...

; (DEFINE (evenrev ...

; (DEFINE (penultimate ...

; (DEFINE (palindrome ...

