#include<stdio.h>

int main()
{
double a[6],sum=0;
int i,j=0;
for(i=0;i<6;i++)
{
scanf("%lf",&a[i]);
if(a[i]>0.0){
j++;
sum=sum+a[i];}
}
printf("%d valores positivos\n",j);
j=(double)j;
printf("%.1lf\n", sum/j);
return 0;
}
