#include<stdio.h>
int main()
{
float c,f;
printf("enter your temparature in fahrenhite:");
scanf("%f",&f);
c=(f-32)/9*5;
printf("temparature in celcius: %f", c);
return 0;
}
