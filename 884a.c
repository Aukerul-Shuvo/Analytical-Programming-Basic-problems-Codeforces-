#include<stdio.h>

int main()
{
    int n,i,count=0;
    long long int t,a=0;

    scanf("%d %lld",&n,&t);
    long long int ta[n];

    for(i=0;i<n;i++)
    {
        scanf("%lld",&ta[i]);
        a=a+(86400-ta[i]);
        printf("%lld ",a);
        if((t-a)>=0)
            count++;

            printf("%d ",count);
        //if()

    }
    printf("%d",count);


    return 0;
}
