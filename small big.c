#include<stdio.h>

int main()
{
int A,B,C;
scanf ("%d %d %d", &A,&B, &C);

if(A>B)
{
if(A>C)
{printf("%d eh o maior",A);}

else
{printf("%d eh o maior",C);}

}

if (B>C)
{printf("%d eh o maior",B);}
else
   printf("%d eh o maior",C);

printf("\n");
return 0;
}
