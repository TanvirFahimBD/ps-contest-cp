#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, r1, r2;
    cin >> a >> b >> c;
    d = sqrt((b*b)-(4*a*c));
    if(d>0 && a!=0){
        r1 = ((-b)+d)/(2*a);
        r2 = ((-b)-d)/(2*a);
        cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
    }else cout << "Impossivel calcular" << endl;

    return 0;
}
