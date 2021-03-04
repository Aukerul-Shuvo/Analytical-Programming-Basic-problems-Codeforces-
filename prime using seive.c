#include<stdio.h>

int main()
{
    int a[10000]={0},i,p[5000],j=0;


for(i=2;(i*2)<=5000;i++)
{

    a[i*2]=1;
}
for(i=2;(i*3)<=5000;i++)
{

    a[i*3]=1;
}
for(i=5;(i*5)<=5000;i++)
{

    a[i*5]=1;
}
for(i=2;(i*7)<=5000;i++)
{
a[i*7]=1;
}



for(i=0;i<5000;i++)
{
        if(a[i]!=1)
        {
             //printf("%d\t",i);
             p[j]=i;
             j++;
        }

}
for(i=2;i<=j;i++)
    printf("%d ",p[i]);
}

