/// Count the number of lower & upper - Convert the string depending on the condition

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int i, mid, lowerCount = 0, upperCount = 0;
    cin >> str;
    for(i=0; i<str.size(); i++){
        if(str[i]>=65 && str[i]<=90){
            lowerCount++;
        }
        else if(str[i]>=97 && str[i]<=122){
            upperCount++;
        }
    }

    if(lowerCount<upperCount){
        for(i=0; i<str.size(); i++){
            str[i] = tolower(str[i]);
        }
        cout << str << endl;
//        transform(str.begin(), str.end(), str.begin(), ::tolower);

    }
    else if(lowerCount>upperCount){
        for(i=0; i<str.size(); i++){
            str[i] = toupper(str[i]);
        }
//        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str << endl;
    }
    else if(lowerCount == upperCount){
        for(i=0; i<str.size(); i++){
            str[i] = tolower(str[i]);
        }
//        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str << endl;
    }

    return 0;
}
