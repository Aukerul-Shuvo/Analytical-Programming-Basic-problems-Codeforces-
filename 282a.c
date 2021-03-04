#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,x1,x2,y1,y2,r=0;
    scanf("%d",&t);
    char command[5];
    for(i=0;i<t;i++)
    {
        scanf("%s",&command);
        x1=strcmp(command,"++X");
        x2=strcmp(command,"X++");
        y1=strcmp(command,"--X");
        y2=strcmp(command,"XA--");
        if(x1==0 || x2==0)
            r++;
        else
            r--;
    }
    printf("%d\n",r);
    return 0;
}
