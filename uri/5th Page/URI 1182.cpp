#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int cn, r, c;
    char ch[2];
    double arr[12][12], sum = 0.0, avg = 0.0;
    cin >> cn;
    cin >> ch;
    for(r = 0; r < 12; r++){
        for(c = 0; c < 12; c++){
            cin >> arr[r][c];
            if(c == cn){
                sum += arr[r][c];
            }
        }
    }
    avg = sum / 12.0;
    if(ch[0] == 'S') cout << fixed << setprecision(1) << sum << endl;
    else if(ch[0] == 'M') cout << fixed << setprecision(1) << avg << endl;

    return 0;
}


