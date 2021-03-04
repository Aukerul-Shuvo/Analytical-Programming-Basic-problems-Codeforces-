#include<stdio.h>

int main()
{
    int a[6],i,j,k=0,sum=0,t,ta,x,y;

    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    if(sum%2!=0)
       {printf("NO");
          goto y;
       }
    else
    {
        sum=sum/2;
        for(i=1;i<6;i++)
        {
            t=a[0]+a[i];
            for(j=i+1;j<6;j++)
                    {ta=t+a[j];
                    if(ta==sum)
                    {
                        printf("YES\n");
                        k++;
                        goto x;
                    }

                    }
        }

        }

    x:if(k==0)
    {
        printf("NO\n");
    }
    y:
    return 0;
}
