#include<bits/stdc++.h>
using namespace std;

int main()
{
    double pi = 3.14159, a, b, c, art, arc, aot, aos, aor;
    cin >> a >> b >> c;
    art = (1/2.0) * a * c;
    arc = pi * (c*c);
    aot = ((a+b)/2) * (c);
    aos = b*b;
    aor = a*b;
    cout << "TRIANGULO: " << fixed << setprecision(3) << art << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << arc << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << aot << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << aos << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << aor << endl;

    return 0;
}
