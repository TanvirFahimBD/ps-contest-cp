#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, arr[100000], x, count = 0;
    cin >> t;

    //Input full array
    for(int i = 0; i<t; i++){
        cin >> arr[i];
    }

    // Compare with next value same or not. If not same then increase count value.
    for(int i = 0; i<t; i++){
        if(arr[i] != arr[i+1]){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
