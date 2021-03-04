#include<stdio.h>

int main()
{
long long int n,i,j,x=1;
long long int sum=0;
scanf("%lld",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
    x=x*2;
}
sum=sum+x;
x=1;
}
printf("%lld\n",sum);
return 0;
}
