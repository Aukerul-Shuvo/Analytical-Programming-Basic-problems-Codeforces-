#include<stdio.h>
struct numbers
{
int x,y;
};

int main()
{
int i,j;
scanf("%d",&i);
float r;
struct numbers a[i];

for(j=0;j<i;j++)
{
    scanf("%d %d",&a[j].x,&a[j].y);
    if(a[j].y==0)
    printf("divisao impossivel\n'");
    else
    {
        r=((float)a[j].x/(float)a[j].y);
        printf("%.1f\n",r);
    }
}

return 0;
}
