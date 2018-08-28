#include <stdio.h>

int main(void){
    double costEnd = 0;
    double costSide = 0;
    double vol = 0;
    printf("Program #1, csscxxxx, Karl Parks\n");
    printf("Enter the cost of end material per square cm:  ");
    scanf("%lf", &costEnd);
    printf("Enter the cost of the side material per square cm: ");
    scanf("%lf", &costSide);
    printf("Enter the desired volume in milliliters: ");
    scanf("%lf", &vol);
    printf("%4.3g",costEnd);
    printf("%4.3g",costSide);
    printf("%4.3g",vol);
    return 0;
}
