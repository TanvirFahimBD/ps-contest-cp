//F. Digits Summation - https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include <iostream>

using namespace std;

int main(){

    long long num1, num2;

    int lastDig1, lastDig2, sum;

    cin >> num1 >> num2;

    lastDig1 = num1 % 10;
    lastDig2 = num2 % 10;
    sum = lastDig1 + lastDig2;

    cout << sum << endl;

    return 0;
}
