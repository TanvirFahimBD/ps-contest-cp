//1. if mod == 0 then number will be divide
//2. if mod != 0 then number will be (divide+1)
//3. Count both side divide value (*) will be between them. Because it will cover both x & y axis.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, a, x, y, num;
    cin >> n >> m >> a;
    if((n%a) == 0){
        x = (n/a);
    }
    else {
        x = (n/a) + 1;
    }

    if((m%a) == 0){
        y = (m/a);
    }
    else {
        y = (m/a) + 1;
    }
    num = x * y;
    cout << num << endl;
    return 0;
}
