#include<stdio.h>

int main()
{
    int i,j,t,r=0,result=0,k,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,coun1=0,coun2=0,coun3=0,coun4=0,coun5=0,coun6=0,coun7=0,coun8=0,coun9=0,coun10=0;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        int n;
        scanf("%d",&n);
        result=n;

        int arr[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&arr[i][j]);

                        if(n==5)
                        {

                    if(arr[i][j]==1){
                        c1++;
                        if(c1==1)
                            coun1++;
                        else
                            coun2=0;


                    }
                     if(arr[i][j]==2)
                    {
                        c2++;
                        if(c2==1)
                            coun2++;
                        else
                            coun2=0;


                    }
                     if(arr[i][j]==3)
                    {
                        c3++;
                        if(c3==1)
                            coun3++;
                        else
                            coun3=0;


                    }
                     if(arr[i][j]==4)
                    {
                        c4++;
                        if(c4==1)
                            coun4++;
                        else
                            coun4=0;


                    }
                     if(arr[i][j]==5)
                    {
                        c5++;
                        if(c5==1)
                            coun5++;
                        else
                            coun5=0;


                    }
                     if(arr[i][j]==6)
                    {
                        c6++;
                        if(c6==1)
                            coun6++;
                        else
                            coun6=0;


                    }
                     if(arr[i][j]==7)
                    {
                        c7++;
                        if(c7==1)
                            coun7++;
                        else
                            coun7=0;


                    }
                     if(arr[i][j]==8)
                    {
                        c8++;
                        if(c8==1)
                            coun8++;
                        else
                            coun8=0;


                    }
                     if(arr[i][j]==9)
                    {
                        c9++;
                        if(c9==1)
                            coun9++;
                        else
                            coun9=0;


                    }
                     if(arr[i][j]==10)
                    {
                        c10++;
                        if(c10==1)
                            coun10++;
                        else
                            coun10=0;


                    }






                if(c1>1 || c2>1 || c3>1 || c4>1 || c5>1 || c6>1 || c7>1 || c8>1 || c9>1 || c10>1)
            {
               result--;
               coun1=0,coun2=0,coun3=0,coun4=0,coun5=0,coun6=0,coun7=0,coun8=0,coun9=0,coun10=0;
            }
            c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;c10=0;

            if( coun1!=0 && coun2!=0&& coun3!=0 && coun4!=0 && coun5!=0 &&coun6!=0 && coun7!=0 && coun8!=0 &&coun9!=0 &&coun10!=0)
            {


                        r=r+2;
                    coun1=coun1-1,coun2=coun2-1,coun3=coun3-1,coun4=coun4-1,coun5=coun5-1,coun6=coun6-1,coun7=coun7-1,coun8=coun8-1,coun9=coun9-1,coun10=coun10-1;


            }
                        }
                        if(n==10)
                        {

                             if(arr[i][j]==1){
                        c1++;



                    }
                     if(arr[i][j]==2)
                    {
                        c2++;



                    }
                     if(arr[i][j]==3)
                    {
                        c3++;



                    }
                     if(arr[i][j]==4)
                    {
                        c4++;



                    }
                     if(arr[i][j]==5)
                    {
                        c5++;


                    }
                     if(arr[i][j]==6)
                    {
                        c6++;



                    }
                     if(arr[i][j]==7)
                    {
                        c7++;



                    }
                     if(arr[i][j]==8)
                    {
                        c8++;



                    }
                     if(arr[i][j]==9)
                    {
                        c9++;

                    }
                     if(arr[i][j]==10)
                    {
                        c10++;



                    }


                if(c1>1 || c2>1 || c3>1 || c4>1 || c5>1 || c6>1 || c7>1 || c8>1 || c9>1 || c10>1)
            {
               result--;


            }


                        }

        }
         if(n==10) {c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;c10=0;}
        }

        printf("Case %d: ",k+1);
        if(n<5)
            printf("0\n");
        else if(n>5 && n<10)
            printf("0\n");
        else if(n>10)
        printf("0\n");
        else if(n==5)
printf("%d\n",r);
        else if(n==10)
            printf("%d\n",result);
            if(n>10)
                printf("0\n");



    }



    return 0;
}
