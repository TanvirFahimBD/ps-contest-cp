#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, hr, hrr, mn, mnr;
    cin >> t;
    hr =  t/3600;
    hrr =  t%3600;
    mn =  hrr/60;
    mnr =  hrr%60;
    cout << hr << ":" << mn << ":" << mnr << endl;

    return 0;
}
