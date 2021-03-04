#include<stdio.h>
#include<string.h>
int main()
{
    int i,y,count=0,j=1,x;
    char w[100];
    scanf("%s",&w);
    y=strlen(w);
    for(i=0;i<=y;i++)
    {
        if(w[i]=='A' ||w[i]=='a' ||w[i]=='E' ||w[i]=='e' ||w[i]=='I' ||w[i]=='i' ||w[i]=='O' ||w[i]=='o' ||w[i]=='U' ||w[i]=='u' ||w[i]=='Y' ||w[i]=='y')
           {
               for(j=i;j<y;j++)
                w[j]=w[j+1];
                i--;
           }
           }


    for(i=0;w[i]!='\0';i++)
    {
        printf(".");
        if(w[i]<97)
            w[i]=w[i]+32;
        printf("%c",w[i]);
    }
}
