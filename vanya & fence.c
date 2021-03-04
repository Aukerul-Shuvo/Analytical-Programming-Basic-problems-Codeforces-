#include<stdio.h>
int main()
{
int n,h,sum=0,i;
scanf("%d%d",&n,&h);

int a[n];


for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if((n>=1) && (n<=1000) && (h>=1) && (h<=1000) && (a[i]>=1) && (a[i]<=(2*h)))
{

if(a[i]<=h)
sum=sum+1;

else
sum=sum+2;
}
}
printf("%d\n",sum);
return 0;

}
