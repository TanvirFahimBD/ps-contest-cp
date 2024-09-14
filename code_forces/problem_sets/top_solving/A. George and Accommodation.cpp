#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, x, y, n, count = 0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x >> y;
        if(y-x>=2){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
