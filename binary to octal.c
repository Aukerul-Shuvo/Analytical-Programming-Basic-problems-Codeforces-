#include<stdio.h>
int main()
{
    long long int binarynum, octalnum = 0, j = 1,i=0,s=0,k, remainder;
    long long int a[10000];
    printf("Enter the value for  binary number: ");
    scanf("%lld", &binarynum);
    while (binarynum != 0)
    {
        remainder = binarynum % 10;
        octalnum = octalnum + remainder * j;
        j = j * 2;
        binarynum = binarynum / 10;
        i++;
        if(i%3==0)
        {
            j=1;
            a[s]=octalnum;
            s=s+1;

            octalnum=0;
        }

    }
    printf("Equivalent octal value: %lld", octalnum);
    s=s-1;
    while(s>=0)
    {
        printf("%lld",a[s]);
        s=s-1;

    }


    return 0;
}
