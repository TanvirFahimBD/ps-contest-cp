#include<iostream>
using namespace std;

int main()
{
    int n, pos, max = 0;
    for(int i = 1; i<=100; i++){
        cin >> n;
        if(n > max){
            max = n;
            pos = i;
        }else{
            continue;
        }
    }
    cout << max << endl;
    cout << pos << endl;

    return 0;
}
