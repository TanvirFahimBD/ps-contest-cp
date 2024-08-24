#include<iostream>
using namespace std;

int main()
{
    int a, b, sum = 0, i, n;
    cin >> a >> b;
    if(a>b){
        i = b;
        n = a;
    }
    else if(b>a){
        i = a;
        n = b;
    }else{
        cout << sum << endl;
    }
    for(; i <= n; i++){
        if(i%13 != 0){
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}
