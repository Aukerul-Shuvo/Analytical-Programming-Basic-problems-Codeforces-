#include<stdio.h>

int main()
{
float a[100],avg,sum=0.0;
int i,j=0;
for(i=0;i<100;i++)
{
scanf("%f",&a[i]);
if(a[i]>=0.0 && a[i]<=10.0)
{
j=j+1;
sum=sum+a[i];
if(j==2)
{
avg=sum/2;
printf("media = %.2f\n",avg);
break;
}

}
else
printf("nota invalida\n");
}
return 0;
}
