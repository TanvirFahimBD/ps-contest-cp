#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch, string[100], sentence[100];
    scanf("%c", &ch);
    scanf("%s", string);
    scanf("\n");
    scanf("%[^\n]%*c", sentence);
    printf("%c\n", ch);
    printf("%s\n", string);
    printf("%s\n", sentence);
    return 0;
}
