#include<stdio.h>
#include<math.h>

int main()
{
int n,a,b;
scanf("%d",&n);

if(n==1)
printf("1\n");

else if(n%2==0)
{
a=n/2;
b=pow(2,a);
printf("%d\n",b);

}
else
{
a=n/2;
b=pow(2,a)+a;
printf("%d\n",b);
}
return 0;
}
