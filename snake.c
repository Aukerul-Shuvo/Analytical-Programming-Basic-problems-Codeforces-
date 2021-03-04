#include<stdio.h>

int main()
{
int x,y;
float p;
scanf("%d %d", &x, &y);

if(x==1)
{
p=y*4;
printf("Total: R$ %.2f", p);
}
else if(x==2)
{
p=y*4.50;
printf("Total: R$ %.2f",p);
}
else if(x==3)
{
p=y*5.00;
printf("Total: R$ %.2f",p);
}
else if(x==4)
{
p=y*2.00;
printf("Total: R$ %.2f",p);
}
else if(x==5)
{
p=y*1.50;
printf("Total: R$ %.2f",p);
}

printf("\n");

return 0;
}
