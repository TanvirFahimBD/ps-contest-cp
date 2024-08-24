#include<iostream>
using namespace std;

int main()
{
    int n, sm, j;
    cin >> n;
    int s[n];
    for(int i = 0; i<n; i++){
        cin >> s[i];
    }
    sm = s[0];
    for(int i = 0; i<n; i++){
        if(s[i] < sm){
            sm = s[i];
            j = i;
        }else continue;
    }

    cout << "Menor valor: " << sm << endl;
    cout << "Posicao: " << j << endl;

    return 0;
}
