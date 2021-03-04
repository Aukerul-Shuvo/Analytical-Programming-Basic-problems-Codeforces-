#include<stdio.h>
#include<math.h>

int main()
{
   long long int n,sum=0,count=0,r;
   scanf("%lld",&n);
   int i,j;


   for(i=0;i<n;i++)
   {
       scanf("%lld",&count);
       sum=sum+count;
       }
    r=sum/4;
    if(sum%4==0)
        printf("%lld",r);
    else if((sum%4)!=0)
        printf("%lld",r+1);

    return 0;

}
