#include<bits/stdc++.h>
using namespace std;

string even_or_odd(int number) {

//    if(number%2 == 0) return "Even" ;
//    else return "Odd";

    /// More efficient code
    return number % 2 == 0 ? "Even" : "Odd";
 }

int main()
{
//    int t;
//    cin >> t;
//    while(t>0){

        int a;
        string result;
        cin >> a;
        result = even_or_odd(a);
        cout << result << endl;

//
//        t--;
//    }

    return 0;
}
