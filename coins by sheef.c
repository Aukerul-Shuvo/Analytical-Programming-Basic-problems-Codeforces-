#include<stdio.h>
int main()
{
    int n,p,hundred,fifty,twenty,ten,five,two,one,p50,p25,p10,p5,p1;
    double tk;
    scanf("%lf",&tk);
    n=tk;
    p=(tk*100-n*100);
    hundred=n/100;
    n=n-hundred*100;
    fifty=n/50;
    n=n-fifty*50;
    twenty=n/20;
    n=n-twenty*20;
    ten=n/10;
    n=n-ten*10;
    five=n/5;
    n=n-five*5;
    two=n/2;
    one=n-two*2;
    p50=p/50;
    p=p-p50*50;
    p25=p/25;
    p=p-p25*25;
    p10=p/10;
    p=p-p10*10;
    p5=p/5;
    p1=p-p5*5;
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",hundred);
    printf ("%d nota(s) de R$ 50.00\n",fifty);
    printf ("%d nota(s) de R$ 20.00\n",twenty);
    printf ("%d nota(s) de R$ 10.00\n",ten);
    printf ("%d nota(s) de R$ 5.00\n",five);
    printf ("%d nota(s) de R$ 2.00\n",two);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",one);
    printf ("%d moeda(s) de R$ 0.50\n",p50);
    printf ("%d moeda(s) de R$ 0.25\n",p25);
    printf ("%d moeda(s) de R$ 0.10\n",p10);
    printf ("%d moeda(s) de R$ 0.05\n",p5);
    printf ("%d moeda(s) de R$ 0.01\n",p1);
    return 0;
}
