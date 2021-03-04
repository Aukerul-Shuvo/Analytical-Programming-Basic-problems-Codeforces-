#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,mi,ma;
    scanf("%d",&n);
    int a[n],b[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    sort(b, b+n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(b[0]==a[i])
        {
            mi=i;
        }
        if(a[i]==b[n-1])
        {
            ma=i;
        }
    }
    printf("%d %d\n",ma,mi);
    if((mi-ma)+1==n || (ma-mi)+1==n)
    {
        printf("%d\n",n);
    }
   else if(ma>mi)
   {
       if((n-ma)>mi)
        printf("%d",n-ma);
       if((n-ma)<mi)
        printf("%d\n",mi+1);
        if((n-ma)==mi)
        printf("%d",n-ma);
   }
   else if(mi>ma)
   {
       if((n-mi)>ma)
       printf("%d\n",n-mi);
       if((n-mi)<ma)
        printf("%d\n",ma+1);
       if((n-mi)==ma)
       printf("%d\n",n-mi);
   }

    return 0;
}
