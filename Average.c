/* Program to find the average of the numbers. */
#include <stdio.h>

int main(){
    int n, count = 0;
    float x, average, sum = 0;

    printf("How many numbers?");
    scanf("%d", &n);

    while(count < n){
        printf("x = ");
        scanf("%f", &x);
        sum += x;
        count++;
    }
    average = sum / n;
    printf("Average is %f", average);
}