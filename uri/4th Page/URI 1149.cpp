#include<iostream>
using namespace std;

int main()
{
    int a, n, sum = 0;
    cin >> a;
    while(1){
        cin >> n;
        if(n>0){
            break;
        }else{
            continue;
        }
    }
    int lim = n+a;
    for( ; a<lim; a++){
        sum += a;
    }
        cout << sum << endl;

    return 0;
}
