//C. Simple Calculator - https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

#include <iostream>

using namespace std;

int main(){
    long long num1, num2, sum, sub, mul;

    cin >> num1 >> num2;

    sum = num1 + num2;
    mul = num1 * num2;
    sub = num1 - num2;

    cout << num1 << " + " << num2 << " = " << sum << endl;
    cout << num1 << " * " << num2 << " = " << mul << endl;
    cout << num1 << " - " << num2 << " = " << sub << endl;

    return 0;
}


