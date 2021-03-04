#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,y;
    scanf("%d",&n);

    char name[n][32],alt[32];

    int na1[n],na2[n],tan=0,man=0;
    na1[n-1]=0;
    na2[n-1]=0;
    for(i=0;i<n;i++)
    {
        scanf("%s",&name[i]);

        y=strcmp(name[0],name[i]);
        if(y==0)
        {
            scanf("%d",&na1[i]);
            man=man+na1[i];
        }
        else
        {
            strcpy(alt,name[i]);
            scanf("%d",&na2[i]);
            tan=tan+na2[i];
        }
    }
    if(tan>man)
        printf("%s\n",alt);
    else if(tan<man)
    {
        printf("%s\n",name[0]);
    }
    else if(man==tan)
    {
        if(na1[n-1]!=0)
        {
            printf("%s\n",alt);
        }
        else if(na2[n-1]!=0)
            printf("%s\n",name[0]);
    }

    return 0;
}
