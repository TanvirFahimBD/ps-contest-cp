#include<stdio.h>
int main()
{
    double nt;
    int np, n11, n12, n21, n22, n31, n32, n41, n42, n51, n52, n61, n62, n71, n72, n81, n82, n91, n92, na1, na2, nb1, nb2, nc1, nc2;
    scanf("%lf", &nt);
    np = nt*100;
    n11 = (np/10000);
    n12 = (np%10000);
    n21 = (n12/5000);
    n22 = (n12%5000);
    n31 = (n22/2000);
    n32 = (n22%2000);
    n41 = (n32/1000);
    n42 = (n32%1000);
    n51 = (n42/500);
    n52 = (n42%500);
    n61 = (n52/200);
    n62 = (n52%200);
    n71 = (n62/100);
    n72 = (n62%100);
    n81 = (n72/50);
    n82 = (n72%50);
    n91 = (n82/25);
    n92 = (n82%25);
    na1 = (n92/10);
    na2 = (n92%10);
    nb1 = (na2/5);
    nb2 = (na2%5);
    nc1 = (nb2/1);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n11);
    printf("%d nota(s) de R$ 50.00\n",n21);
    printf("%d nota(s) de R$ 20.00\n",n31);
    printf("%d nota(s) de R$ 10.00\n",n41);
    printf("%d nota(s) de R$ 5.00\n",n51);
    printf("%d nota(s) de R$ 2.00\n",n61);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",n71);
    printf("%d moeda(s) de R$ 0.50\n",n81);
    printf("%d moeda(s) de R$ 0.25\n",n91);
    printf("%d moeda(s) de R$ 0.10\n",na1);
    printf("%d moeda(s) de R$ 0.05\n",nb1);
    printf("%d moeda(s) de R$ 0.01\n",nc1);
    return 0;
}
