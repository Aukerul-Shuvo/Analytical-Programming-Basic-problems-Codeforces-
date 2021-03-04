#include<stdio.h>

int fact(int n)
{
static int x=1;

    while(n!=0)
    {
        x=n*x;
    fact(n-1);
    }

return x;
}

int main()
{
int n,y;
scanf("%d",&n);

y=fact(n);
printf("%d\n",y);
return 0;
}
