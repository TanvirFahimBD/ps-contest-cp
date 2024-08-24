#include<iostream>
using namespace std;

int main()
{
    int n, fac = 1;
    cin >> n;
    for(; n>=1; n--){
        fac *= n;
    }
    cout << fac << endl;

    return 0;
}
