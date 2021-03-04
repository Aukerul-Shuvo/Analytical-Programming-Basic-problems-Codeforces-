#include<stdio.h>

int main()
{
long int T,i,j,pr[1001],k=2,l,m,n;
pr[0]=2;
pr[1]=3;
scanf("%ld",&T);

for(l=0;l<T;l++)
{

for(i=4;i<1000;i++)
{
    for(j=2;j<i;j++)
    {
        if((i%j)==0)
        {break;}

        if(j==(i-1))
        {
        pr[k]=i;
        k++;
        }
    }
}



scanf("%ld%ld",&m,&n);
printf("Case %ld: %ld",l+1,pr[m-1]+pr[n-1]);
}


return 0;
}
