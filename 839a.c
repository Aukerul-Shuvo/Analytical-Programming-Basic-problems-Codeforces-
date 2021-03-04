#include<stdio.h>

int main()
{
    int n,k,i,sum=0;
    scanf("%d %d",&n,&k);

    int a[n],total=0;
    for(i=0;i<n;i++)
      {
            scanf("%d",&a[i]);
            total=total+a[i];
      }


      if(k>total)
        printf("-1");
       else if(k>(n*8))
        printf("-1\n");
       else
       {
           for(i=0;i<n;i++)
           {
               if(a[i]<8)
             {
                  sum=sum+a[i];
               if(sum>=k)
               {
                   printf("%d\n",i+1);
                   break;
               }

             }
             else if(a[i]>=8)
             {
                 a[i+1]=a[i+1]+a[i]-8;
                 sum=sum+8;

                 if(sum>=k)
                 {
                      printf("%d\n",i+1);
                      break;
                 }
                 if(i==(n-1) && sum<k)
                 {
                     printf("-1");
                     break;
                 }

             }
           }
       }



    return 0;
}
