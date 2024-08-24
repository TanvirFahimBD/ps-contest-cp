#include<stdio.h>
int main()
{
    double PI = 3.14159, R, A;
    scanf("%lf", &R);
    A = PI*(R*R);
    printf("A=%.4lf\n", A);
    return 0;
}
