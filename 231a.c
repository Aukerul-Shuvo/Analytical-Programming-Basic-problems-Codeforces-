#include<stdio.h>

int main()
{
    int t,i,r,count=0;

    scanf("%d",&t);
    int a[t][3];
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
        r=a[i][0]+a[i][1]+a[i][2];
        if(r>=2)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
