#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main(){
int n;
scanf("%d",&n);
char a[n];getchar();
gets(a);

for(int i=0;i<(n-1);i++)
{
    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u' || a[j]=='y')
            {
                for(int k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
            }
            puts(a);
        }
    }
}







return 0;
}
