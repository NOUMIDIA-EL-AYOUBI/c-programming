#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void * al_memchr(char *S,char c,unsigned n)
{
       

        for(unsigned i=0;i<n;i++)
        {
            if (*(S+i)==c)
                return S+i;
        }
        return NULL;   
}



void* al_memset(void* s, int x, unsigned n)
{
    char* p = (char *)s;
    for(int i = 0; i < n; i++)
    {
        *(p+i) = x;
    }
    return p;
}




void* al_memcpy(void *d, void * s, unsigned n)
{
    char* d1 = (char *) d;
    char* s1 = (char *) s;
    for(int i=0;i<n;i++)
        d1[i] = s1[i];
    return d1;
}



void* al_memmove(void* dest, const void* source, unsigned n)
{
    char* d = dest;
    const char* s= source;
    for (int  i = 0; i < n; i++)
    {
        *(d+n-i) = *(s+n-i);
    }
    return dest ;
}



char* al_strdup(const char* s)
{
    char* s1 = (char*)malloc(sizeof(*s)*strlen(s));
    for(int i = 0; i < sizeof(*s)*strlen(s); i++)
    {
        *(s1+i) = *(s+i);
    }
    return s1;
}


void sort(int* x, unsigned n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            if(*(x+i) > *(x+i+1))
            {
                int z = *(x+i+1);
                *(x+i+1) = *(x+i);
                *(x+i) = z;
            }
        }
    }
}
