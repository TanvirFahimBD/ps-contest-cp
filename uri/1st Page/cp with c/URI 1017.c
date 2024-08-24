#include<stdio.h>
int main()
{
    int st, avs, cs=12;
    double fl;
    scanf("%d %d", &st, &avs);
    fl = (double)(st*avs)/cs;
    printf("%.3lf\n",fl);
    return 0;
}
