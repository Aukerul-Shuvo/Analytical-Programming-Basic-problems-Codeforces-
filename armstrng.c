#include<stdio.h>

int main()
{
    int num,qub,rem,sum=0,i;
    printf("Enter a number to check Armstrong: ");
    scanf("%d",&i);

    num=i;


        while(num>0){
            rem=num%10;
            qub=rem*rem*rem;

            sum=sum+qub;
        num=num/10;
    }



    if(sum==i)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}
