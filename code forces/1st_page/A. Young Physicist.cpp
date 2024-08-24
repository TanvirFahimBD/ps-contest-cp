///==================================================================================
///                         ACCEPTED
///==================================================================================

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int n, a, b, c, res_a = 0, res_b = 0, res_c = 0;
    cin >> n;
    while(n>0)
    {
        cin >> a >> b >> c;
        res_a = res_a + (a);
        res_b = res_b + (b);
        res_c = res_c + (c);
        n--;
    }

    if(res_a == 0 && res_b == 0 && res_c == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

///==================================================================================
/// TRICKS: HERE NOT THE WHOLE POINT SUM VALUE WILL BE 0 RATHER X, Y, Z DIFFERENT AXIS
/// SUM VALUE WILL BE INDIVIDUALLY 0
///==================================================================================
