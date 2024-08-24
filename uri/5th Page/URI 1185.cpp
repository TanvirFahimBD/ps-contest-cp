#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int c, r, count = 0;
    char ch[2];
    double arr[12][12], sum = 0.0, avg = 0.0;
    cin >> ch;
    for(r = 0; r<12; r++){
        for(c = 0; c<12; c++){
            cin >> arr[r][c];
        }
    }
    for(r = 0; r<11; r++){
        for(c = 0; c<11-r; c++){
            sum += arr[r][c];
            count++;
        }
    }
    avg = sum / count;
    if(ch[0] == 'S') cout << fixed << setprecision(1) << sum << endl;
    else if(ch[0] == 'M') cout << fixed << setprecision(1) << avg << endl;

    return 0;
}
