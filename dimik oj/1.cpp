#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t > 0){
        int a;
        cin >> a;
        if(a % 2 == 0){
            cout << "even" << endl;
        }else cout << "odd" << endl;
        t--;
    }

    return 0;
}
