#include<stdio.h>
int main()
{
int x,*ptr1,**ptr2,***ptr3,****ptr4;

scanf("%d",&x);

ptr1=&x;
ptr2=&ptr1;
ptr3=&ptr2;
ptr4=&ptr3;

printf("%d  %d  %d  %d",*ptr1,**ptr2,***ptr3,****ptr4);
return 0;
}
