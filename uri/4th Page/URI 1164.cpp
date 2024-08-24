#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){
        int x, sum = 0;
        cin >> x;
        for(int i = 1; i<x; i++){
            if(x%i == 0){
                sum += i;
            }
        }
        if(sum == x)cout << x << " eh perfeito" << endl;
        else if(sum != x) cout << x << " nao eh perfeito" << endl;
        t--;
    }

    return 0;
}
