#include<stdio.h>
int main()
{
    char nm;
    double sl, sd, TOTAL;
    scanf("%s %lf %lf",&nm ,&sl, &sd);
    TOTAL = (sl+((sd*15)/100));
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
