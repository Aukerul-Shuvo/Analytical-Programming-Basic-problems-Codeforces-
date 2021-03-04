#include<stdio.h>

int main()
{
long long int n;
scanf("%lld",&n);

long long a[n],i;
if(n>=1 && n<10000)
{
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
}
for(i=0;i<n;i++)
{
        if(a[i]==0)
        {
            printf("NULL\n");
            continue;
        }
    if(a[i]%2!=0)
    printf("ODD ");
    else if(a[i]%2==0)
    printf("EVEN ");

    if(a[i]>0)
    printf("POSITIVE\n");
    else if(a[i]<0)
    printf("NEGATIVE\n");

}

return 0;
}
