#include<bits/stdc++.h>
using namespace std;

int main()
{
    double pi = 3.14159, volume, r;
    cin >> r;
    volume = (4.0/3)* pi * (r*r*r);
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}
