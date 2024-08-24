#include<bits/stdc++.h>
using namespace std;

int main()
{
        int i, j;
        string str;
        cin >> str;
        for(i=0; i<str.size(); i+=2){
            for(j=0; j<str.size()-1; j+=2){
                if(str[j]>str[j+2]){
                    swap(str[j], str[j+2]);
                }
            }
        }
        cout << str << endl;

    return 0;
}
