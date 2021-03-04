#include<stdio.h>

int main()
{
    int n,t,i,count=0;
    scanf("%d %d",&n,&t);

    int arr[n][2],r[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&arr[i][0],&arr[i][1]);
    }
    for(i=0;i<n-1;i++)
    {
        r[i]= arr[i][0]+ (arr[i][1]/2);
         r[i+1]= arr[i+1][0]- (arr[i+1][1]/2);
         if((r[i+1]-r[i])==t ||(r[i]-r[i+1])==t)
            count++;
         else if((r[i+1]-r[i])>t)
         {
             count=count +2;
         }

    }
    printf("%d\n",count+2);
}
