#include<stdio.h>

int main()

{
int N, one_hundred,fifty,twenty,ten,five,two,one,p,q,s,t,u,v;
scanf("%d", &N);


one_hundred=N/100;
printf("%d nota(s) de R$ 100,00\n", one_hundred);
p=one_hundred%100;
fifty=p/50;
printf("%d nota(s) de R$ 50,00\n", fifty);
q=p%50;
twenty=q/20;
printf("%d nota(s) de R$ 20,00\n", twenty);

s=q%20;
ten=s/10;
printf("%d nota(s) de R$ 10,00\n", ten);

t=s%10;
five=t/5;
printf("%d nota(s) de R$ 5,00\n", five);

u=t%5;
two=u/2;
printf("%d nota(s) de R$ 5,00\n", two);

v=u%2;
one=v/1;
printf("%d nota(s) de R$ 1,00\n", one);

printf("\n");

return 0;
}
