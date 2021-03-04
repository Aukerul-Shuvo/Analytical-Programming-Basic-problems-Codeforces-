#include<stdio.h>

int main()
{
    int a,b,t,sum=0,x,tr=0;
    scanf("%d %d",&a,&b);

    if(b>a)
        printf("%d",a);
    else
    {
        if(a>0 && a>=b)
        { t=a;
           x: while(t>0)
            {tr=tr+(t%b);
            //printf("%d\t",tr);
               t=t/b;

               sum=sum+t;
            }
        }
       // printf("%d\n",tr);
        if(tr>=b)
        {
            t=tr;
            tr=0;
            goto x;
        }
        printf("%d",a+sum);
    }


    return 0;
}
