#include<stdio.h>
struct points
{
    int x,y;
};
int main()
{
    struct points a[100];
    int i;
    for(i=0;i<100;i++)
    {
    scanf("%d %d",&a[i].x,&a[i].y);

    if(a[i].x>0 && a[i].y>0)
    printf("primeiro\n");
    else if(a[i].x>0 && a[i].y<0)
        printf("quarto\n");
        else if(a[i].x<0 && a[i].y<0)
        printf("terceiro\n");
        else if(a[i].x<0 && a[i].y>0)
        printf("segundo\n");
        else
        break;
    }


return 0;
}

