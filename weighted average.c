#include<stdio.h>

int main()
{
int t,i,j,k;
double a,b,c;
scanf("%d",&t);
double x[t];
for(i=0;i<t;i++)
{

        scanf("%lf%lf%lf",&a,&b,&c);
        x[i]=((a*2)+(b*3)+(c*5))/10;

}
for(k=0;k<t;k++)
printf("%.1lf\n",x[k]);
return 0;
}
