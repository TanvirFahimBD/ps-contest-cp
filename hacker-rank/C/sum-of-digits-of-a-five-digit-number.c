#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch[100];
    int n, sum = 0, str_size, i, n_mod, n_div;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    sprintf(ch,"%d", n);
    str_size = strlen(ch);
    n_div = n;
    for(i=0; i<str_size; i++)
    {
        n_mod = n_div % 10;
        n_div = n_div / 10;
        sum += n_mod;
//        printf("===============\n");
//        printf("n_div = %d\n", n_div);
//        printf("n_mod = %d\n", n_mod);
    }
        printf("%d\n", sum);
    return 0;
}
