#include<stdio.h>
#include<math.h>
float stnd(float a[])
{
int j,k;
float sum=0.0,ved=0.0,avg,result;

for(j=0;j<5;j++)
sum=sum+a[j];

avg=sum/5;

for(k=0; k<5;k++)
    ved=ved+((a[j]-avg)*(a[j]-avg));

ved=ved/5;

result= sqrt(ved);



return result;
}

int main()
{
int n,i;
float a[5],x;

for(i=0;i<5;i++)
{
    scanf("%f",&a[i]);
}

x=stnd(a);

printf("%.3f\n",x);
}
