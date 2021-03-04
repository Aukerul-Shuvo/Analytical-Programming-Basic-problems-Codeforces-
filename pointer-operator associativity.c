#include<stdio.h>
int main()
{
int odd[5]={1,2,3,4,5},*ptr,x;

ptr=odd;
printf("%d\n",*ptr);


printf("%d",((*ptr)++));

return 0;
}
