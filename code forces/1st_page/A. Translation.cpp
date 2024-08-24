#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    //reverse first string
    reverse(str1.begin(), str1.end());
    //compare with given second string with reversed first string
    if(str1 == str2) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
