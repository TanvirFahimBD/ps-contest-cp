#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double arr[12][12], sum = 0;
    char ch[2];
    int m = 1, n = 11;

    cin >> ch;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<5; i++){
        for(int j=m; j<n; j++){
            sum += arr[j][i];
        }
        m++;
        n--;
    }

    if(ch[0] == 'S') cout << fixed << setprecision(1) << sum << endl;
    else cout << fixed << setprecision(1) << sum / 30.0 << endl;

    return 0;
}
