#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    double salary, sales, total;
    cin >> name;
    cin >> salary >> sales;
    total = salary + ((sales*15)/100);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
