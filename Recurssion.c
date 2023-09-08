/*Calculate the factorial of an integer quantity using recursion*/
#include <stdio.h>

// int factorial(int n){
//     int a = 1, i = 1;
//     for (i = 1; i <= n; i++){
//         a *= i;
//     }
//     return a;
// }

int factorial(int n){
    if(n <=1) return 1;
    else return (n * factorial(n-1));
}

int main(){
    int n;
    printf("n =");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
}