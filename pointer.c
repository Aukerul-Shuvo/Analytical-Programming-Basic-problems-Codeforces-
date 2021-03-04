#include<stdio.h>
int main()
{
int x,*y;


scanf("%d",&x);
y=&x;
printf("%x %d",y,*y);
return 0;
}
