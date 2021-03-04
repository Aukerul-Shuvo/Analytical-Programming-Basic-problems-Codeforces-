#include<stdio.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i!=0)
        {
            if(arr[i]>arr[i-1])
            {
                count++;
            }
        }
    }
    if(n==2  && count==0)
        printf("%d\n",count+1);
    else
    printf("%d\n",count);
}
