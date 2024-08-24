#include<bits/stdc++.h>
using namespace std;
int main(){

    string num;
    cin >> num;

    int count = 1;
    for(int i=0; i<num.size(); i++){
        if(num[i] == num[i-1]){
            count++;
            if(count == 7){
                break;
            }

        }else{
            count = 1;
        }
    }

    if(count == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}


/*=============================
    Another Solution
==============================*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){

    string num;
    cin >> num;

    int count = 1;
    for(int i=0; i<num.size(); i++){
        if(num[i] == num[i-1]){
            count++;
            if(count == 7){
                cout << "YES" << endl;
                return 0;
            }
        }else{
            count = 1;
        }
    }

    cout << "NO" << endl;
    return 0;
}

*/
