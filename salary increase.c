#include<stdio.h>

int main()
{
double salary, sal;
int A;
char per='%';
scanf("%lf",&salary);

if(salary>=0.00 && salary<=400.00)
{
sal=(salary*.15)+salary;
A=15;
}
if(salary>=400.01 && salary<=800.00)
{
sal=(salary*.12)+salary;
A=12;
}
if(salary>=800.01 && salary<=1200.00)
{
sal=(salary*.10)+salary;
A=10;
}
if(salary>=1200.01 && salary<=2000.00)
{
sal=(salary*.07)+salary;
A=7;
}
if(salary>=2000.01)
{
sal=(salary*.04)+salary;
A=4;
}

printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %c",sal,sal-salary,A,per);





return 0;
}
