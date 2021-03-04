#include<stdio.h>
#include<math.h>

int main()
{
    int n,x=0,y=0,d;
    scanf("%d",&n);


    if((n%4==0) || (n%7)==0)
       {
           printf("YES\n");
           y++;
       }
    else
    {
        while(n!=0)
  {
      d=n%10;

      if(d!=4 && d!=7)
       {
           printf("NO\n");
           x++; break;
       }


      n=n/10;

  }
    }
    if(x==0 && y==0)
    {
        printf("YES");
    }


}
