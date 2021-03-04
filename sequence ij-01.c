#include<stdio.h>
int main()
{
   float i,j;
   for(i=0.2,j=1.0;i<=2.0;i=i+0.2)
    {

        printf("I=%.1f J=%.1f\nI=%.1f J=%.1f\nI=%.1f J=%.1f\n",i,i+j,i,i+j+1,i,j+i+2);
        //if(i==1.00)
       // {
           // printf("I=1 J=2\nI=1 J=3\nI=1 J=4\n");

       // }
         //if(i==2.00)
        //{
            //printf("I=1 J=2\nI=1 J=3\nI=1 J=4\n");

        //}


    }return 0;

}
