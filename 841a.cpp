#include<iostream>
#include<stdio.h>
#include<string.h>

int main()
{
   int a,b;
   int aa[123]={0},x=0;
   scanf("%d %d",&a,&b);
   getchar();
   char strng[a];
   gets(strng);
   for(int i=0;i<a;i++)
   {
       for(int j=97;j<=123;j++)
        {
            if(strng[i]==j)
                aa[j]++;
        }
   }

  for(int i=97;i<123;i++)
    {
        if(aa[i]>b)
        {
             printf("NO\n");
            x++;
            break;
        }
    }
 if(x==0)
        {printf("YES\n");}

    return 0;
}
