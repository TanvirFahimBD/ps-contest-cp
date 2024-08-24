#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){
        int x, z = 0;
        cin >> x;
        for(int i = 2; i<x; i++){
            if(x%i==0 ){
                z = 1;
                break;
            }
        }
        if(z == 1) cout << x << " nao eh primo" << endl;
        else if(z != 1) cout << x << " eh primo" << endl;

        t--;
    }

    return 0;
}
