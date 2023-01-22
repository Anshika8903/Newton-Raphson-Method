#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.05
#define f(x) (x*x*x-x-4)
#define df(x) (3*x*x-1)
void main()
{
    float a,b,fa,fb,dfa,error;
    int i=1;
    printf("enter the value of a: ");
    scanf("%f",&a);
    do
    {
        fa=f(a);
        dfa=df(a);
        b=a-(fa/dfa);
        fb=f(b);
        a=b;

        printf("\n iteration:%d",i);
        printf("\t\troot=%0.3f",b);
        printf("\t\tfunction value:%0.3f",fb);

        i++;

    }while(fabs(fb)>e);
    return 0;
}

