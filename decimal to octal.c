#include<stdio.h>

int main()
{
int dec,i=0,j,k,remainder, a[100000];
printf("Enter the decimal number(integer):");
scanf("%d", &dec);

while(dec!=0)
{
    remainder=dec%8;
    a[i]=remainder;
    dec=dec/8;
    i++;

}
printf("The octal number is=");
for(j=i-1;j>=0;j--)
{
printf("%d",a[j]);
}

return 0;
}
