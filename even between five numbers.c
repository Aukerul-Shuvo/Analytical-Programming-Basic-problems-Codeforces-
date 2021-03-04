#include<stdio.h>

int main()
{
int a[5],i,j=0;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
j++;
}
printf("%d valores pares\n",j);
return 0;
}
