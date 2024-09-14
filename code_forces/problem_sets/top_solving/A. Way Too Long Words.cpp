#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){
        char ch[101];
        cin >> ch;
        int x = strlen(ch);
//        cout << x << endl;
//        cout << ch << endl;
        if(x<=10){
            cout << ch << endl;
        }else{
            cout << ch[0] << x-2 << ch[x-1] << endl;
        }

        t--;
    }


    return 0;
}
