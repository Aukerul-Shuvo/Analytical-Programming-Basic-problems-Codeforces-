#include<stdio.h>

int main()
{
int m,i=3,j=5, *p,*q,*r;

p=&i;
q=&j;

m=((7*(*p)/((*q)+7)));

printf("%d\n",m);
return 0;
}
