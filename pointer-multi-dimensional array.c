#include<stdio.h>
int main()
{
int x[4][3];

x[1][2]=4;

printf("%d  %d  %d", x[1][2], *(x[1]+2), *(*(x+1) + 2));


return 0;
}
