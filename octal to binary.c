#include<stdio.h>

int main()
{
int oct,i=0,j,k,remainder[100000];

printf("Enter the octal number:");
scanf("%d", &oct);

while(oct!=0)
{
    remainder[i]=oct%10;

    i++;
    oct=oct/10;
}

for(j=i-1;j>=0;j--)
{
    switch(remainder[j])
    {
    case 0: printf("000");
    break;

    case 1: printf("001");
    break;

    case 2: printf("010");
    break;

    case 3: printf("011");
    break;

    case 4: printf("100");
    break;

    case 5: printf("101");
    break;

    case 6: printf("110");
    break;

    case 7: printf("111");
    break;
    }
}

return 0;
}
