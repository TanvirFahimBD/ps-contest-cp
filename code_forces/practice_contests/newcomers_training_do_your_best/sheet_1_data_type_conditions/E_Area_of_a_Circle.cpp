//E. Area of a Circle - https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double r, PI = 3.141592653;

    cin >> r;

    cout << fixed << setprecision(9) << PI *(r*r) << endl;

    return 0;
}
