// count every input percentage & sum
// div sum with numbers of input & multiply with 100

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    double num, a, n, res;
    cin >> num;
    for(int i=0; i<num; i++){
        cin >> n;
        a += (n/100);
    }
    res = (a/num)*100;
    cout << fixed << setprecision(12) << res << endl;

    return 0;
}
