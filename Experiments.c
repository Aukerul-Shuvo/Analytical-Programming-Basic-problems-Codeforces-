#include<stdio.h>
int main()
{
int t,i,c=0,r=0,s=0;
float pc,pr,ps;
scanf("%d",&t);
int a[t];
char b[t];
for(i=0;i<t;i++)
{
scanf("%d %c",&a[i],&b[i]);

if(b[i]=='C')
c=c+a[i];
if(b[i]=='R')
r=r+a[i];
if(b[i]=='S')
s=s+a[i];
}


printf("Total: %d cobaias\n%Total de coelhos: %d\nTotal de coelhos: %d\nTotal de sapos: %d\n",c+r+s,c,r,s);
c=(float)c;
r=(float)r;
s=(float)s;
pc=((c*100)/(c+r+s));
ps=(s*100)/(c+r+s);
pr=(r*100)/(c+r+s);
printf("Percentual de coelhos: %.2f\nPercentual de ratos: %.2f \nPercentual de sapos: %.2f \n",pc,pr,ps);
return 0;
}
