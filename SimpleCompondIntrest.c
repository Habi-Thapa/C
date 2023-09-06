/*Program to calculate the simple compound Interest*/

#include <stdio.h>
#include <math.h>

int main(){
    float P, T, R, A;
    
    printf("\nEnter the principal amount: ");
    scanf("%f", &P);

    printf("\nEnter the time span you want to deposit: ");
    scanf("%f", &T);

    printf("\nEnter the interest rate: ");
    scanf("%f", &R);

    A = P * pow((1+R/100), T);
    printf("\nThe compounded amount after %-.2f years is: %-.2f\n\n", T, A);
}