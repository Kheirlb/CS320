/**
 *  Program 1
 *  Calculates Optimum Can Size Based on Input of Desired Volumn and Current Material Costs.
 *  CS320-1
 *  8/29/18
 *  @author  Karl Parks cssc0548
 */

#include <stdio.h>
#include <math.h>
//location on karl's computer: cd Documents\GitHub\CS320\p1\src
//run code using: gcc -lm -Wall -o p1 p1.c
//Tranfer Files using Putty: pscp C:\Users\KarlP\Documents\GitHub\CS320\p1\src\p1.c
//cssc0548@edoras.sdsu.edu:/home/cs/pkraft/cssc0548/test/prog1test

int main(void){
    //Instantiated Varibles
    double costEndMat = 0.00;
    double costSideMat = 0.00;
    double vol = 0.00;
    double circum = 0.00;
    double costMin = 0.00;
    double costAdd= 0.00;
    double costE = 0.00;
    double costS = 0.00;
    double dAtMin = 0.00;
    double hAtMin = 0.00;
    double dia = 0.00;

    //Constants And Adjustable Variables
    double pi = 3.14159265358979323846;
    double precisionAdj = 0.0001; //adjust precision here.
    double diaStart = precisionAdj;
    double diaInc = precisionAdj;
    double h = 1.00;

    //Input
    printf("\nProgram #1, cssc0548, Karl Parks\n");
    printf("Enter the cost of end material per square cm:  ");
    scanf("%lf", &costEndMat);
    printf("Enter the cost of the side material per square cm: ");
    scanf("%lf", &costSideMat);
    printf("Enter the desired volume in milliliters: ");
    scanf("%lf", &vol);

    //Calcs Brute Force
    printf("\n\nBrute Force Answer:\n");
    for (dia = diaStart; h > diaStart; dia = dia + diaInc) {
      //assume diamater and calc height
      h = (vol*4.00)/((dia*dia) * pi);
      //calculate the cost of an End
      costE = ((pi/4.00)*(dia*dia))*costEndMat;
      //calculate circumference and cost of the rectangular side
      circum = pi*dia;
      costS = (circum * h)*costSideMat;
      //Remember, there are TWO Ends to a Can!!!!
      costAdd = costE + costE + costS;
      //This starts costMin at the right spot so the following if statement does not fail.
      if (costMin == 0.00) {
        costMin = costAdd + precisionAdj;
      }
      //Compares costMin to the most recently added cost.
      if (costAdd < costMin) {
        costMin = costAdd;
        dAtMin = dia;
        hAtMin = h;
      }
    }
    //Output for Brute
    printf("\nCan Cost: %4.2f",costMin);
    printf("\nDiameter: %4.2f",dAtMin);
    printf("\nHeight: %4.2f",hAtMin);
    printf("\n\n=========================");

    //Calcs Calculus
    printf("\n\nCalculus Answer:\n");
    //Calculus optimized equation found by setting derivate to zero.
    double dia4Calc = cbrt((vol*4.00*costSideMat)/(costEndMat*pi));
    //Remaining Calcs
    h = (vol*4.00)/((dia4Calc*dia4Calc)*pi);
    costE = ((pi/4.00)*(dia4Calc*dia4Calc))*costEndMat;
    circum = pi*dia4Calc;
    costS = (circum * h)*costSideMat;
    //Two Ends!!!!
    costAdd = costE + costE + costS;
    //Output for Calculus
    printf("\nCan Cost: %4.2f",costAdd);
    printf("\nDiameter: %4.2f",dia4Calc);
    printf("\nHeight: %4.2f\n",h);

    return 0;
}
