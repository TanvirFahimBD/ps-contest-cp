#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){
        int i = 2, n = 0;
        long long int N[60];
        N[0] = 0;
        N[1] = 1;
        for(; i <= 60; i++){
            N[i] = N[i-1]+ N[i-2];
        }
        cin >> n;
        for(i = 0; i <= n; i++){
            if(n == i) cout << "Fib(" << n << ") = " << N[i] << endl;
        }
        t--;
    }

    return 0;
}

