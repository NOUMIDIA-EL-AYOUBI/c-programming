#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
    double r;
    double im;
} complex ;

complex Sum(complex a,complex b){
      
        complex s;
        s.r = a.r + b.r;
        s.im = a.im + b.im;
        return s;  
}

complex Mul(complex a, complex b){
        
        complex m;
        m.r = a.r * b.r - a.im * b.im;
        m.im = a.r * b.im + a.im * b.r;
        return m;         
}

complex Divi(complex a, complex b){
    
        complex d;
        if (b.r !=0 && b.im !=0)
    {
        d.r = (a.r * b.r + a.im * b.im)/ ( pow(b.r, 2) + pow(b.im, 2));
        d.im = (-a.r * b.im + a.im * b.r)/( pow(b.r, 2) + pow(b.im, 2));

        return d;
    }
        else 
        printf("impossible d'effectuer la division");
   
}

void saisie(complex * c)
{
    printf("saisir les parties reelles puis immaginaires");
    scanf("%lf",&c->r);
    scanf("%lf",&c->im);

}


void affichage(complex c)
{
    printf("%lf + i(%lf) \n",c.r,c.im);
}

int main()
{
    complex s , m , d ,a ,b;
    saisie(&a);
    saisie(&b);
    s = Sum(a,b);
    m = Mul(a,b);
    d = Divi (a,b);
    affichage(s);
    affichage(m);
    affichage(d);  
}


