#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x;
    cin >> x;
    for(int i = 0; i<100; i++){
        cout << "N[" << i << "] = " << fixed << setprecision(4) << x  << endl;
        x /= 2;
    }

    return 0;
}
