#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    while(t>0){
        char ch[100];
        cin >> ch;
        if(ch[1] == '+') {
         count++;
        }
        else if(ch[1] == '-') {
         count--;
        }
//        else if(ch == "X++") count++;
//        else if(ch == "--X") count--;
//        else if(ch == "X--") count--;

        t--;
    }

    cout << count << endl;


    return 0;
}
