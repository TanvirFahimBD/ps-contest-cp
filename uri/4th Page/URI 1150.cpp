#include<iostream>
using namespace std;

int main()
{
    int a, b, sum = 0, count = 0;
    cin >> a;
    while(1){
        cin >> b;
        if(b>a){
            break;
        }else continue;
    }
    for(; a<b; a++){
        sum += a;
        count++;
        if(sum>=b){
            cout << count << endl;
            break;
        }else continue;
    }

    return 0;
}
