#include<stdio.h>

int main()
{
long long int n,i;
scanf("%lld",&n);
if(n>5 && n<2000)
{
for(i=1;i<=n;i++)
{
if(i%2==0)
printf("%lld^%lld = %lld\n",i,i,i*i);
}
}

}
