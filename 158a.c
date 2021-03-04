#include<stdio.h>

int main()
{
    int i,n,k,count=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0 && a[i]>=a[k-1])
        {

            count++;
        }

    }
    printf("%d\n",count);
    return 0;
}
