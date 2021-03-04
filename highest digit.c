#include<stdio.h>
void main()
{
    char a[100];
    int i,j,cc1=0,cc0=0,c0=0,c1=0;
    for(i=1;i>0;i++)
    {
        scanf("%c",&a[i]);
        if(a[i]=='0' || a[i]=='1')
        {
            if(a[i]=='0')
            {
               cc0++;
               cc1=0;
            }
                if(a[i]=='1')
                {
                  cc1++;
                  cc0=0;
                }

                if(c0<cc0)
                    c0=cc0;
                if(c1<cc1)
                    c1=cc1;
        }
        else
            break;



    }
    printf("mx 0s : %d\nmx 1s : %d\n",c0,c1);



}
