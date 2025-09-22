#include<bits/stdc++.h>
using namespace std;

int main()
{
    int person, x, count = 0;
    cin >> person;

    //If get x == 1 only then increase count value
    for(int i=0; i<person; i++){
            cin >> x;
            if(x == 1) {
             count++;
            }
    }

    //Compare the 0 for easy and 1 for hard condition
    if(count>0){
        cout << "HARD" << endl;
    }
    else if(count == 0){
        cout << "EASY" << endl;
    }

    return 0;
}
