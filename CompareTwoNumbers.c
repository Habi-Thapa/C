/*Program to compare two numbers and find if one number is greater, lower or equal to the other number.*/
#include <stdio.h>

int main(){
    int first, second;
    printf("Please enter the two numbers: \n");
    scanf("%d %d", &first, &second);

    if (first > second){
        printf("%d is greater than %d", first, second);
    }
    else if (second > first){
        printf("%d is greater than %d", second, first);
    }
    else  printf("%d is equal to %d\n\n", second, first);
}