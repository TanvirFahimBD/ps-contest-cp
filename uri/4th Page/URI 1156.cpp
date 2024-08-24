#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float s = 0, a1 = 1;
    for(int i = 1; i<40; i+= 2){
        s +=(i/a1);
        a1 *= 2;
    }
    cout << fixed << setprecision(2) << s << endl;

    return 0;
}
