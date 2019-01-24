#lang slideshow
;Karl Parks cssc0548
;CS 320 Fall 2018: Extra Credit Scheme Program
;29.99 Points 
;12/15/2018

(require 2htdp/image)
(define (lasercannon)
  (vc-append
   (right-triangle 10 35 "solid" "white") ;spacer
   (rectangle 10 50 "outline" "black")
   (rectangle 10 5  "solid" "black")
   (rectangle 10 3  "outline" "black")
   (rectangle 3 60  "outline" "black")
   (rectangle 8 5  "outline" "black")
   (rectangle 2 15  "solid" "black")
   (rectangle 2 25  "solid" "white")
   (rectangle 2 15  "solid" "red")
   (rectangle 2 25  "solid" "white")
   (rectangle 2 15  "solid" "red")
   (rectangle 2 25  "solid" "white")
   (rectangle 2 15  "solid" "red")))
(define (rwing)
  (vc-append
   (flip-horizontal (right-triangle 100 30 "solid" "white")) ;spacer
   (flip-horizontal (right-triangle 100 20 "outline" "black"))
   (flip-horizontal (rectangle 100 40 "outline" "black"))))
(define (lwing)
  (vc-append
   (right-triangle 100 30 "solid" "white") ;spacer
   (right-triangle 100 20 "outline" "black")
   (rectangle 100 40 "outline" "black")))
(define (engine)
  (vc-append
   (hc-append
    (flip-horizontal (right-triangle 3 10 "solid" "black"))
    (rectangle 3 10  "outline" "black")
    (rectangle 3 10  "outline" "black")
    (rectangle 3 10  "outline" "black")
    (rectangle 3 10  "outline" "black")
    (right-triangle 3 10 "solid" "black"))
   (rectangle 15 5  "outline" "black")
   (rectangle 13 30  "outline" "black")
   (rectangle 13 5  "solid" "black")
   (rectangle 20 50  "outline" "black")
   (rectangle 20 7  "outline" "orange")))
(define (cockpit)
  (cc-superimpose
   (rectangle 36 40  "outline" "black")
   (rectangle 20 40  "solid" "black")))
(define (body)
  (vc-append
   (rectangle 50 20 "solid" "white") ;spacer
   (hc-append
    (flip-horizontal (right-triangle 10 10 "outline" "black"))
    (rectangle 30 10  "outline" "black")
    (right-triangle 10 10 "outline" "black"))
   (cbl-superimpose (cc-superimpose (rectangle 50 100 "outline" "black") (rectangle 30 100 "solid" "black")) (circle 8 "solid" "blue"))
   (hc-append
    (flip-horizontal (flip-vertical(right-triangle 7 10 "outline" "black")))
    (rectangle 36 10  "outline" "black")
    (flip-vertical (right-triangle 7 10 "outline" "black")))
   (cockpit)
   (hc-append
    (flip-horizontal (flip-vertical(right-triangle 8 120 "outline" "orange")))
    (rectangle 20 120  "outline" "black")
    (flip-vertical (right-triangle 8 120 "outline" "orange")))
   (hc-append
    (flip-horizontal (flip-vertical(right-triangle 5 30 "outline" "black")))
    (rectangle 10 30  "solid" "black")
    (flip-vertical (right-triangle 5 30 "outline" "black")))))
(define (fullLwing)
  (ht-append (engine) (ht-append (lwing) (lasercannon))))
(define (fullRwing)
  (ht-append (ht-append (lasercannon) (rwing)) (engine)))
(define (x-wing)
  (ht-append (fullRwing) (body) (fullLwing)))