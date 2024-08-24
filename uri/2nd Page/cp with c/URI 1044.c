#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(b%a == 0 || a%b == 0){   //TC: both can module
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
    return 0;
}
