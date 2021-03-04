#include<stdio.h>
int main()
{
int i,n;
long long int a[25];



a[0]=0;
a[1]=1;
printf("Here are the fibonacci numbers(from 0-10000):\n%lld %lld",a[0],a[1]);
for(i=2; ;i++)
{
    a[i]=a[i-1]+a[i-2];
    if(a[i]>10000)
        break;
    printf(" %lld",a[i]);

}


return 0;
}
