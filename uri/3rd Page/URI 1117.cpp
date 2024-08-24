#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int count = 0;
    double num1, sum = 0, avg;
    while(1){
        cin >> num1;
        if(0<=num1 && num1<=10){
            count++;
            sum += num1;
            avg = sum / 2;
            if(count>=2){
    cout << fixed << setprecision(2) << "media = " <<avg << endl;
                break;
            }
        }else{
            cout << "nota invalida" << endl;
        }
    }

    return 0;
}
