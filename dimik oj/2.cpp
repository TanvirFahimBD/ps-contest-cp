#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, last_number, len;
    char num[102], last_char;  //"\n" or new line Matters
    cin >> t;
    while(t > 0){
        cin >> num;
        len = strlen(num);
        last_number = (num[len- 1]) - '0';   //ASCII -> '0' = 48
            if(last_number%2 == 0){
            cout << "even" << endl;
            }else cout << "odd" << endl;
        t--;
    }

    return 0;
}

