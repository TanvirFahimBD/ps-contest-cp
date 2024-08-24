#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){
        int num1, num2;
        double mult;
        cin >> num1 >> num2;
        mult = (double)num1 / num2;
        if(num1!=0 && num2 == 0){
            cout << "divisao impossivel" << endl;
        }else if(num1 == 0 && num2 != 0){
            cout << fixed << setprecision(1) << mult << endl;
        }else{
            cout << fixed << setprecision(1) << mult << endl;
        }

        t--;
    }

    return 0;
}
