#include<stdio.h>

int main()
{
int n,j;

scanf("%d",&n);
if((n>=1) && (n<=100))
{

if(n==1)
printf("I hate it\n");

if(n==2)
printf("I hate that I love it\n");

if(n>2)
{
    for(j=1;j<=n;)
    {
        if(j==1)
        {printf("I hate ");
        j++;}
        if((j%2)==0 && j<=n)
        {printf("that I love ");
        j++;}
        if((j%2)!=0 && j<=n)
        {printf("that I hate ");
        j++;}

    }
    printf("it\n");
}
}
return 0;
}
