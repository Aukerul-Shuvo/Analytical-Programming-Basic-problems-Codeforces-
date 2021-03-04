#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],z=0,o=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
            z++;
        else o++;
        if(a[i]==0 && a[i-1]==0)
        {
            c++;
        }
    }
    if(z>o)
        printf("%d",o);
    else if()

    return 0;
}
