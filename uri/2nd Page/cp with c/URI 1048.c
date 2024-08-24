#include<stdio.h>
int main()
{
    double a, ns, me;
    scanf("%lf", &a);
    if(a>=0 && a<=400.00){
        me = (a*15.00)/100.00;
        ns = a + me;
        printf("Novo salario: %.2lf\n",ns);
        printf("Reajuste ganho: %.2lf\n",me);
        printf("Em percentual: 15 %%\n");
    }
    else if(a>=400.01 && a<=800.00){
        me = (a*12.00)/100.00;
        ns = a + me;
        printf("Novo salario: %.2lf\n",ns);
        printf("Reajuste ganho: %.2lf\n",me);
        printf("Em percentual: 12 %%\n");
    }
    if(a>=800.01 && a<=1200.00){
        me = (a*10.00)/100.00;
        ns = a + me;
        printf("Novo salario: %.2lf\n",ns);
        printf("Reajuste ganho: %.2lf\n",me);
        printf("Em percentual: 10 %%\n");
    }
    if(a>=1200.01 && a<=2000.00){
        me = (a*7.00)/100.00;
        ns = a + me;
        printf("Novo salario: %.2lf\n",ns);
        printf("Reajuste ganho: %.2lf\n",me);
        printf("Em percentual: 7 %%\n");
    }
    if(a>2000.00){
        me = (a*4.00)/100.00;
        ns = a + me;
        printf("Novo salario: %.2lf\n",ns);
        printf("Reajuste ganho: %.2lf\n",me);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
