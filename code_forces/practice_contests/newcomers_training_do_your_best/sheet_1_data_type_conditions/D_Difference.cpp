//D. Difference - https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

#include <iostream>

using namespace std;

int main(){

    long long a, b, c , d, diff;
    cin >> a >> b >> c >> d;

    diff = (a*b) - (c*d);

    cout << "Difference = " << diff << endl;
    return 0;
}
