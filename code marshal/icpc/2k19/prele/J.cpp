#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, r=0;
    cin >> n;
    if(n<6 && n>0){
        cout << "1" << endl;
    }

    if(n>=6){
        r = n/6;
        r++;
        cout << r << endl;
    }

    return 0;
}

