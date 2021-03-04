#include<stdio.h>

int main()
{
float y;
int x,j,k,l,m,n,o,p,q,r;
scanf("%f", &y);
x=y*100;

j=x/50;
k=x%50;
l=k/25;
m=k%25;
n=m/10;
o=m%10;
p=o/5;
q=o%5;
r=q/1;
printf("MOEDAS:\n");

printf("%d moeda(s) de R$ 0.50\n", j);
printf("%d moeda(s) de R$ 0.25\n", l);
printf("%d moeda(s) de R$ 0.10\n", n);
printf("%d moeda(s) de R$ 0.05\n", p);
printf("%d moeda(s) de R$ 0.01\n", q);


return 0;
}
