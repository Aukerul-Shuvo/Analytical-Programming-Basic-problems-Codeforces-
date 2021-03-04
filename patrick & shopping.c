#include<stdio.h>

int main()
{
long long int d1,d2,d3,D;

scanf("%lld %lld %lld",&d1,&d2,&d3);

if((d1+d2)==d3)
printf("%lld",d1+d2+d3);

else if((d1+d2)<d3)
{D=(2*d1)+(2*d2);
printf("%lld",D);
}

else if((d1+d2)>d3)
{
if((d1+d3)<d2)
{
    D=(2*d1)+(2*d3);
    printf("%lld",D);}
   else if((d2+d3)<d1)
{
    D=(2*d2)+(2*d3);
    printf("%lld",D);}
   else
printf("%lld",d1+d2+d3);
}
return 0;
}
