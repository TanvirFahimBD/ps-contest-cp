///==================================================================================
///                         !ACCEPTED
///==================================================================================

///==================================================================================
///                         CONDITION:
///==================================================================================

///==================================================================================
///                          LEARNING:
///==================================================================================

#include<iostream>
#include <string>
using namespace std;

int main()
{
    int length;
    string message;
    cin >> message;
    length = message.length();
    string new_message[length], res_message;
    new_message[length] = message;

    for(;length>0;length--)
    {
        if(new_message[length] == 'h' || new_message[length] == 'e' || new_message[length] == 'l' || new_message[length] == 'o')
        {
            res_message += new_message[length];
        }
    }

    if(res_message == 'hello')
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}





//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	string s="hello",ss;
//	cin>>ss;
//	int j = 4;
//	for(int i =ss.size()-1;i>=0;i--){
//		if(ss[i]==s[j]){
//			s.pop_back();
//			j--;
//			if(j==-1)break;
//		}
//	}
//	if(s.size()>0)cout<<"NO";
//	else cout<<"YES";
//	return 0;
//}


