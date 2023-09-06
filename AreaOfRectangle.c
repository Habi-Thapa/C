/*Program to Calculate the Area of Rectangle*/
#include <stdio.h>
int main(){
    float base, height, area;
    printf("Base of the Rectangle: ?");
    scanf("%f", &base);
    printf("Height of the Rectangle: ?");
    scanf("%f", &height);
    area = base * height;
    printf("Area of the rectangle is %f\n", area);
}