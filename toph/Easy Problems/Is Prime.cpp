#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, count = 0;
    cin >> x;
    for(int i=2; i<x; i++){
        if(x%i == 0){
            count++;
        }
        else count--;

    }

    if(count>0){
        cout << "No" << endl;
    }
    else if((count<0)){
        cout << "Yes" << endl;
    }

    return 0;
}
