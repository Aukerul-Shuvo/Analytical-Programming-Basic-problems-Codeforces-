#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,d;
    scanf("%d",&t);
    char w[t][100];
    int y[t];
    for(i=0;i<t;i++)
    {
        scanf("%s",&w[i]);
        y[i]=strlen(w[i]);
    }
    for(i=0;i<t;i++)
    {
        if(y[i]<=10)
            printf("%s\n",w[i]);
        else
        {
            d=y[i];
            printf("%c%d%c\n",w[i][0],y[i]-2,w[i][d-1]);
        }
    }

}
