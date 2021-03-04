#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);

int arr[n][2],arb[n];

for(i=0;i<n;i++)
{
    scanf("%d %d",&arr[i][0],&arr[i][1]);
    if(i==0)
    {
        arb[i]=arr[i][1];
    }
    else if(i<(n-1))
    {
        arb[i]=arb[i-1]-arr[i][0]+arr[i][1];
    }

}

/*for(i=0;i<n-1;i++)
{
    printf("%d\n",arb[i]);
}*/
sort(arb,arb+(n-1));
 printf("%d\n",arb[n-2]);

}
