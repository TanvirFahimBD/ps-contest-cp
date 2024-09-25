//J. Multiples - https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

#include <iostream>

using namespace std;

int main(){

    int num1, num2;

    cin >> num1 >> num2;

    if(num1>num2){
        if(num1%num2 == 0){
            cout << "Multiples" << endl;
        }
        else{
            cout << "No Multiples" << endl;
        }
    }
    else{
         if(num2%num1 == 0){
                cout << "Multiples" << endl;
         }
        else{
            cout << "No Multiples" << endl;
        }
    }

    return 0;
}
