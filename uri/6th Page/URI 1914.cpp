#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){

        char ch1[100], ch2[100], ch3[100], ch4[100];
        long long int i, j;
        cin >> ch1 >> ch2 >> ch3 >> ch4;
        cin >> i >> j;
        i += j;
        if(ch4[0]=='I'){
            if(i%2 == 0){
                    cout << ch1 << endl;
            }else{
                    cout << ch3 << endl;

            }
        }
        else{
            if(i%2 == 0){
                    cout << ch3 << endl;
            }else{
                    cout << ch1 << endl;

            }
        }

        t--;
    }

    return 0;
}
