#include<stdio.h>
#include<string.h>

int main()
{
    int i,count=0,y,h=0;
    char num[100];
    scanf("%s",&num);
    y=strlen(num);
    for(i=0;i<=y-1;i++)
    {
        if(num[i]==num[i+1])
            {count++;
            if(count>=6)
              {
                   printf("YES\n");
                   h++;
                break;
              }
            }
            else
                count=0;

    }
    if(h==0)
        printf("NO");

    return 0;
}
