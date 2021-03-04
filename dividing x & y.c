#include<stdio.h>

struct numbers
{ int *x,*y;
};
int main()
{

int i,j;
float d;
scanf("%d",&i);
struct numbers a[i];
for(j=0;j<i;j++)
{
    scanf("%d %d",&a[j].x,&a[j].y);
    if(a[j].y==0)
    printf("divisao impossivel\n");
    else
    {a[j].x=(float*)a[j].x;
    a[j].y=(float*)a[j].y;
    printf("%f\t%f\t",a[j].x,a[j].y);
    d=(a[j].x)/(a[j].y);
    printf("%.1f\n",d);}

}

return 0;
}


