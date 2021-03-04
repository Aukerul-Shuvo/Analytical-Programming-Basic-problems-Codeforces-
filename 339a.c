#include<stdio.h>
#include<string.h>

int main()
{
    char a[101];
    gets(a);
    int l,i,one=0,two=0,three=0;
    l=strlen(a);

    for(i=0;i<l;i=i+2)
    {
        if(a[i]=='1')
        one++;
        else if(a[i]=='2')
            two++;
        else if(a[i]=='3')
            three++;
    }
    int total;
    total=one+two+three;
    for(i=1;i<=total;i++)
    {
        if(i<=one)
        {
               if(i==one && total==one )
                printf("1");
                  else printf("1+");
        }

        else if(i>one && i<=(one+two))
        {
               if(i==(one+two) && total==one+two)
                printf("2");
                  else printf("2+");
        }

            else if(i>(one+two) && i<=(one+two+three))
               {
                     if(i==(one+two+three) && total==one+two+three)
                printf("3");
                  else printf("3+");
               }

    }
    return 0;
}
