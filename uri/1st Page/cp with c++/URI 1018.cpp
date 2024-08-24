#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tk, hun, hunr, fif, fifr, twn, twnr, tn, tnr, fv, fvr, tu, tur;
    cin >> tk;
    hun = tk/100;
    hunr = tk%100;

    fif = hunr/50;
    fifr = hunr%50;

    twn = fifr/20;
    twnr = fifr%20;

    tn = twnr/10;
    tnr = twnr%10;

    fv = tnr/5;
    fvr = tnr%5;

    tu = fvr/2;
    tur = fvr%2;

    cout << tk << endl;
    cout << hun <<" nota(s) de R$ 100,00" << endl;
    cout << fif <<" nota(s) de R$ 50,00" << endl;
    cout << twn <<" nota(s) de R$ 20,00" << endl;
    cout << tn <<" nota(s) de R$ 10,00" << endl;
    cout << fv <<" nota(s) de R$ 5,00" << endl;
    cout << tu <<" nota(s) de R$ 2,00" << endl;
    cout << tur <<" nota(s) de R$ 1,00" << endl;

    return 0;
}
