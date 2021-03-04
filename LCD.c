#include<stdio.h>

int main()
{
int l,s,temp,x;

printf("Enter the numbers to find GCD=");
scanf("%d %d", &l,&s);
x=l*s;
while(s!=0)
{
    temp=l%s;
    l=s;
    s=temp;
}
printf("%d",x/l);

return 0;

}
