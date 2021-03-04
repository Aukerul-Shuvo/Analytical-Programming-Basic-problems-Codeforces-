#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    gets(s);
    int l,i,o=0;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' || s[i]=='+')
        {
            printf("YES\n");
            o++;
            break;
        }


    }
if(o==0)
        {
            printf("NO\n");
        }

    return 0;
}
