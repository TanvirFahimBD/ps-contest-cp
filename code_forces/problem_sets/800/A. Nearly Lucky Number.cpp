#include<bits/stdc++.h>
using namespace std;

int main()
{
//    int t;
//    cin >> t;
//    while(t>0){

    string num;
    int i, count = 0;
    cin >> num;

    ///Counting is all the numbers are 4 or 7
    for(i=0; i<num.size(); i++){
        if(num[i]=='4' || num[i]=='7'){
            count++;
        }
    }

    /// Confirming the length is also equal 4 or 7
    if(count==4 || count==7) cout << "YES" << endl;
        else cout << "NO" << endl;

//        t--;
//    }

    return 0;
}
