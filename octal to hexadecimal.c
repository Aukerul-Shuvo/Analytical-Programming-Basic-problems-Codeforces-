#include<stdio.h>
#include<math.h>
int main()
{
    long long int binarynum, octalnum = 0, j=0,i=0,s=0,k, remainder,l=0,m;
    long long int a[10000];
    printf("Enter the value for  octal number: ");
    scanf("%lld", &binarynum);
    while (binarynum != 0)
    {
        remainder = binarynum % 10;
        octalnum = octalnum + remainder * pow(8,j);
        j++;
        binarynum = binarynum / 10;
        i++;
}


while(octalnum!=0)
{
    remainder=octalnum%16;
    a[l]=remainder;
    octalnum=octalnum/16;
    l++;

}

for(m=l-1;m>=0;m--)
{

switch(a[m])
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

    if(a[m]>=0 && a[m]<10)
printf("%lld",a[m]);

}

return 0;

}
