#include<stdio.h>
int main()
{
    int t,t1;
    scanf("%d",&t);
    int j,i,in;
    long long int sum=0;
    for(i=0;i<t;i++)
    {
        scanf("%d",&t1);
        for(j=0;j<t1;j++)
        {
            scanf("%d",&in);
        if(in>0)
            sum=sum+in;
        }
        printf("Case %d: %lld\n",i+1,sum);
        sum=0;
    }


    return 0;
}
