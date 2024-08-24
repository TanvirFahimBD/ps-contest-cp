#include<stdio.h>
int main()
{
    int td;
    double sf, ac;
    scanf("%d %lf", &td, &sf);
    ac = td/sf;
    printf("%.3lf km/l\n",ac);
    return 0;
}
