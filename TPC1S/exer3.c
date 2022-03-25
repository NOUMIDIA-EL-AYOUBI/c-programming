#include <stdio.h>

int main()
{
int   i =  8;
int   j =  5;
float x =  0.005f;
float y = -0.01f;
char  c = 'c';
char  d = 'd'; 
float r1 ;
float r2;
float r3;
float r4 ;
float r5;
float r6;
float r7 ;
float r8;
float r9;
float r10;



r1=(3*i - 2*j)%(2*d - c);
r2= 2*((i/5) + (4*(j-3))%(i + j - 2));
r3= i <= j;
r4= j != 6;
r5= c == 99;
r6=5*(i + j) > 'c';
r7=(i > 0) && (j < 5);
r8=(i > 0) || (j < 5);
r9=(x > y) && (i > 0) || (j < 5);
r10=(x > y) && (i > 0) && (j < 5);
printf("%f  %f  %f  %f  %f  %f  %F  %f  %f  %f  ", r1,r2,r3,r4,r5,r6,r7,r8,r9,r10);
printf("%d",2*d-c);
}
