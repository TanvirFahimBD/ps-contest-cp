#include <string>
using namespace std ;

string reverseString (string str )
{
    reverse(str.begin(), str.end());
    return str;
}


//#include<bits/stdc++.h>
//using namespace std;
//
//string reverseString (string str )
//{
//    reverse(str.begin(), str.end());
//    return str;
//}
//
//int main()
//{
//    int t;
//    cin >> t;
//    while(t>0){
//
//        string str1, str2;
//        cin >> str1;
//        cout << str1 << endl;
//        str2 = reverseString(str1);
//        cout << str2 << endl;
//
//        t--;
//    }
//
//    return 0;
//}



//
//#include<bits/stdc++.h>
//using namespace std;
//
//string reverseString (string str )
//{
//
//    int i, j, len;
//    string str2;
//    len = str.size();
//    for(i=len-1, j=0; i>=0&&j<len; i--, j++){
//            str2[j] = str[i];
//            cout << str2[j] << endl;
//        }
//        cout << str2 << endl;
//
//    return str2 ;
//}
//
//int main()
//{
//    int t;
//    cin >> t;
//    while(t>0){
//
//        string str1, str2;
//        cin >> str1;
//        str2 = reverseString(str1);
//        cout << str2 << endl;
//
//        t--;
//    }
//
//
//
//    return 0;
//}

