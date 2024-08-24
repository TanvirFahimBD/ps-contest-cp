#include<iostream>
using namespace std;

int main()
{
    int a, b, i, n;
    cin >> a >> b;
    if(a > b){
        i = b;
        n = a;
    }else if(a<b){
        i = a;
        n = b;
    }else{
        cout << a << endl;
    }
    for( i = i+1; i < n; i++){
        if(i%5 == 2 || i%5 == 3)
            cout << i << endl;
    }

    return 0;
}
