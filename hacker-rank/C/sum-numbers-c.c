#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, sum1, sub1;
    float f, g, sum2, sub2;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &f, &g);
    sum1 = a + b;
    sub1 = a - b;
    sum2 = f + g;
    sub2 = f - g;
    printf("%d %d\n", sum1, sub1);
    printf("%.1f %.1f", sum2, sub2);
    
    return 0;
}