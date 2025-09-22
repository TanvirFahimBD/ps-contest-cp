///Sort-Not Same Count-Count Even or Odd-Show Output

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, count = 0;
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    for(i=0; i<str.size(); i++){
            if(str[i] != str[i+1]){
                count++;
            }
    }
    if(count%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else cout << "IGNORE HIM!" << endl;

    return 0;
}
