#include <stdio.h>

int main()
{
    //* 15 - 3. Working with Pointers
    int a = 5;

    int *b = &a;

    printf("%d\n", &a);
    printf("%d\n\n", b);

    return 0;
}