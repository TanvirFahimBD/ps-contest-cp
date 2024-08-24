#include<bits/stdc++.h>
using namespace std;

int main()
{
        int i, n, count = 0;
        cin >> n;
        string str;
        cin >> str;
        for(i=0; i<n; i++){
            if(str[i]==str[i+1]){
                count++;
            }
        }
        cout << count << endl;

    return 0;
}
