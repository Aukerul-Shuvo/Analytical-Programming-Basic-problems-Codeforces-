#include<stdio.h>

int main()
{
int a[100][100],b[100][100],c[3][2],i,j,k,m,n,l,h,sum;
printf("Enter the dimensions of the two matrix:");
scanf("%d %d %d %d",&m,&n,&k,&l);

if(n==k)
{
printf("The two matrices are multipliable.\n");


printf("Enter your first matrix elemants:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{scanf("%d",&a[i][j]);}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{printf("%d\t",a[i][j]);}
printf("\n");
}
printf("Enter your first matrix elemants:");
for(i=0;i<k;i++)
{
for(j=0;j<l;j++)
{scanf("%d",&b[i][j]);}
}
for(i=0;i<k;i++)
{
for(j=0;j<l;j++)
{printf("%d\t",b[i][j]);}
printf("\n");
}
printf("Multiplication result:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<l;j++)
    {
        sum=0;
        for(h=0;h<m;h++)
                {sum=sum+a[i][h]*b[h][j];}
            c[i][j]=sum;
        printf("%d\t",c[i][j]);

    }
    printf("\n");
}

}


return 0;
}
