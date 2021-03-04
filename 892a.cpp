#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,sum=0;

    scanf("%lld",&n);
    long long int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {
        scanf("%lld",&b[i]);
    }
    sort(b, b+n);
    //printf("%lld %lld %lld\n",b[n-1],b[n-2],sum);
    if((b[n-1]+b[n-2])>=sum)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
