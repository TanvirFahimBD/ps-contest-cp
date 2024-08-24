#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, wh;
    double amount, salary;
    cin >> num >> wh >> amount;
    salary = wh * amount;
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}
