// https://codeforces.com/problemset/problem/1328/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long rem = a % b;
        if (rem == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << b - rem << "\n";
        }
    }
    return 0;
}

// Input
// 5
// 10 4
// 13 9
// 100 13
// 123 456
// 92 46
// Output
// 2
// 5
// 4
// 333
// 0