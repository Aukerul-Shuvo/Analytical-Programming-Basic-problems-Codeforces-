#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,gi,gj;
    int a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                gi=i;
                gj=j;
            }
        }
    }
    int t= abs(2-gi)+abs(2-gj);
    printf("%d\n",t);




    return 0;
}
