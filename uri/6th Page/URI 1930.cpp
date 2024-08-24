#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4, x, sum = 0;
    for(int i=0; i<n; i++){
        cin >> x;
        sum += x-1;
    }
    sum++;
    cout << sum << endl;

    return 0;
}
