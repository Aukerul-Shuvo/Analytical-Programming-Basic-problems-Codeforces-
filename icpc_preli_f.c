#include<stdio.h>

int main()
{
    long long int p,q,y;
    scanf("%lld %lld %lld",&p,&q,&y);

    long long result;

    result= ((y*52)*p*5)+(y*52*2*q);
    printf("%lld\n",result);



    return 0;
}
