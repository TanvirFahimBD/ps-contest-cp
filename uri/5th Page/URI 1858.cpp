#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, s, pos = 0;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++){
        cin >> arr[i];
    }
    s = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<s){
            s = arr[i];
            pos = i;
        }
    }
    pos++;

    cout << pos<< endl;

    return 0;
}
