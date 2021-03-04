#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n<=100 && n>=4 && (n%2)==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
