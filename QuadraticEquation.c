/*Program to Solve the Root of Quadratic Equation*/
#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, root, x1, x2;
    printf("Enter the value of a, b, c respectively: \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    root = sqrt(b * b - 4 * a * c);
    x1 = (-b + root) / (2 * a);
    x2 = (-b - root) / (2 * a);
    printf("The value of x1 and x2 are: %f %f \n", x1, x2);
}