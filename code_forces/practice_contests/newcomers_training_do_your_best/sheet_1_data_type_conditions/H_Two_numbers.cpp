//H. Two numbers - https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float num1, num2;

    cin >> num1 >> num2;

    cout << "floor " << num1 << " / " << num2 << " = " << floor(num1/num2) << endl;
    cout << "ceil " << num1 << " / " << num2 << " = " << ceil(num1/num2) << endl;
    cout << "round " << num1 << " / " << num2 << " = " << round(num1/num2) << endl;

    return 0;
}
