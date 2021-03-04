#include<stdio.h>
int main()
{
int a[5],i,temp;

for(i=0;i<5;i++)
{
scanf("%d",&a[i]);

if(i>=1)
{
if(a[i]>a[i-1])
temp=i;

}
}
if(a[0]>a[temp])
    printf("%d\n1\n",a[0]);
else
printf("%d\n",temp+1);
return 0;
}
