#include<stdio.h>
int main()
{
    int n, i, n1, res;
        scanf("%d", &n);
    for(i = 1; i<=n; i++ ){
        scanf("%d", &n1);
        res = (pow(10,n1)) - n1;
        printf("%d\n",res);
    }
     return 0;
}

