#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, k, arr[100], count = 0;

    cin >> n >> k;

    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    for(i=0; i<n; i++){
        if(arr[i]>0 && arr[i]>=arr[k-1]){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
