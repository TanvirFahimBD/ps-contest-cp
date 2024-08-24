//take all steps for both & insert all steps in an array
// sort the array and count the number of different values
// decide the count value equal or not of steps/lvl values

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int lvl, ps, qs, arr[201], count=0;
    cin >> lvl;

    cin >> ps;
    for(int i=0; i<ps; i++){
        cin >> arr[i];
    }

    cin >> qs;
    for(int i=ps; i<ps+qs; i++){
        cin >> arr[i];
    }

    sort(arr, arr+(ps+qs));

    for(int i=0; i<ps+qs; i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }

    if(count == lvl) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;

    return 0;
}
