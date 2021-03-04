/**4.    Write a program that multiplies two matrices. */
#include<stdio.h>
 int main()
 {

     int r1,c1,r2,c2,r3,c3,i,j,k;
     printf("Enter the row number of A : \n");
     scanf("%d",&r1);
     printf("Enter the nummber of colum of A: \n");
     scanf("%d",&c1);
     int A[r1][c1];
     for( i=0;i<r1;i++){
        for( j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
        }
     }
     for( i=0;i<r1;i++){
        for( j=0;j<c1;j++){
                printf("%d\n",A[i][j]);
        }
     }



     printf("Enter the row number of B : \n");
     scanf("%d",&r2);
     printf("Enter the nummber of colum of B: \n");
     scanf("%d",&c2);
     int B[r2][c2];
     for( i=0;i<r2;i++){
        for( j=0;j<c2;j++){
            scanf("%d",&B[i][j]);
        }
     }
     for(i=0;i<r2;i++){
        for( j=0;j<c2;j++){
          printf("%d\n",B[i][j]);
        }
     }

     r3=r1;
     c3=c2;
     int C[r3][c3];
     int sum;


     if(c1=r2){
     for( i=0;i<r3;i++){
        for( j=0;j<c3;j++){
                  sum=0;
                for( k=0;k<c3;k++){
                    sum=sum+A[i][k]*B[k][j];
                }
                C[i][j]=sum;
        }
     }
     }
     else
        printf("Multiplication is error \n");
     for( i=0;i<r3;i++){
        for( j=0;j<c3;j++){
              printf("%d\n",C[i][j]);
        }
     }
     return 0;


 }
