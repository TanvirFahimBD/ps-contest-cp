#include<iostream>
using namespace std;

int main()
{
    int a, i = 0, b = 0, c = 0, d = 0;
    cin >> a;
    for(; i < (a*4); i++){
            b = i+1;
            c = b+1;
            d = c+1;
        cout << b << " " << c << " " << d << " PUM" << endl;
            i += 3;
    }

    return 0;
}
