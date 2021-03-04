#include<stdio.h>

int main()
{
    int n,p,q,count=0,i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        if((q-p)>=2)
        {
            count++;
        }

    }
    printf("%d\n",count);
    return 0;
}
