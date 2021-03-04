#include<stdio.h>
#include<math.h>
int main()
{
    long long int binarynum, octalnum = 0, j=0,i=0,s=0,k, remainder;
    long long int a[10000];
    printf("Enter the value for  binary number: ");
    scanf("%lld", &binarynum);
    while (binarynum != 0)
    {
        remainder = binarynum % 10;
        octalnum = octalnum + remainder * pow(2,j);
        j++;
        binarynum = binarynum / 10;
        i++;
}

printf("%lld", octalnum);

return 0;

}
