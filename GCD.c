#include<stdio.h>

int main()
{
int l,s,temp;

printf("Enter the numbers to find GCD=");
scanf("%d %d", &l,&s);

while(s!=0)
{
    temp=l%s;
    l=s;
    s=temp;
}
printf("%d", l);

return 0;

}
