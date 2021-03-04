#include <stdio.h>

int main()
{
    int a[10],i;
    int ans=0;
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    ans+=a[i];
    }
    if(ans==0)
    {
        printf("-1\n");
        return 0;
    }
    if(ans%5==0)
    printf("%d\n",ans/5);
    else
    printf("-1\n");
    return 0;
}
