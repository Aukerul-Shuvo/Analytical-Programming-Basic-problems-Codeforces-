#include<stdio.h>
int main()
{
long long int n,m,a,x,y;
scanf("%lld%lld%lld",&n,&m,&a);
if((n>=1) && (m>=1))
{
x=(n/a);
printf("%lld\n",x);
y=m/a;
printf("%lld\n",y);
if((n%a)!=0)
{x=x+1;}
if((m%a)!=0)
{y=y+1;}
printf("%lld",(x*y));
}
return 0;
}
