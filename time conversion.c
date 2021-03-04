#include<stdio.h>
int main()
{
int N,h,o,m,s;
scanf("%d", &N);

h=N/3600;
o=N%3600;
m=o/60;
s=o%60;
printf("%d:%d:%d",h, m, s);
printf("\n");

return 0;
}
