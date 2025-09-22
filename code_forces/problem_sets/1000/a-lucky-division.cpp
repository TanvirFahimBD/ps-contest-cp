// https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>
using namespace std;

vector<int> lucky;

void generateLucky(int num) {
    if (num > 1000) return;
    if (num != 0) lucky.push_back(num);

    generateLucky(num * 10 + 4);
    generateLucky(num * 10 + 7);
}

int main() {
    int n;
    cin >> n;

    generateLucky(0);

    for (int x : lucky) {
        if (n % x == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}


// Input
// 47
// Output
// YES
// Input
// 16
// Output
// YES
// Input
// 78
// Output
// NO