#include<bits/stdc++.h>
using namespace std;

int main()
{
    int min, i;
    int arr[]= {3,9,13,10,5,3,9,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    for(i=0; i<len; i++){
        if(arr[i]<=arr[0]){
            arr[0] = arr[i];
            min = arr[i];
        }
    }
    cout << min << endl;


    return 0;
}
