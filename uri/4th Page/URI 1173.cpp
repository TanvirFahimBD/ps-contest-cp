#include<iostream>
using namespace std;

int main()
{
    int n, i = 0, N[10];
    cin >> n;
    while(i<10){
        N[i] = n;
        cout << "N["<<i<<"] = " << n << endl;
        n = n*2;
        i++;
    }

    return 0;
}
