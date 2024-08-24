#include<stdio.h>
int main()
{
    double pi = 3.14159, a, b, c, at, ar, atr, as, arc;
    scanf("%lf %lf %lf", &a, &b, &c);
    at = ((1/2.0)*a*c);
    ar = pi*(c*c);
    atr =((1/2.0)*(a+b)*c);
    as = b*b;
    arc = a*b;
    printf("TRIANGULO: %.3lf\n",at);
    printf("CIRCULO: %.3lf\n",ar);
    printf("TRAPEZIO: %.3lf\n",atr);
    printf("QUADRADO: %.3lf\n",as);
    printf("RETANGULO: %.3lf\n",arc);
    return 0;
}
