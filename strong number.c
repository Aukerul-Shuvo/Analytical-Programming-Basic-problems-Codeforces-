#include<stdio.h>
#include<conio.h>
int main()
{
    int i, fact=1,n,sum=0,rem,j;
    printf("Enter number to check: ");
    scanf("%d",&n);
    j=n;
    while(n>0)
    {
    rem=n%10;

    for(i=1;i<=rem;i++){

        fact=fact*i;
    }

    sum=sum+fact;
    n=n/10;
    fact=1;

    }


    if(sum==j)
        {printf(" Strong");
        }
    else {printf(" Not Strong");
    }
    return 0;
}
