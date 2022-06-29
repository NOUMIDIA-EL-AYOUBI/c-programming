#include <stdio.h>
#include <string.h>

//1.

char* A = "Hello";

//2.

char B[5];
B[0] = "W";
B[1] = "o";
B[2] = "r";
B[3] = "l";
B[4] = "d";

//3.

char* C;
int i;
for(i = 0; i < 5; i++) 
{
    C[i] = A[i];
}
C[i] = " ";
for(i = 0; i < 5; i++) 
{
    C[5+i] = B[i];
}
C[5+i] = "\0";

//4.

char* D = strcat(strcat(A, " "), B);

//5.

char* E = strcpy(E, A);
E = strcpy(E[5], B);

//6.

/*
char s1[ ] = "Hello";  
char s2[ ] = "hello";  
char s3[ ] = {'h', 'e', 'l' , 'l', '\0'}
 strcmp(s1, s2) = -1;
 strcmp(s2, s1) = 1;
 strcmp(s1, s3) = 1;
 strcmp(s2, s3) = 1;
*/

//7.

char* Al_gets(char *strPtr)
{
    int i = 0;
    int g = getchar();
    while(g != '\0')
    {
        strPtr[i] = (char)g;
        g = getchar();
        i++;
    }
    return strPtr;
}

//8.

char* Al_puts(char *strPtr)
{
    int i = 0;
    while(strPtr[i] != '\0')
    {
        putchar(strPtr[i]);
        i++;
    }
}

//9.

void program(){
    char s[10];
    char comp[] = "!TeStInG_"
    gets(s);
    if(strcmp(s, comp) == 0) 
            puts("success");
    else puts("failed");
}
