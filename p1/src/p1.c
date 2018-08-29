#include <stdio.h>

int main(void){
    //Instantiated Varibles
    double costEnd = 0.00;
    double costSide = 0.00;
    double vol = 0.00;
    double circum = 0.00;
    double costMin = 0.00;
    double costAdd= 0.00;
    double costE = 0.00;
    double costS = 0.00;
    double dAtMin = 0.00;
    double hAtMin = 0.00;

    //Constants And Adjustable Variables
    double pi = 3.14159265358979323846;
    double diaStart = 0.001;
    double diaInc = 0.001;
    double h = 1.00;

    //Input
    printf("\nProgram #1, csscxxxx, Karl Parks\n");
    printf("Enter the cost of end material per square cm:  ");
    scanf("%lf", &costEnd);
    printf("Enter the cost of the side material per square cm: ");
    scanf("%lf", &costSide);
    printf("Enter the desired volume in milliliters: ");
    scanf("%lf", &vol);

    //Calcs Brute Force
    printf("\n\nBrute Force Answer:\n");
    for (double dia = diaStart; h > 0.001; dia = dia + diaInc) {
      h = (vol*4.00)/((dia*dia) * pi);
      //printf("\nHeight: %4.5f",h);
      costE = ((pi/4.00)*(dia*dia))*costEnd;
      circum = pi*dia;
      costS = (circum * h)*costSide;
      //Two Ends!!!!
      costAdd = costE + costE + costS;
      if (costMin == 0.00) {
        costMin = costAdd + 0.01;
      }
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

    return 0;
}
