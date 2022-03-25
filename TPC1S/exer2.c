#include <stdio.h>

/* 
    Write a C program that allows you to swap the content of two integer variables by passing through a third auxiliary variable.
    Display the two variables before and after permutation.
*/

int main(int x, int y)
{
    
    int z;
    scanf("%d",&x);
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("newx=%d , newy=%d ", x,y);
   
}
