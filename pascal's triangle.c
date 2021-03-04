#include<stdio.h>
int main()
{
int rows,i,j,space,result=1;

printf("Enter the number of lines you want to see the Pascal's Traiangle=");
scanf("%d",&rows);

for(i=0;i<rows; i++)
{
    for(space=rows-1-i;space>=0;space--)
    {
        printf(" ");
    }

    for(j=0;j<=i;j++)
    {
        if(i==0 || j==0)
        printf("1 ");

        else
        {
            result=result*(i-j+1)/j;
            printf("%d ",result);
        }
    }
    printf("\n");

}

return 0;
}
