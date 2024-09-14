#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //Start from 2 & repeat before last one
    for(int i=1; i<n; i++){
        if(i%2 == 0){
            cout << "I love that ";
        }
        else if(i%2 != 0){
            cout << "I hate that ";
        }
    }

    // Works for lastone or 1 & print
    if(n%2 == 0){
        cout << "I love it" << endl;
    }
    else if(n%2 != 0){
        cout << "I hate it" << endl;
    }

    return 0;
}
