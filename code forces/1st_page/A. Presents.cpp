#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    // Counting the receiving position
    for(j=1; j<=n; j++){

    // Counting the given position value using array index
        for(i=0; i<n; i++){

    //If receiving position equal given position then show the real position by increasing index position + 1.
            if(arr[i] == j){
                cout << i+1 << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
