/*Program to find largest of three numbers.*/

#include <stdio.h>

int maximum(int x, int y){
    int z;
    z = (x >= y) ? x: y;
    return(z);
}

int main(){
    int a, b, c, d;
    printf("Enter three digits you want to compare: ");
    scanf("%d %d %d", &a, &b, &c);
    d = maximum(a, b);
    printf("Maximum is %d\n", maximum(d, c));
}