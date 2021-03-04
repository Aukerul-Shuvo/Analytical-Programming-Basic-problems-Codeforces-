#include<stdio.h>

int main()
{
double c,d,e;


scanf("%lf",&c);

if(c>0.00 && c<=2000.00)
printf("Isento");
else if(c>=2000.01 && c<=3000.00)
{c=c-2000.00;
printf("R$ %.2lf", .08*c);}
else if(c>=3000.01 && c<=4500.00)
{
    c=c-2000.00-1000.00;
    d=1000.00*.08;
    c=c*.18;
    printf("R$ %.2lf",c+d);
}
else if(c>4500.00)
{
    c=c-2000.00-1000.00-1500.00;
    d=1000.00*.08;
    e=1500.0*.18;
    c=c*.28;
    printf("R$ %.2lf",c+d+e);
}
printf("\n");
return 0;
}
