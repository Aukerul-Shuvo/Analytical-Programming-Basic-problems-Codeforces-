#include<stdio.h>
int main()
{
long int i,j,N,Q,a[10000],b[10000],x;

scanf("%ld%ld",&N,&Q);

for(i=0;i<=N-1;i++)
scanf("%ld",&a[i]);

for(i=0;i<=Q-1;i++)
scanf("%ld",&b[i]);
if((N>=1)&& (N<=10000) && (Q-1<=N-1))
{

for(j=0;j<Q ;j++)
{


for(i=0;i<=N-1;i++)
{
    if(a[i]>10000)
        break;


 if(a[i]==b[j])
 {
    printf("%ld\n",i+1);
    break;

 }
 if(i==N-1)
 {
     if(a[i]!=b[j]){
 printf("Not Found\n");
    }


 }
}
}
}

return 0;
}
