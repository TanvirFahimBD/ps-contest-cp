#include<stdio.h>
int main()
{
    int en, wh;
    float ar, SALARY;
    scanf("%d %d %f", &en, &wh, &ar);
    SALARY = wh*ar;
    printf("NUMBER = %d\n",en);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}
