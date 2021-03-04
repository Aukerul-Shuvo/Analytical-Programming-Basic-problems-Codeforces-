#include<stdio.h>

int main()
{
double R,A,VOLUME;

scanf("%lf", &R);

A=4*3.14159*R*R*R;
VOLUME=A/3;

printf("VOLUME = %.3lf", VOLUME);
printf("\n");

return 0;
}
