#include <stdio.h>
 // Exercise 1:
//- Write a C program that reads two real numbers, and then displays their product, with a precision of three decimal places. 
int main()
{
    float a;
    float b;
    float c;
    scanf("%f",&a);
    scanf("%f",&b);
    c=a*b;
    printf("%.3f",c);
}

