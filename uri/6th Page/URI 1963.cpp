// Find current price percentage
// New & current price difference
// Count difference percentage in respect current

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, tnper, diff, prin;
    cin >> a >> b;
    tnper = a/10.0;
    diff = b-a;
    prin = (diff/tnper) * 10;
    cout << fixed << setprecision(2) << prin << "%" << endl;

    return 0;
}
