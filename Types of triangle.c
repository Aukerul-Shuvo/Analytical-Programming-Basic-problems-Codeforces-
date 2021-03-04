#include<stdio.h>
int main()
{
double a,b,c,A,B,C;

scanf("%lf%lf%lf",&a,&b,&c);
if(a>0.0 && b>0.0 && c>0.0)
{
    if(a==b)
    {
        A=a;
        B=b;
        C=c;
    }
        if(b==c)
        {
            A=b;
            B=c;
            C=a;
        }
    if(c==a)
    {
        A=a;
        B=c;
        C=b;
    }
    if(a==b==c)
    {
        A=a;
        B=b;
        C=c;
    }

if(a>c)
{
if(a>b)
{
A=a;
if(b>c)
{
B=b;
C=c;
}
else
{
B=c;
C=b;
}
}
}
if(b>c)
{
if(b>a)
{
A=b;
if(c>a)
{
B=c;
C=a;
}
else{
B=a;
C=c;
}
}
}
if(c>b)
{
    if(c>a)
    {
A=c;
if(a>b)
{
B=a;
C=b;
}
else
{
B=b;
C=a;
}
}
}

}

if(A>=(B+C))
    printf("NAO FORMA TRIANGULO\n");
if((A*A)==((B*B)+(C*C)))
    printf("TRIANGULO RETANGULO\n");
if((A*A)>((B*B)+(C*C)))
printf("TRIANGULO OBTUSANGULO\n");

if((A*A)<((B*B)+(C*C)))
    printf("TRIANGULO ACUTANGULO\n");
if((A==B) && (B==C) && (C==A))
    printf("TRIANGULO EQUILATERO\n");
if(((A==B) && (C!=A)&& (B!=C)) || ((B==C) && (A!=B) && (C!=A)) || ((C==A) && (B!=C) &&(A!=C)))
    printf("TRIANGULO ISOSCELES\n");

return 0;
}
