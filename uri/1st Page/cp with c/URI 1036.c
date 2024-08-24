#include<stdio.h>
int main()
{
    double a, b, c, calc, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a>0.0 && ((b*b)-(4*a*c))>=0)
    {
        calc = sqrt((b*b)-(4*a*c));
        r1 = (-b+calc)/(2*a);
        r2 = (-b-calc)/(2*a);
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
