int main()
{
    int i, h,fact=1,n,sum=0,rem,j;
    printf("Enter number to check: ");
    scanf("%d",&n);



    for(h=1;h<=n;h++)
    {
    while(h!=0)
    {
    rem=h%10;

    for(i=1;i<=rem;i++){

        fact=fact*i;
    }

    sum=sum+fact;
    n=n/10;
    fact=1;

    }
    if(sum==h)
        {printf("%d", h);
        }
   }
    return 0;
}
