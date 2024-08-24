#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tm, yr, yrr, mn, mnr;
    cin >> tm;
    yr = tm/365;
    yrr = tm%365;
    mn = yrr/30;
    mnr = yrr%30;
    cout << yr <<" ano(s)" << endl;
    cout << mn <<" mes(es)" << endl;
    cout << mnr <<" dia(s)" << endl;

    return 0;
}
