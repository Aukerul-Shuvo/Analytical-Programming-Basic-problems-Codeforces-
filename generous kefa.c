#include<stdio.h>
#include<string.h>

int main()
{
    int n,k,i,j,x=0;
    int a[123]={0};
    scanf("%d %d",&n,&k);
    char s[n];
    scanf("%s",&s);
    for(i=0;i<n;i++)
    {
        for(j=97;j<=123;j++)
        {
            if(s[i]==j)
                a[j]++;
        }
    }
    for(i=97;i<123;i++)
    {
        if(a[i]>k)
        {
            printf("NO\n");
            x++;
            break;
        }
    }
    if(x==0)
        printf("YES\n");
    return 0;
}
