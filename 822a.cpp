#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    unsigned long long int a,b,fact=1;
    scanf("%lld %lld",&a,&b);

    if(a>b)
    {
        for(int i=1;i<=b;i++)
        {
            fact=fact*i;
        }
        printf("%lld\n",fact);
    }
    else
    {
        for(int i=1;i<=a;i++)
        {
            fact=fact*i;
        }
        printf("%lld\n",fact);
    }


    return 0;
}
