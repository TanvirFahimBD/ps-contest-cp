#include<stdio.h>
int main()
{
    int cp1, cp2, p1, p2;
    double pr1, pr2, paid;
    scanf("%d %d %lf", &cp1, &p1, &pr1);
    scanf("%d %d %lf", &cp2, &p2, &pr2);
    paid = (p1*pr1)+(p2*pr2);
    printf("VALOR A PAGAR: R$ %.2lf\n",paid);
    return 0;
}
