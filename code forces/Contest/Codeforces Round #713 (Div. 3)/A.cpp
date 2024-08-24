#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){

        int i, arr[100], a, temp;
        cin >> a;

        for(i=0; i<a; i++){
            cin >> arr[i];
        }

        for(i=1; i<a; i++){
            temp = arr[0];
            if(temp == arr[i] && temp != arr[i+1]){
                cout << i+2 << endl;
                break;
            }
            else if(temp == arr[i+1] && temp != arr[i]){
                cout << i+1 << endl;
                break;
            }else if(temp != arr[i+1] && temp != arr[i]){
                cout << i++ << endl;
                break;
            }
        }


        t--;
    }

    return 0;
}




//        for(i=0; i<a-1; i++){
//            for(int j=i+1; j<a; j++){
//                if(arr[i] > arr[j]){
//                    temp = arr[i];
//                    arr[i] = arr[j];
//                    arr[j] = temp;
//                }
//            }
//        }

