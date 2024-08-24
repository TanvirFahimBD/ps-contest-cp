//scanf used to get the input properly
//sprintf used for keep the input in string rather not printing
//default - value show but for + values set if get and print
// show the rest digits with four floating points
#include<iostream>
using namespace std;

int main()
{
    long double n;
    char ch[111];
    scanf("%LE", &n);
    sprintf(ch, "%LE", n);
    if(ch[0] != '-' ) cout << '+';
    printf("%.4LE\n", n);

    return 0;
}
