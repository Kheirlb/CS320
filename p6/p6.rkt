#lang scheme
; Program 6: p6.scm
; Creates multiple functions to test analyze the order of lists.
; CS108-2
; 12/12/18
; @author Karl Parks cssc0548
;
; Defined LISTS for use with testing functions.
(define list0 (list 'j 'k 'l 'm 'n 'o 'j) )
(define list1 (list 'a 'b 'c 'd 'e 'f 'g) )
(define list2 (list 's 't 'u 'v 'w 'x 'y 'z) )
(define list3 (list 'j 'k 'l 'm 'l 'k 'j) )
(define list4 (list 'n 'o 'p 'q 'q 'p 'o 'n) )
(define list5 '((a b) c (d e d) c (a b)) )
(define list6 '((h i) (j k) l (m n)) ) 
(define list7 '(f (a b) c (d e d) (b a) f) )

;odds function: will create a list of only the odd atms
(define (odds lis)
  (cond
    ((not (list? lis))(print "USAGE: (odds {list}")) ;type checking
    ((null? lis) '())
    ;next line saves the first letter and then recursively analyzes the remainder of the list
    ;cut two places past the first letter (the next odd atm)
    ((>= (length lis) 2) (cons (car lis) (odds (cdr (cdr lis)))))
    ((= (length lis) 1) (cons (car lis) (cdr lis)))
    (else (cdr lis))))

;evenrev function: will create a reversed list of only the even atms
(define (evenrev lis)
  (cond
    ((not (list? lis))(print "USAGE: (evenrev {list}"))
    ((null? lis) '())
    ;next line skip first atm and then uses the odds function to find remainding evens
    ((>= (length lis) 2) (reverse (cons (car (cdr lis)) (odds (cdr (cdr (cdr lis)))))))
    ((= (length lis) 1) '())
    (else (cdr lis))))

;penultimate function: will return the second to last atm as a list
(define (penultimate lis)
  (cond
    ((not (list? lis))(print "USAGE: (penultimate {list}"))
    ((null? lis) '())
    ((> (length lis) 2) (penultimate (cdr lis)))
    ((= (length lis) 2) (list (car lis)))
    ((= (length lis) 1) '())
    (else (cdr lis))))

;palindrome function: will checck if a list is a palindrome
(define (palindrome lis)
  (cond
    ((not (list? lis))(print "USAGE: (palindrome {list}"))
    (else (equal? lis (reverse lis))))) ;reverse and checks if equal in reverse

