#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a, age = 0, count = 0;
    float avg = 0;
    while(1){
        cin >> a;
        if(a<0){
            break;
        }else{
            age += a;
            count ++;
        }
    }
    avg = float(age) / count;
    cout << fixed << setprecision(2) << avg << endl;

    return 0;
}
