#include<stdio.h>
int main()
{
    int a, b, c, mab, m;
    scanf("%d %d %d", &a, &b, &c);
    mab = (a+b+(abs(a-b)))/2;
    m = (mab+c+(abs(mab-c)))/2;
    printf("%d eh o maior\n",m);
    return 0;
}
