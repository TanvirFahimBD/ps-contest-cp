#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    while(t>0){
        int a, b, c, r;
        cin >> a >> b >> c;
        r = a+b+c;
        if(r>=2){
            count++;
        }

        t--;
    }

    cout << count << endl;

    return 0;
}
