#include<stdio.h>
int main()
{
    int n, n11, n12, n21, n22;
    scanf("%d", &n);
    n11 = (n/365);
    n12 = (n%365);
    n21 = (n12/30);
    n22 = (n12%30);
    printf("%d ano(s)\n", n11);
    printf("%d mes(es)\n", n21);
    printf("%d dia(s)\n", n22);
    return 0;
}
