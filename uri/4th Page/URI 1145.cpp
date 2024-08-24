#include<iostream>
using namespace std;

int main()
{
    int a, b, x = 1;
    cin >> a >> b;
    for(int i = 1; i <= (b/a); i++){
        for(int j = 1; j<=a; j++){
            if(j == a){
                cout << x;
            }else{
            cout << x << " ";
            }
            x++;
        }
        cout << endl;
    }

    return 0;
}
