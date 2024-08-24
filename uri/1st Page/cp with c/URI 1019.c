#include<stdio.h>
int main()
{
    int n, n11, n12, n21, n22;
    scanf("%d", &n);
    n11 = (n/3600);
    n12 = (n%3600);
    n21 = (n12/60);
    n22 = (n12%60);
    printf("%d:%d:%d\n", n11, n21, n22);
    return 0;
}
