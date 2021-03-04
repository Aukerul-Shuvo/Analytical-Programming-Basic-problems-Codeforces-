#include<stdio.h>
#include<math.h>

int main()
{
    char c1,c2;
    int n1,n2,i,m;

    scanf("%c%d %c%d",&c1,&n1,&c2,&n2);
        if(c1==c2 && n1==n2)
            printf("%d\n",n1-n2);
       else if(c1==c2)
        {
            if(n2>n1)
              {
                  printf("%d\n",n2-n1);
                  for(i=0;i<(n2-n1);i++)
                    printf("U\n");
              }
            else if(n2<n1)
               {
                    printf("%d\n",n1-n2);
                    for(i=0;i<(n1-n2);i++)
                        printf("D\n");
               }

        }
        else if(n1==n2)
        {
            if(c1>c2)
             {
                  printf("%d\n",c1-c2);
            for(i=0;i<(c1-c2);i++)
                printf("L\n");
             }
            if(c2>c1)
             {
                  printf("%d\n",c2-c1);
            for(i=0;i<(c2-c1);i++)
                printf("R\n");
             }
        }
        else if(((n1%2)==0 && (n2%2)==0 ) || ((n1%2)!=0 && (n2%2)!=0 ))
        {
           if(c2>c1)
           {
               if((n1>n2) && (c2-c1)>(n1-n2))
               {
                   printf("%d\n",c2-c1);
                   for(i=n2;i<n1;i++)
                    printf("RD\n");
                   for(i=1;i<=((c2-c1)-(n1-n2));i++)
                    printf("R\n");
               }
               else if((n1>n2) && (c2-c1)<(n1-n2))
               {
                   printf("%d\n",n1-n2);
                   for(i=c1;i<c2;i++)
                   {
                       printf("RD\n");
                   }
                   for(i=0;i<((n1-n2)-(c2-c1));i++)
                    printf("D\n");
               }
               else if((n2>n1) && (c2-c1)>(n2-n1))
               {
                   printf("%d\n",c2-c1);
                   for(i=n1;i<n2;i++)
                    printf("RU\n");
                   for(i=0;i<((c2-c1)-(n2-n1));i++)
                    printf("R\n");
               }
               else if((n2>n1) && (c2-c1)<(n2-n1))
               {
                    printf("%d\n",n2-n1);
                   for(i=c1;i<c2;i++)
                    printf("RU\n");
                   for(i=0;i<((n2-n1)-(c2-c1));i++)
                    printf("U\n");
               }
           }
           if(c1>c2)
           {
               if((n2>n1 && ((c1-c2)<(n2-n1))))
               {
                   printf("%d\n",n2-n1);
                   for(i=c2;i<c1;i++)
                    printf("LU\n");
                   for(i=0;i<((n2-n1)-(c2-c1));i++)
                    printf("U\n");
               }
               else if((n2>n1 && ((c1-c2)>(n2-n1))))
               {
                   printf("%d\n",c1-c2);
                   for(i=n1;i<n2;i++)
                    printf("LU\n");
                   for(i=0;i<((c1-c2)-(n2-n1));i++)
                    printf("L\n");
               }
               else if((n1>n2 && ((c1-c2)<(n1-n2))))
               {
                   printf("%d\n",n1-n2);
                   for(i=c2;i<c1;i++)
                    printf("LD\n");
                   for(i=0;i<((n1-n2)-(c1-c2));i++)
                    printf("D\n");
               }
                else if((n1>n2 && ((c1-c2)>(n1-n2))))
               {
                   printf("%d\n",c1-c2);
                   for(i=n2;i<n1;i++)
                    printf("LD\n");
                   for(i=0;i<((c1-c2)-(n1-n2));i++)
                    printf("L\n");
               }
           }



            }
            else if(((n1%2)==0 && n2%2!=0) || ((n2%2)==0 && n1%2!=0))
            {
                if(c2>c1)
                {
                    m=c2-c1;
                    printf("%d\n",c2-c1);
                    if(n1>n2)
                    {
                        for(i=n2;i<n1;i++)
                            printf("RD\n");

                            for(i=(n1-n2)+1;i<=m;i++)
                                printf("R\n");
                    }
                    else if(n2>n1)
                    {
                        for(i=n1;i<n2;i++)
                            printf("RU\n");

                            for(i=(n2-n1)+1;i<=m;i++)
                                printf("R\n");
                    }
                }
                else if(c1>c2)
                {
                    printf("%d\n",c1-c2);
                    m=c1-c2;
                    if(n1>n2)
                    {
                        for(i=n2;i<n1;i++)
                            printf("LD\n");
                        for(i=(n1-n2)+1;i<=m;i++)
                            printf("L\n");
                    }
                    else if(n2>n1)
                    {
                        for(i=n1;i<n2;i++)
                            printf("LU\n");
                        for(i=(n2-n1)+1;i<=m;i++)
                            printf("L\n");
                    }
                }

            }



    return 0;

}
