#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,x,y,z,sumx=0,sumy=0,sumz=0;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        sumx=sumx+x; sumy=sumy+y; sumz=sumz+z;
    }
    if(sumx==0 && sumy==0 && sumz==0)
       {
            printf("YES\n");
       }
    else
        printf("NO\n");

    return 0;
}
