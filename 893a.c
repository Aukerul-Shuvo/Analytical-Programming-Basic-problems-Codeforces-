#include<stdio.h>
int main()
{
    int n,f1=1,f2=2,flag=0,i,c=3,temp;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
             if(f1!=s[i] && f2!=s[i])
            {
                flag++;
            }


            if(f1==s[i])
            {
               f1=s[i];
               temp=f2;
               f2=c;
               c=temp;
            }
            else if(f2==s[i])
            {
               temp=f1;
               f1=f2;
               f2=c;
               c=temp;

            }

//printf("f1=%d\tf2=%d\n",f1,f2);


            //f1=s[i]; f2=c;

    }
    if(flag==0)
        printf("YES\n");
    else if(flag!=0)
        {printf("NO\n");}
}
