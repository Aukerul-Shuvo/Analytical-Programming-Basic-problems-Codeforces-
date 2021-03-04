#include<stdio.h>
int main()
{
int i, *ptr, odd[5]={1,2,3,4,5};

ptr=odd;

for(i=0;i<5;i++)
{
    printf("%d\t", *ptr);
    printf("%d\n",ptr);
    ptr++;

}
return 0;
}
