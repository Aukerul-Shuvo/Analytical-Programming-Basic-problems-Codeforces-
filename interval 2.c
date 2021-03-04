#include<stdio.h>
int main()
{
long long int n,i,j=0,k=0;
scanf("%lld",&n);
long long int a[n];

for(i=0;i<n;i++)
{
scanf("%lld",&a[i]);
if(a[i]>=10 && a[i]<=20)
j++;
else
k++;
}
printf("%lld in\n%lld out\n",j,k);
return 0;
}
