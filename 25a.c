#include<stdio.h>
#include<math.h>
int main()
{
    int n,o=0,e=0,i,inx,iny;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
         if(arr[i]%2==0){
          e++;
          inx=i;
        }
        else{
          o++;
          iny=i;
        }
    }



    if(e==1) printf("%d\n",inx);
    else if(o==1) printf("%d\n",iny);

    return 0;
}
