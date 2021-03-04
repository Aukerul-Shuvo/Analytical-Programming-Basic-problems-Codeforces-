#include<stdio.h>

int main()
{
int  x,n500, n100, n50, n20, n10, n5, n2, n1, a,b,c,d,e,f,j,k,l,m,n,o,p,q,r,z;
float y,N;
scanf("%f",&N);

if(N>0 && N< 1000000.00)
{


n100=N/100;
b=(int) N%100;

n50=b/50;
c=b%50;

n20=c/20;
d=c%20;

n10=d/10;
e=d%10;

n5=e/5;
f=e%5;

n2=f/2;
a=f%2;

n1=a/1;


}
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n", n100);
printf("%d nota(s) de R$ 50.00\n", n50);
printf("%d nota(s) de R$ 20.00\n", n20);
printf("%d nota(s) de R$ 10.00\n",n10);
printf("%d nota(s) de R$ 5.00\n", n5);
printf("%d nota(s) de R$ 2.00\n", n2);


z=((n100*100)+(n50*50)+(n20*20)+(n10*10)+(n5*5)+(n2*2)+(n1*1));

y=N-z;

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
printf("%d nota(s) de R$ 1,00\n", n1);
printf("%d moeda(s) de R$ 0.50\n", j);
printf("%d moeda(s) de R$ 0.25\n", l);
printf("%d moeda(s) de R$ 0.10\n", n);
printf("%d moeda(s) de R$ 0.05\n", p);
printf("%d moeda(s) de R$ 0.01\n", r);
printf("%d,%f,%f,%d",o,x,y,z);



printf("\n");
return 0;
}

