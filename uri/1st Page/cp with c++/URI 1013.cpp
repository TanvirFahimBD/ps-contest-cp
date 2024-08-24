#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, mab, mabc;
    cin >> a >> b >> c;
    mab = ((a+b+abs(a-b))/2);
    mabc = ((mab+c+abs(mab-c))/2);
    cout << mabc << " eh o maior" << endl;

    return 0;
}
