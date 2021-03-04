#include<stdio.h>

int main()
{
int t,i,j,k=0;

scanf("%d",&t);
int x[t],y[t];
for(i=0;i<t;i++)
{
    scanf("%d %d",&x[i],&y[i]);
    if((x[i]-y[i]==0) || (x[i]-y[i]==1) || (x[i]-y[i]==-1))
    {printf("0\n");}
    else
        if(x[i]<y[i])
    {

        {for(j=x[i]+1;j<y[i];j++)
    {
        if(j%2!=0)
           k=k+j;
    }
printf("%d\n",k);
}
    }
        if(x[i]>y[i])
    {

        {for(j=y[i]+1;j<x[i];j++)
    {
        if(j%2!=0)
           k=k+j;
    }
printf("%d\n",k);
}
    }
k=0;
}
return 0;
}
