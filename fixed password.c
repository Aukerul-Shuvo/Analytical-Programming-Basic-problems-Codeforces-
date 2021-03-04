#include<stdio.h>

struct pass
{
char pw[10];
};

int main()
{
int i,x;
struct pass a[100];

for(i=0;i<100;i++)
{
gets(a[i].pw);
x=strcmp("2002",a[i].pw);
if(x==0)
    {printf("Acesso Permitido\n");
        break;}
        else
        printf("Senha Invalida\n");
}


return 0;
}
