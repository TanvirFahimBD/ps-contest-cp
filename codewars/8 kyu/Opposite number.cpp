#include<bits/stdc++.h>
using namespace std;

int opposite(int number)
{
    return -(number);
}

int main()
{
    int t;
    cin >> t;
    while(t>0){

        int num, res;
        cin >> num;
        res = opposite(num);
        cout << res << endl;

        t--;
    }


    return 0;
}
