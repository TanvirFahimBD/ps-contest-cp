//? Not works for != condition though i think it needs to work
//condition says vowel but it include y/Y on next section with vowels
//if find vowel continue or include . & convert others char tolowercase. Then keep to new string

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str, str2;
    cin >> str;

    for(int i = 0; i<str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e'  || str[i] == 'i'  || str[i] == 'o'  || str[i] == 'u' || str[i] == 'y' || str[i] == 'A' || str[i] == 'E'  || str[i] == 'I'  || str[i] == 'O'  || str[i] == 'U'  || str[i] == 'Y'){
            continue;
        }
        else{
            str2 += '.';
            str2 += tolower(str[i]);
        }
    }
    cout << str2 << endl;

    return 0;
}



//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    string str, str2;
//    cin >> str;
//
//    for(int i = 0; i<str.length(); i++){
//        if(str[i] != 'a' || str[i] != 'e'  || str[i] != 'i'  || str[i] != 'o'  || str[i] != 'u' || str[i] != 'y' || str[i] != 'A' || str[i] != 'E'  || str[i] != 'I'  || str[i] != 'O'  || str[i] != 'U'  || str[i] != 'Y'){
//            str2 += '.';
//            str2 += tolower(str[i]);
//        }
//        else{
//                continue;
//        }
//    }
//    cout << str2 << endl;
//
//    return 0;
//}
