#include<stdio.h>
int main()
{
    int n, n11, n12, n21, n22, n31, n32, n41, n42, n51, n52, n61, n62, n71, n72;
    scanf("%d", &n);
    n11 = (n/100);
    n12 = (n%100);
    n21 = (n12/50);
    n22 = (n12%50);
    n31 = (n22/20);
    n32 = (n22%20);
    n41 = (n32/10);
    n42 = (n32%10);
    n51 = (n42/5);
    n52 = (n42%5);
    n61 = (n52/2);
    n62 = (n52%2);
    n71 = (n62/1);
    printf("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n",n11);
    printf("%d nota(s) de R$ 50,00\n",n21);
    printf("%d nota(s) de R$ 20,00\n",n31);
    printf("%d nota(s) de R$ 10,00\n",n41);
    printf("%d nota(s) de R$ 5,00\n",n51);
    printf("%d nota(s) de R$ 2,00\n",n61);
    printf("%d nota(s) de R$ 1,00\n",n71);
    return 0;
}
