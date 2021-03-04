#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,i,arr[6];
    scanf("%d %d %d",&a,&b,&c);
    arr[0]=a+(b*c);
    arr[1]=a*(b+c);
    arr[2]=a*b*c;
    arr[3]=(a+b)*c;
    arr[4]=a+b+c;
    arr[5]=(a*b)+c;

    sort(arr,arr+6);

    printf("%d\n",arr[5]);

}

