#include<iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, n, c = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        if(i == (n-1)){
           cout << a;
            c = b + a;
            a = b;
            b = c;
        }else{
            cout << a << " ";
            c = b + a;
            a = b;
            b = c;
        }
    }
    cout << endl;

    return 0;
}
