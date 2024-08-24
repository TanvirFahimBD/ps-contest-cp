#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, scd, sab;
    cin >> a >> b >> c >> d;
    scd = c + d;
    sab = a + b;
    if((b>c && d>a ) && (scd > sab) && (c>0 && d>0) && (a%2 == 0)){
        cout << "Valores aceitos" << endl;
    }else cout << "Valores nao aceitos" << endl;

    return 0;
}
