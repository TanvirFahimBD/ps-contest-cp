/// !!! Not Solved

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){
            int i, n, k, diff, arr[100];
            cin >> n >> k;
            diff = n - k;
            if(diff == 0){
                cout << "-1" << endl;
            }
            else if(diff == 1 && k == 0){
                cout << "1" << endl;
            }
            else if(diff == 1){
                cout << "-1" << endl;
            }
            else if(diff>=3){
                for(i=0; i<n; i++){
                        arr[i] = i+1;
                    cout << arr[i] << "  ";
                }
                cout << endl;
            }
        t--;
    }

    return 0;
}
