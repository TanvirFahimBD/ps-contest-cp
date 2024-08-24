#include<bits/stdc++.h>
using namespace std;

int main()
{
    double num,  tk;
    int tkf, hunt, huntr, fift, fiftr, twnt, twntr, tnt, tntr, fvt, fvtr, tut, tutr, ont, ontr, ffp, ffpr, tfp, tfpr, tnp, tnpr, fvp, fvpr;
    cin >> num;
    tk = (num * 100);
    tkf = (int)tk;

    hunt = tkf/10000;
    huntr = tkf%10000;

    fift = huntr/5000;
    fiftr = huntr%5000;

    twnt = fiftr/2000;
    twntr = fiftr%2000;

    tnt = twntr/1000;
    tntr = twntr%1000;

    fvt = tntr/500;
    fvtr = tntr%500;

    tut = fvtr/200;
    tutr = fvtr%200;

    ont = tutr/100;
    ontr = tutr%100;

    ffp = ontr/50;
    ffpr = ontr%50;

    tfp = ffpr/25;
    tfpr = ffpr%25;

    tnp = tfpr/10;
    tnpr = tfpr%10;

    fvp = tnpr/5;
    fvpr = tnpr%5;

    cout << "NOTAS:" << endl;
    cout << hunt << " nota(s) de R$ 100.00" << endl;
    cout << fift << " nota(s) de R$ 50.00" << endl;
    cout << twnt << " nota(s) de R$ 20.00" << endl;
    cout << tnt << " nota(s) de R$ 10.00" << endl;
    cout << fvt << " nota(s) de R$ 5.00" << endl;
    cout << tut << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << ont << " moeda(s) de R$ 1.00" << endl;
    cout << ffp << " moeda(s) de R$ 0.50" << endl;
    cout << tfp << " moeda(s) de R$ 0.25" << endl;
    cout << tnp << " moeda(s) de R$ 0.10" << endl;
    cout << fvp << " moeda(s) de R$ 0.05" << endl;
    cout << fvpr << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
