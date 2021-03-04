#include<stdio.h>
#include<math.h>

int main()
{
    int i, t;
    scanf("%d",&t);
long long int o1[t],o2[t],x1[t],y1[t],x2[t],y2[t];
double a,b,r,c,ang;
for(i=0;i<t;i++)

{

scanf("%lld %lld %lld %lld %lld %lld",&o1[i],&o2[i],&x1[i],&y1[i],&x2[i],&y2[i]);

a=((o1[i]-x1[i])*(o1[i]-x1[i]))+((o2[i]-y1[i])*(o2[i]-y1[i]));
r=sqrt(a);

b=((x1[i]-x2[i])*(x1[i]-x2[i]))+((y1[i]-y2[i])*(y1[i]-y2[i]));
b=sqrt(b);
c=b/2;

ang=asin(c/r);


printf("%lf\n",2*r*ang);
}
return 0;
}
