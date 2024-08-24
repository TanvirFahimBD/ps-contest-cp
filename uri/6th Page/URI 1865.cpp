#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){

        char ch[100];
        int n;
        cin >> ch;
        cin >> n;
        if(!strcmp(ch, "Thor")) cout << "Y" << endl;
        else cout << "N" << endl;

        t--;
    }

    return 0;
}
