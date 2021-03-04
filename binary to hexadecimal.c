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
        if(i%4==0)
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
        switch(a[s])
        {
        case 10:
            printf("A");
            break;
             case 11:
            printf("B");
            break;
             case 12:
            printf("C");
            break;
             case 13:
            printf("D");
            break;
             case 14:
            printf("E");
            break;
             case 15:
            printf("F");
            break;
        }
        if(a[s]>=0 && a[s]<10)
        printf("%lld",a[s]);

        s=s-1;

    }


    return 0;
}
