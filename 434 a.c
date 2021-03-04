#include<stdio.h>
#include<string.h>

int main()
{
    unsigned long long int a;
    char n[10];
    int z=0,k,i,v,j,y,b=0;
    scanf("%lld %d",&a,&k);
snprintf(n, 10, "%d",a);
    y=strlen(n);
    for(i=0;i<y;i++)
    {
        if(n[i]=='0')
            z++;
    }
    printf("%d %d\n",y,z);
    if(z>=k)
        printf("%lld",a);
    v=a%10;
   if(v==2 || v==4 ||v==6 || v==8)
        {

            for( ; ;)
            {
                z=0;
                a=a*5;
            snprintf(n, 10, "%d",a);
            y=strlen(n);
            for(j=0;j<y;j++)
            {
                if(n[j]=='0')
                {
                    z++;
                }

               if(z>=k)
                   {
                       printf("%lld",a);
                   b++;}

            }
            if(b==1)
                break;
            }
            }
if(v==5)
        {

            for( ; ;)
            {
                z=0;
                a=a*2;
            snprintf(n, 10, "%d",a);
            y=strlen(n);
            for(j=0;j<y;j++)
            {
                if(n[j]=='0')
                {
                    z++;
                }

               if(z>=k)
                   {
                       printf("%lld",a);
                   b++;}

            }
            if(b==1)
                break;
            }
            }



    if(v==0 || v==1 || v==3 || v==7 || v==9)
    {
        for(j=z+1;j<=k;j++)
        {
            a=a*10;
        }
        printf("%lld",a);
    }



    return 0;
}
