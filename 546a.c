#include<stdio.h>

int main()
{
   unsigned long long int k,n,w,sum=0;
    int i;
   scanf("%lld %lld %lld",&k,&n,&w);

   for(i=1;i<=w;i++)
   {
       sum=sum+(i*k);
   }
    if((sum>n))
   {
        printf("%lld",sum-n);
   }
    else
        printf("0");
}
