/*Program to pass array to function and modify its elements*/

#include <stdio.h>

void modify(int a[]);

int main(){
    int count, a[3];
    printf("\n From main, before calling the function: \n");

    for(count = 0; count <= 2; ++count){
        a[count] = count+1;
        printf("a[%d] = %d\n", count, a[count]);
    }

    modify(a);

    printf("\n From main, after calling the function: \n");
    for(count = 0; count <= 2; ++ count){
        printf("a[%d] = %d\n", count, a[count]);
    }
}

void modify(int a[]){
    int count;
    printf("\n FRom the function after modifying th evalues: \n");
    for(count = 0; count <= 2; ++count){
        a[count] = -9;
        printf("a[%d] = %d\n", count, a[count]);
    }
}