#include<stdio.h>

int main()
{
int a,b,j,temp,sum=0;
scanf("%d%d",&a,&b);

if(b>a)
{
temp=a;
a=b;
b=temp;
}
for(j=b+1;j<a;j++)
{
if(j%2!=0)
sum=sum+j;
}
printf("%d\n",sum);
return 0;
}
