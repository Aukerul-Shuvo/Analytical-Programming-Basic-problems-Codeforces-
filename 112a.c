#include<stdio.h>
#include<string.h>

int main()
{
    char a[101],b[101];
    gets(a);
    gets(b);
    int x,y,i,p;
    x=strlen(a);
    y=strlen(b);
    strlwr(a);
    strlwr(b);


p=strcmp(a,b);
if(p==0)
    printf("%d\n",p);
else{
       for(i=0;i<x;i++)
       {

        if(a[i]>b[i])
        {
            printf("1\n");
            break;
        }

       else if(a[i]<b[i])
        {
            printf("-1\n");
            break;
            }
       }

}
    return 0;
}
