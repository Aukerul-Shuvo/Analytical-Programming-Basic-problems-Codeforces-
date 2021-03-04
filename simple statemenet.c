#include<stdio.h>
int main()
{
int c,d,e;
float a,b,f;
printf("Enter your two integer numbers:");
scanf("%f %f",&a,&b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
printf("sum of the two numbers:%d\n",c);
printf("subtraction of the two numbers:%d\n",d);
printf("multiplication of the two numbers:%d\n",e);
printf("devision of the two numbers:%f\n",f);
return 0;
}
