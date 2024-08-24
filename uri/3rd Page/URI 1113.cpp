#include<iostream>
using namespace std;

int main()
{
    while(1){
        int a, b;
        cin >> a >> b;
        if(a>b){
            cout << "Decrescente" << endl;
        }
        else if(b>a){
            cout << "Crescente" << endl;
        }else{
            break;
        }
    }

    return 0;
}
