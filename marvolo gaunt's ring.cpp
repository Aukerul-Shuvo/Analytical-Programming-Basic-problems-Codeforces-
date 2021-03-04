#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int i,n,p,q,r,neg=0,neg1=0,brr[3];
   scanf("%lld ",&n);
   scanf("%lld ",&p); if(p<0) neg1++;
   scanf("%lld ",&q); if(q<0) neg1++;
   scanf("%lld ",&r); if(r<0) neg1++;
    brr[0]=p,brr[1]=q,brr[2]=r;
   int arr[n];


   for(i=0;i<n;i++)
   {
       scanf("%lld",&arr[i]);
       if(arr[i]<0)
        neg++;
   }
   if(p>=0 && q>=0 && r>=0 && neg==0)
   {
       sort(arr, arr+n);
       //printf("%lld\n",arr[n-1]);
       printf("%lld",((p*arr[n-1])+(q*arr[n-1])+(r*arr[n-1])));
   }
    if((p<0 || q<0 || r<0) && neg==0 && neg1==1)
    {
     sort(arr, arr+n);
     sort(brr, brr+3);
     printf("%lld\n",((brr[2]*arr[n-1])+(brr[1]*arr[n-1])+(brr[0]*arr[0])));
    }
    if((p<0 || q<0 || r<0) && neg==0 && neg1==2)
    {
     sort(arr, arr+n);
     sort(brr, brr+3);
     printf("%lld\n",((brr[2]*arr[n-1])+(brr[1]*arr[0])+(brr[0]*arr[0])));
    }
    if((p<0 || q<0 || r<0) && neg==0 && neg1==3)
    {
     sort(arr, arr+n);
     sort(brr, brr+3);
     printf("%lld\n",((brr[2]*arr[0])+(brr[1]*arr[0])+(brr[0]*arr[0])));
    }
    if(( neg!=n && neg1==0))
    {
     sort(arr, arr+n);
     sort(brr, brr+3);
     printf("%lld\n",((brr[2]*arr[n-1])+(brr[1]*arr[n-1])+(brr[0]*arr[n-1])));
    }
    if(neg==n && neg1==0)
    {
     sort(arr, arr+n);
     sort(brr, brr+3);
     //printf("%d\n",arr[0]);
     printf("%lld\n",((brr[2]*arr[n-1])+(brr[1]*arr[n-1])+(brr[0]*arr[n-1])));
    }
    if((p<0 || q<0 || r<0) && neg==0 && neg1==2)
    {
     sort(arr, arr+n);
     sort(brr, brr+3);
     printf("%lld\n",((brr[2]*arr[n-1])+(brr[1]*arr[0])+(brr[0]*arr[0])));
    }
    return 0;
}
