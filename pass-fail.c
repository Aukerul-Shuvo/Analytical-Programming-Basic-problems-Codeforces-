#include<stdio.h>

int main()

{
float mark;
char passed,failed;
 printf("Enter your mark:");
 scanf("%lf", &mark);
 printf("%s",(mark>33)?  passed : failed);

return 0;

}
