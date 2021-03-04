#include<stdio.h>
int fibo(int n)
{
static int i=1,j=1,x;

if(n>=3)
{
    x=i+j;
    printf("%d\t",x);
    j=i;
    i=x;

}
fibo(n-1);
return 0;
}
int main()
{
int n;

scanf("%d",&n);
printf("0    1    ");
fibo(n);

return 0;

}
