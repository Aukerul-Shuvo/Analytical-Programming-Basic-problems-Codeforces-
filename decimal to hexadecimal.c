#include<stdio.h>

int main()
{
int dec,i=0,j,k,remainder, a[100000];
printf("Enter the decimal number(integer):");
scanf("%d", &dec);

while(dec!=0)
{
    remainder=dec%16;
    a[i]=remainder;
    dec=dec/16;
    i++;

}
printf("Your number in hexadecimal is=");
for(j=i-1;j>=0;j--)
{
switch(a[j])
{
    case 10: printf("A");
    break;
     case 11: printf("B");
    break;
     case 12: printf("C");
    break;
     case 13:printf("D");
    break;
     case 14:printf("E");
    break;
     case 15: printf("F");
    break;

}
if(a[j>=0] && a[j]<10)
printf("%d",a[j]);
}

return 0;
}
