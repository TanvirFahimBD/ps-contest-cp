#include<bits/stdc++.h>
using namespace std;

int multiply(int a, int b){
    return a*b;
}


int main()
{

    int t;
    cin >> t;
    while(t>0){

        int a, b, mul;
        cin >> a >> b;
        mul = multiply(a, b);
        cout << mul << endl;

     t--;
    }

    return 0;
}
