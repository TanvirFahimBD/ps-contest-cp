//K. Max and Min - https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    if(num1<num2){
        if(num3<num1){
            if(num1>num2){
               cout << num3 << " " << num1 << endl;
            }
            else{
               cout << num3 << " " << num2 << endl;
            }
        }
        else{
           if(num3>num2){
               cout << num1 << " " << num3 << endl;
            }
            else{
               cout << num1 << " " << num2 << endl;
            }
        }
    }
    else{
         if(num3<num2){
            if(num1>num2){
               cout << num3 << " " << num1 << endl;
            }
            else{
               cout << num3 << " " << num2 << endl;
            }
         }
         else{
           if(num1>num2){
               cout << num2 << " " << num1 << endl;
            }
            else{
               cout << num2 << " " << num2 << endl;
            }
        }
    }

    return 0;
}
